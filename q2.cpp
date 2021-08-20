/*
Muhammad Abdullah
Software Engineer
*/

#include <iostream>

using namespace std;

// Function Prototypes
void introToProgram();
int getHeight(); 
int getWidth();
void displayRectangle(int, int);

int main()
{
	int objectHeight, objectWidth;

	// Function Calling
	introToProgram();
	objectHeight = getHeight();
	objectWidth = getWidth();
	displayRectangle(objectHeight, objectWidth);

	return 0;
}

// Definitions of Functions:
void introToProgram() 
{
	cout << "This Program will take height and width ";
	cout << "of Hollow Rectangle from the User.\n";
	cout << "Displays the Hollow Rectangle on the screen!\n";
	cout << "Instructions For Input:\n";
	cout << "\t Height and Width should be an even integer.\n ";
	cout << "\t Heigth should not be less than 4\n";
	cout << "\t Width should not be less than 6\n " << endl;
}

int getHeight()
{
	int height; 
	cout << "Enter the height: "; 
	cin >> height;
	while (height % 2 != 0 || height < 4)
	{
		cout << "Enter the height again: ";
		cin >> height;
	}

	return height;
}

int getWidth()
{
	int width; 
	cout << "Enter the width: ";
	cin >> width;
	while (width % 2 != 0 || width < 6)
	{
		cout << "Enter the width again: ";
		cin >> width;
	}
	return width;
}

void displayRectangle(int objectHeight,int objectWidth)
{
	
	for (int counter = 0; counter < objectWidth; counter++)
	{
		cout << "*";
	}
	cout << endl;

	//Nested loops 
	for (int count = 2; count < objectHeight; count++)
	{
		cout << "*";
		for (int count2 = 2; count2 < objectWidth; count2++)
		{
			cout << " ";
		}
		cout << "*";
		cout << endl;
	}

	for (int counter = 0; counter < objectWidth; counter++)
	{
		cout << "*";
	}
	cout << endl;
}