#include <iostream>
using namespace std;
int main() {

	int number = 7;
	int guess;
	
	while (guess != number)
		{
		cout << " Guess a number between 1 and 10.\n";
		cin >> guess;


	

		if ((guess >= 1) && (guess <= 10))
			{ if (guess > number)
				cout << "To high try again\n";
			else if (guess < number)
				cout << "To low try again\n";
			else if (guess == number)
				cout << "Congratulations your a winner!\n";
		}
		else
		cout << "try again\n";
	}		
	return 0;
}