

#include <iostream>
using namespace std;

int getDSum(long long number)
{
    int sum = 0;

    while (number > 0)
    {
        sum += number % 10;   // return reminder
        number /= 10;           // return divided value
    }

    return sum;
}

int main()
{

    cout << "Enter a number: ";
    long long number;
    cin >> number;

    if (number < 0)
    {
        cout << "Please enter a positive number." << endl;
        return 1;
    }

    while (number >= 10)
    {
        number = getDSum(number);
    }

    cout << "Single-digit sum: " << number << endl;

    return 0;
}
