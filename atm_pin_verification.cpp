// Algorithm Challenge & Problem Solving
// 49 - ATM PIN Verification

#include <iostream>
using namespace std;

int main()
{
    int pin, balance = 8000;

    // Ask the user to enter their PIN
    cout << "Enter your PIN:\n";
    cin >> pin;

    // Loop until the correct PIN is entered
    while (pin != 1222)
    {
        cout << "The PIN is wrong, try again:\n";
        cin >> pin;
    }

    // If PIN is correct, display account balance
    if (pin == 1222)
    {
        cout << "Your Balance is: $" << balance;
    }

    return 0;
}
