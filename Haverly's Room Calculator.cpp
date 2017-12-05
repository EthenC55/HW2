//Ethen Campos
//September 17 2017
//EthenCampos-COP2000-Homework2A
//This program calculates area for each item chosen by user

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Variables
	int
		choice;
	float
		length,
		width,
		radius,
		AREA_OF_SQUARE,
		AREA_OF_RECTANGLE,
		AREA_OF_ROUND_ROOM;

	//Constants	
	const int
		SquareRoom = 1,
		RectangularRoom = 2,
		RoundRoom = 3,
		Quit = 4;
	const float
		PIE = 3.14;


	//Display the menu.
	cout << "Haverly’s Room Calculator:\n";
	cout << "************************\n";
	cout << endl;
	cout << "1. Square Room\n";
	cout << "2. Rectangular Room\n";
	cout << "3. Round Room\n";
	cout << "4. Quit\n";
	cout << endl << endl;
	cout << "Please enter a menu item (1-4) >\n";
	//Read in the input from the user.
	cin >> choice;
	//Validate user input (must input 1 through 4).
	for (choice != 0; choice >= 5;)
	{
		printf("INVALID MENU ITEM...PROGRAM EXITING...\n");
		exit(0);
	}

	//Use switch statement for each item
	switch (choice)
	{

	case 1:
		cout << "What is the width?\n"; // Ask for user input
		cin >> width; // Read input
		AREA_OF_SQUARE = width * width;//Calculate
		cout << "The area of the Square Room is \n";// Result
		cout << setprecision(2) << fixed << AREA_OF_SQUARE;// Result
		break;

	case 2:
		cout << "What is the length?\n"; // Ask for user input
		cin >> length;
		cout << "What is the width?\n";
		cin >> width; // Read input
		AREA_OF_RECTANGLE = length * width;//Calculate
		cout << "The area of the Rectangle Room is \n";// Result
		cout << setprecision(2) << fixed << AREA_OF_RECTANGLE;// Result
		break;
	case 3:
		cout << "What is the radius?\n"; // Ask for user input
		cin >> radius; // Read input
		AREA_OF_ROUND_ROOM = PIE*(radius * radius);//Calculate
		cout << "The area of the Round Room is \n";// Result
		cout << setprecision(2) << fixed << AREA_OF_ROUND_ROOM;// Result
		break;
	default:
		cout << "Thank you for using Haverly’s Room Calculator\n";
		exit(0);
	}
	return 0;
}