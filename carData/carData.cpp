// carData.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;

struct car {
	int number;
	char type;
	char* color;
	double price;
};

void main() {
	car c;

	ifstream e;
	e.open("file");
	if (!e) {
		cout << "Error opening file.";
		exit(1);
	}

	int n = 0;
	e >> c.number;
	while (!e.fail()) {
		n++;
		e >> c.number;
	}
	cout << "\n-> The number of cars is: " << n << "\n";

	int a = 0;
	e >> c.price;
	while (!e.fail()) {

		if (a < c.price) {
			a = c.price;
		}
		e >> c.price;
	}
	e >> c.number >> c.type >> c.color >> c.price;
	while (!e.fail()) {
		if (a == c.price) {
			cout << c.number << c.type << c.color << c.price;
		}
		e >> c.number >> c.type >> c.color >> c.price;
	}

	e >> c.number >> c.type >> c.color >> c.price;
	while (!e.fail()) {
		if (strcmp(c.color, "black") == 0) {
			cout << c.number << c.type << c.color << c.price;
		}
		e >> c.number >> c.type >> c.color >> c.price;
	}

}
