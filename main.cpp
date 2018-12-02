/*Alibaba Guesser by Rickard Wahlander - NSArg18
v 0.3
Todo: Continue with All/Nothing
*/
#include <iostream>
#include <ctime>
using namespace std;

int points(int x);
bool guessLoop;
//INIT
guessLoop = true;
int main()
{
	cout << "Welcome to Alibaba Guesser!" << endl;
	cout << "I'm thinking of a number between 1 and 50" << endl;
	cout << "Your task is to guess the number I'm thinking of." << endl;

	return 0;
}
	//CURRENT SCORE
	int score()
	//GUESS
	{
	int guessedNumbers[5] = { }, i, numberOfGuesses = 0, playerGuess, randNumber, score;
	srand((int)time(0));
	randNumber = rand() % 50 + 1;
	guessLoop = true;
	
	while (guessLoop == true){
		cout << "Your guess: ";
		cin >> playerGuess;
		numberOfGuesses ++;
		guessedNumbers [i]=playerGuess;

	}
	//IF WRONG = LOOPBACK
	if (playerGuess > randNumber)
	{
		cout << "Sorry, you guessed too high, try again!" << endl;
		guessedNumbers [i]=playerGuess;
		guessLoop = true;
	}
	else if (playerGuess < randNumber)
	{
		cout << "Sorry, you guessed too low, try again!" << endl;
		guessedNumbers [i]=playerGuess;
		guessLoop = true;
	}
	//IF CORRECT = ASK IF DOUBLE?
	else if (playerGuess == randNumber)
	{
		cout << "Congratulations, you guessed right" << endl;
		guessedNumbers [i]=playerGuess;
		score = points(numberOfGuesses);
		guessLoop = false;
		cout << "You scored " score << " points." << endl;
	}
	if (score >=1)
	{
		cout << "Do you want to double your score?" << endl;
	}
		// IF YES = SHOW STORED NUMBERS
		
			//GET PLAYER GUESS

				//IF WRONG = UPDATE SCORE
				
				//IF CORRECT = UPDATE SCORE
		
		// IF NO = THROW PLAYER BACK TO START SCORE

//QUIT
	}