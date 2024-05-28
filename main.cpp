#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{

   srand(time(0));

   int ranNumber = rand() % 5 + 1;

   int guess;
   int attemptCount = 0;
    cout << "           WELCOME TO THE GUESSING GAME. THERE IS A CHANCE TO WIN A NICE CASH PRIZE "<< endl;
    cout << endl;
    cout << endl;
   cout << "Guess a number between 1 and 5: ";
   do {
       cin >> guess;
       attemptCount++;

       if (guess > ranNumber)
    {
        cout << "Your number guessed is too high! Try again: ";
    }
    else if (guess < ranNumber)
    {
        cout << "Your number guessed is too low! Try again: ";
    }
   } while (guess != ranNumber);
    cout << endl;
    cout << endl;
   cout << "Congratulations! You guessed is the correct number." << endl;
   cout << endl;
   cout << "The right number is " << ranNumber << endl;
   cout << endl;
   cout << "It took you " << attemptCount << " attempts to guess the number." << endl;













    return 0;
}
