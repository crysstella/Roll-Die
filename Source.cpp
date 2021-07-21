#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int rollDie(int numSides);
int main()
{
	/*Let’s write a function rollDie that simulates rolling a single die one time.
	It should have a parameter numSides which indicates how many sides the die has.
	If numSides is less than 4 or greater than 20,
	return a value that indicates theuser’s input is invalid.
	Otherwise, return the result of the roll.*/

	int sides;
	srand(time(0));
	cout << "How many sides? ";
	cin >> sides;
	int result = rollDie(sides);
	if (result == 0)
	{
		cout << " incorrect";
	}
	else
	{
		cout << "you rolled a " << result;
	}
	return 0;
}

int rollDie(int numSides)
{
	if (numSides < 4 || numSides > 20)
	{
		//input was valid
		return 0;
	}
	int result = (rand() % numSides) + 1;
	return result;
}
