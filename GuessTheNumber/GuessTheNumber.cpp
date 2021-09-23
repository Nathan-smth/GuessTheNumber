// GuessTheNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>

int main()
{
	int userGuess = 0;

	int randomNum = 0;
	bool done = false;
	std::cout << "please enter your guess\n";
	std::cin >> userGuess;
	int numOfGuesses = 1;

	std::srand(time(NULL));
	int totalRandom = rand() & 10 + 0;
	std::cout << "\n";
	std::cout << "\n";

	do{

		

		if (userGuess == totalRandom)
		{
			std::cout << "Well done you guessed right!\n";

			done = true;
			std::cout << "\n";
			std::cout << "The random number was: " << totalRandom << "\n";
			std::cout << "\n";
			std::cout << "You guessed " << numOfGuesses << " times." << "\n";
		}

		else if (userGuess > totalRandom)
		{
			std::cout << "Too high!\n";
			std::cout << "please enter your guess\n";
			std::cin >> userGuess;
		}
		else
		{
			std::cout << "Too low!\n";
			std::cout << "please enter your guess\n";
			std::cin >> userGuess;
		}

		numOfGuesses++;




		std::cout << "\n";
		std::cout << "\n";

		

		

	} while (!done);
	return 0;

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
