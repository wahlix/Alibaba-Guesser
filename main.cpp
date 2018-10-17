/*Alibaba Guesser by Rickard Wahlander - NSArg18
v 0.0.4
Todo:
*/
#include <iostream>
#include <ctime>
using namespace std;

int correctNumber, playerGuess, randNumber, wrongNumber, guessedNumbers[5] = { }, points, numberOfGuesses;
bool guessLoop;
i=0

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
		guessedNumbers []=playerGuess
		if (playerGuess > randNumber)
		{
			cout << "Sorry, you guessed too high, try again!" << endl;
			guessedNumbers [i]=playerGuess;
			i++;
			guessLoop = true;
		}
		else if (playerGuess < randNumber)
		{
			cout << "Sorry, you guessed too low, try again" << endl;
			guessedNumbers [i]=playerGuess;
			guessLoop = true;
		}
		else if (playerGuess = randNumber)
		{
			cout << "Congratulations, you guessed right!" << endl;
			guessLoop = false;

		}	
	}
	
		
		
	return 0;
}