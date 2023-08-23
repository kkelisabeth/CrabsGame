/*
* Creator:      Kozlova Elizabeth Paula 
* 
* Title:	    Simple Crabs Game 
* 
* Description: 
*			  - roll the dice 
*			  - if the sum is 7 or 11 - you automatically win 
*			  - if the sum is 2, 3, or 12 - you automatically lose 
*			  - else the sum becomes the new goal/target 
*			  - roll the dice another time 
*			  - if new sum equals to the new target (previous sum) - you win, else - you lose 
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int num1, num2, sum, sum1;
	char impcharacter;

	cout << "Let's play crabs!" << endl;
	cout << "Roll the dice by pressing 'y': ";
	cin >> impcharacter;
	if (impcharacter == 'y')
	{
		srand(time(0));
		num1 = rand() % 13;
		num2 = rand() % 13;
		sum = num1 + num2;

		cout << endl << "You rolled: " << num1 << " + " << num2 << " = " << sum << endl;

		if ((sum == 7) || (sum == 11))
			cout << "You win!" << endl;
		else if ((sum == 2) || (sum == 3) || (sum == 12))
			cout << "You lose :(" << endl;
		else
		{
			cout << "Your goal is: " << sum << endl;
			cout << "Roll the dice again by pressing 'y': ";
			cin >> impcharacter;
			if (impcharacter == 'y')
			{
				srand(time(0));
				num1 = rand() % 13;
				num2 = rand() % 13;
				sum1 = num1 + num2;

				cout << endl << "You rolled: " << num1 << " + " << num2 << " = " << sum1 << endl;

				if (sum1 == sum)
					cout << "You win!" << endl;
				else
					cout << "You lose :(" << endl;
			}
			else
				cout << "Sorry, you entered an invalid value." << endl;
		}
	}

	else
		cout << "Sorry, you entered an invalid value." << endl;
	return 0;
}