#include <iostream>
using namespace std;

int main()
{
    int num;
    int largest;
    int smallest;

    cout << "Enter integers (enter -99 to end): ";
    cin >> num;
    
    largest = num;
    smallest = num;

    while (num != -99)
    {
        if (num > largest)
        {
            largest = num;
        }
        if (num < smallest)
        {
            smallest = num;
        }
        cout << "Enter another integer (enter -99 to end): ";
        cin >> num;
    }

    cout << "Largest: " << largest << endl;
    cout << "Smallest: " << smallest << endl;

    return 0;
}