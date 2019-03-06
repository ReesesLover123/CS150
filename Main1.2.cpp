#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i = 20;
	int droneX = 0;
	int droneY = 0;
	int refugeeX, refugeeY;
	bool validInput;
	cout << "In order to dispatch a rescue drone, we need your X and Y coordinates separated by a space." << endl;
	cin >> refugeeX >> refugeeY;

	if ((refugeeX > 10) || (refugeeY > 10)) {
		cout << "You need to input your coordinates, not letters!" << endl;
		validInput = false;
		while (!validInput) {
			cout << "In order to dispatch a rescue drone, we need your X and Y coordinates..." << endl;
			cin >> refugeeX >> refugeeY;
		}
	}
	cout << "Great. Sending a rescue drone immediately!" << endl;
	system("cls");

	while (i != 0)
	{
		char direction;
		cout << "Which direction would you like to go?" << endl << "Remaining battery level = %" << i * 5 << endl;
		cin >> direction;
		switch (direction) {
		case 'w':
		case 'W':

			if (droneX == 10) {
				cout << "That's an illegal move, sir. You are now at (" << droneX << "," << droneY << ")" << endl;
				i++;
				break;
			}
			system("cls");
			droneX++;
			cout << "You are now at (" << droneX << "," << droneY << ")" << endl;
			break;
		case 'a':
		case 'A':
			if (droneY == 0) {
				cout << "That's an illegal move, sir. You are now at (" << droneX << "," << droneY << ")" << endl;
				i++;
				break;
			}
			system("cls");
			droneY--;
			cout << "You are now at (" << droneX << "," << droneY << ")" << endl;
			break;
		case 's':
		case 'S':
			if (droneX == 0) {
				cout << "That's an illegal move, sir. You are now at (" << droneX << "," << droneY << ")" << endl;
				i++;
				break;
			}
			system("cls");
			droneX--;
			cout << "You are now at (" << droneX << "," << droneY << ")" << endl;
			break;
		case 'd':
		case 'D':
			if (droneY == 10) {
				i++;
				cout << "That's an illegal move, sir. You are now at (" << droneX << "," << droneY << ")" << endl;
				break;
			}
			system("cls");
			droneY++;
			cout << "You are now at (" << droneX << "," << droneY << ")" << endl;
			break;
		default:
			cout << "I know you're stressed, but I need a valid command. Please try again." << endl;
			i++;

		}
		if ((droneX == refugeeX)&&(droneX == refugeeY)){
			cout << "rescue successful!" << endl;
			system("pause");
			break;
		}
		else
			i--;
		if (i == 0) {
			cout << endl << "If you're seeing this, then the rescue has failed! You're fired!" << endl;
			system("pause");
		}
	}

	
    
	return 0;
}
