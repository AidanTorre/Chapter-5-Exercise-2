#include <iostream>
using namespace std;

int main()
{
    int number;
    int sum = 0;

    cout << "Enter a positive integer: ";
    cin >> number;

    while (number <= 0)
    {
        cout << "Please enter a positive integer: ";
        cin >> number;
    }

    for (int count = 1; count <= number; count++)
    {
        sum += count;
    }

    cout << "The sum of numbers from 1 to " << number
        << " is " << sum << endl;

    return 0;
}