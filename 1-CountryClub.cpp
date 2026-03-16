#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double Price = 3000;
    int Year = 0;

    cout << "Country Club Cost Projection For The Next 5 Years" << endl;

    while (Year <= 5)
    {
        cout << "Year: " << Year << " Price: " << fixed << setprecision(2) << Price << endl;
        Price = Price * 1.03; 
        Year++;
    }

    return 0;
}