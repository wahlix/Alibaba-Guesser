/*Alibaba Guesser by Rickard Wahlander - NSArg18
v 0.1.3
Todo:
*/
#include <iostream>
#include <ctime>
using namespace std;

int correctNumber, playerGuess, randNumber, wrongNumber, guessedNumbers[5] = { }, points, numberOfGuesses = 0, i, score;
int points();
bool guessLoop;

int main()
{
	randNumber = 5;
	guessLoop = true;
	cout << "Welcome to Alibaba Guesser!" << endl;
	cout << "I'm thinking of a number between 1 and 50" << endl;
	cout << "Your task is to guess the number I'm thinking of." << endl;
	while (guessLoop == true){
		cout << "Your guess: ";
		cin >> playerGuess;
		numberOfGuesses ++;
		guessedNumbers [i]=playerGuess;
		if (playerGuess > randNumber)
		{
			cout << "Sorry, you guessed too high, try again!" << endl;
			guessedNumbers [i]=playerGuess;
			guessLoop = true;
		}
		else if (playerGuess < randNumber)
		{
			cout << "Sorry, you guessed too low, try again" << endl;
			guessedNumbers [i]=playerGuess;
			guessLoop = true;
		}
		else if (playerGuess == randNumber)
		{
			cout << "Congratulations, you guessed right!" << endl;
			guessedNumbers [i]=playerGuess;
			score = points(numberOfGuesses);
			guessLoop = false;
			cout << "You scored" << score << " points." << endl;

		}	
	}
	
		
		
	return 0;
}

int points(int x)
{
	if (x == 1){
		return 10;
	}
}