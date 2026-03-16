#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int Number;
    int Guess;

    srand(time(0));
    Number = rand() % 100 + 1;

    cout << "I have a number between 1 and 100." << endl;
    cout << "Guess my number: ";
    cin >> Guess;

    while (Guess != Number)
    {
        if (Guess > Number)
        {
            cout << "Too high. Try again: ";
            cin >> Guess;
        }
        else
        {
            cout << "Too low. Try again: ";
            cin >> Guess;
        }
    }

    cout << "Congratulations! You figured out my number." << endl;

    return 0;
}