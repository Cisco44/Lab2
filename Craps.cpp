#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

/*
	Author: Francisco Da Costa
	Assignment #2
	Purpose: This program simulates the dice game "Craps."
*/

// --------- Dice rolling funtion ----------
// Returns a psudo-rando value between 1 and 6.

static int dice1 = 0;
static int dice2 = 0;

int dice(){

	int dice = 0;
	dice = rand() % 6 + 1; // Generates a psudo-random interger value.
	return dice; 
}

// --------- Roll return function -----------
// Returns a value between 2 and 12.

int rolling(){

	int roll = 0;
	dice1 = dice();
	dice2 = dice();

	roll = dice1 + dice2;  // Adds two dice function calls.
	return roll;
}

// ------------- Play function --------------
// The primary function that displays key text for user
// understanding, and calls appropriate methods.

void playGame(){

	int roll = 0;
	int point = 0; // Variable for confirmation of point, and point loop.

	roll = rolling();
	cout << "Player rolled " << dice1 << " + " << dice2 << " = " << roll << "." << endl;
	
/*
The following switch statement processes the first roll in the craps game.
Every successive rolls function differently, but all are defined by the results of
the first roll. There are three cases:

1) If the roll is 2, 3, or 12 then the player immediately loses.
2) If the roll is 7, or 11 then the player immediately wins.
3) If the roll is any other unspecified number then that number is definied as point.
*/
	switch(roll){
		case 2: 
		case 3: cout << "Craps. Player loses." << endl; break;
		case 4: 
		case 5:
		case 6: point = roll; cout << "Point. Point is " << point << "." << endl; break;
		case 7: cout << "Player wins!" << endl; break;
		case 8:
		case 9:
		case 10: point = roll; cout << "Point. Point is " << point << "." << endl; break;
		case 11: cout << "Player wins!" << endl; break;
		case 12: cout << "Craps. Player loses." << endl; break;
	}

/*
In the 3rd case in which point is definied the player will continue to roll until
one of two outcomes is achived:

1) The roll is equal to the value of point. In this case the player wins.
2) The roll is equal to 7. In this case the player loses.
*/

	while(point != 0){
		roll = rolling();
		cout << "Player rolled " << dice1 << " + " << dice2 << " = " << roll << "." << endl;
		
		if(roll == point){
			cout << "Player wins!" << endl;
			point = 0;
		}
			else if(roll == 7){
				cout << "Player loses." << endl;
				point = 0;
			}
	}
}

int main(){

	char ans;
	bool done = false;
	while(!done){
	playGame();
	cout << endl << "Play again (y/n) ?" << endl;
	cin >> ans;
	if ( ans == 'y' || ans == 'Y') done = false;
		else done = true;	
	}

return 0;
}
