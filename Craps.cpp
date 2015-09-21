#include <cstdlib>
#include <ctime>

using namespace fdc;

/*
	Author: Francisco Da Costa
	Assignment #2
	Purpose: This program simulates the dice game "Craps."
*/

// --------- Dice rolling funtion ----------
// Returns a psudo-rando value between 1 and 6.

int dice(){

	int dice = 0;
	dice = rand() % 6 + 1; // Generates a psudo-random interger value.
	return die; 
}

// --------- Roll return function -----------
// Returns a value between 2 and 12.

int roll(){

	int roll = 0;
	roll = dice() + dice();  // Adds two dice function calls.
	return roll;
}

// ------------- Play function --------------
// The primary function that displays key text for user
// understanding, and calls appropriate methods.

void playGame(){

	int roll = 0;
	roll = roll();
	cout << "Player rolled"
}

int main(){

	char ans;
	bool done = false;
	while(!done){
	playGame();
	cout << " Play again (y/n) ? ";
	cin >> ans;
	if ( ans == 'y' || ans == 'Y') done = true;
		else done = false;
	}

return 0;
}
