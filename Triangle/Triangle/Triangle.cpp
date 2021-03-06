#include "stdafx.h"
#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
	double Triangle;

	double angle_A;
	double angle_B;
	double angle_C;

	double side_a;
	double side_b;
	double side_c;

	cout << "Triangle Configuration AAA = selection 1" << '\n'
		<< "Triangle Configuration AAS = selection 2" << '\n'
		<< "Triangle Configuration ASA = selection 3" << '\n'
		<< "Triangle Configuration SAS = selection 4" << '\n'
		<< "Triangle Configuration SSA = selection 5" << '\n'
		<< "Triangle Configuration SSS = selection 6" << '\n';

	cout << "Enter selection number for which Triangle to solve: ";
	cin >> Triangle;


	if (Triangle != 1 && Triangle != 2 && Triangle != 3 && Triangle != 4 && Triangle != 5 && Triangle != 5)
		cout << "Not a valid input" << endl;


	else if (Triangle == 1)
	{
		cout << "Enter value for angle A: ";
		cin >> angle_A;
		cout << "Enter value for angle B: ";
		cin >> angle_B;
		angle_C = 180 - angle_A - angle_B;
		cout << "Angle C = " << angle_C << "degrees" << '\n';
	}
	else if (Triangle == 2)
	{
		cout << "Enter value for angle A: ";
		cin >> angle_A;
		cout << "Enter value for angle C: ";
		cin >> angle_C;
		angle_B = 180 - angle_A - angle_C;
		cout << "Enter value for length of side c: ";
		cin >> side_c;
		side_b = (side_c*sin(angle_B*(3.14 / 180))) / (sin(angle_C*(3.14 / 180)));
		side_a = (side_b*sin(angle_A*(3.14 / 180))) / (sin(angle_B*(3.14 / 180)));
		cout << "Angle B = " << angle_B << '\n' << "Side b = " << side_b << '\n' << "Side a = " << side_a << '\n';
	}
	else if (Triangle == 3)
	{
		cout << "Enter value for angle A: ";
		cin >> angle_A;
		cout << "Enter value for angle B: ";
		cin >> angle_B;
		angle_C = 180 - angle_A - angle_B;
		cout << "Enter value for length of side c: ";
		cin >> side_c;
		side_b = (side_c*sin(angle_B*(3.14 / 180))) / (sin(angle_C*(3.14 / 180)));
		side_a = (side_b*sin(angle_A*(3.14 / 180))) / (sin(angle_B*(3.14 / 180)));
		cout << "Angle B = " << angle_B << '\n' << "Side b = " << side_b << '\n' << "Side a = " << side_a << '\n';
	}
	else if (Triangle == 4)
	{
		cout << "Enter value for side b: ";
		cin >> side_b;
		cout << "Enter value for side c: ";
		cin >> side_c;
		cout << "Enter value for angle A: ";
		cin >> angle_A;
		side_a = sqrt((side_b*side_b) + (side_c*side_c) - 2 * side_b*side_c*cos(angle_A*(3.14 / 180)));
		angle_B = asin((side_b*sin(angle_A*3.14 / 180)) / side_a)*(180/3.14);
		angle_C = 180 - angle_B - angle_A;
		cout << "Side a = " << side_a << '\n' << "Angle B = " << angle_B << '\n' << "angle C = " << angle_C << '\n';
	}
	else if (Triangle == 5)
	{
		cout << "Enter value: ";
	}
	else if (Triangle == 6)
	{
		cout << "Enter value: ";
	}

	return 0;
}

