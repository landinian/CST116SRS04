#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int Angle;

	cout << "Angle AAA = selection 1" << '\n'
		 << "Angle AAS = selection 2" << '\n'
		 << "Angle ASA = selection 3" << '\n'
		 << "Angle SAS = selection 4" << '\n'
		 << "Angle SSA = selection 5" << '\n'
		 << "Angle SSS = selection 6" << '\n';

	cout << "Enter selection number for which angle to solve: ";
	cin >> Angle; 


		if (Angle != 1 || Angle !=2 || Angle !=3 || Angle !=4 || Angle !=5 || Angle !=5)
			cout << "Not a valid input";
		if (Angle == 1)
			double a;
			double b;
			cout << "Enter value for angle a: ";
			cin >> a;
			cout << "Enter value for angle b: ";
			cin >> b;
			cout << "Angle c = " << 180 - a - b; 


		return 0;
}

