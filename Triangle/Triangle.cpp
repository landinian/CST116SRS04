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

	double angle_a;
	double angle_b;
	double angle_c;

	if (Angle != 1 || Angle != 2 || Angle != 3 || Angle != 4 || Angle != 5 || Angle != 5)
		cout << "Not a valid input" << endl;
		

		else Angle == 1;

			cout << "Enter value for angle a: ";
			cin >> angle_a;
			cout << "Enter value for angle b: ";
			cin >> angle_b;
			angle_c = 180 - angle_a - angle_b;
			cout << "Angle c = " << angle_c << '\n';


			
		return 0;
}

