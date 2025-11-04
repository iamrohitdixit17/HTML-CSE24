#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    // Leap year condition using ternary operator
    ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        ? cout << year << " is a Leap Year." 
        : cout << year << " is NOT a Leap Year.";

    return 0;
}
