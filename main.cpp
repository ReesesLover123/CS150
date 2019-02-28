#include <iostream>

using namespace std;

int main() {
	int residentX, residentY;
	char confirm;
	bool validInput;
	

	cout << "In order to dispatch a rescue drone, we need your X and Y coordinates..." << endl;
	cin >> residentX >> residentY;
	if ((!residentX) || (!residentY)) {
		cout << "You need to input your coordinates, not letters!" << endl;		
		validInput = false; 
		while (!validInput ) {
			cout << "In order to dispatch a rescue drone, we need your X and Y coordinates..." << endl;
			cin >> residentX >> residentY;
			}
		}
	


//check to see that resident is reachable by drone. If this is not the case, then inform them help is on the way.
	while (residentX > 10 || residentY > 10) {
			cout << "I'm sorry, but this location is out of range for our drones." << endl;
			cout << "Please try your coordinates again or close the program.";
			cin >> residentX >> residentY;
	}
/*	
	do {
		cout << "Your coordinates are (" << residentX << "," << residentY << "). Is this correct? (Yes/No)" << endl;
		cin >> confirm;
		if ((confirm == 'Y')||(confirm == 'Y')) {
			break;
		}
		else {
			cout << "Please enter your (X , Y) coordinates!" << endl;
		}
		
	} while (!(confirm == 'Y'));
*/
	
	system("pause");




	return 0;
}