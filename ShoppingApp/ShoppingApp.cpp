// ShoppingApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CItem.h"
using namespace std;
 
CItem list[25];
int numStudents = 0;
//Functions go here \/
int Menu(void);
void DoQuit(void);
bool Password(string password);

// end here


int main()
{




	//DISPLAY USER INTERFACE
	int option;
	do
	{
		option = Menu();
		switch (option)
		{
		case 0:
			//DoInitializeGroup();
			break;
		case 1:
			//DoEnterElementMarks();
			break;
		case 2:
			//DoDisplayPassList();
			break;
		case 3:
			//DoDisplayBestStudent();
			break;
		case 4:
			DoQuit();
		default:
			cout << "invalid option\n";
		}
	} while (option != 4);

}
    



void DoQuit(void) {

    exit(0);

}

int Menu(void)
{
	int option;
	cout << "\t0.		Add Students\n";
	cout << "\t1.		Enter Element Marks\n";
	cout << "\t2.		Display Pass Names List\n";
	cout << "\t3.		Display Best Student\n";
	cout << "\t4.		Quit\n";
	cout << "\t\t\tOption ? ";
	cin >> option;
	return option;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
