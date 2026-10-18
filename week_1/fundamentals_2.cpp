// This program demonstrates variables, literal constants, and data types.

#include <iostream>
#include <sstream>

using namespace std;

int main() {
    int i; // defines an integer variable
    double d; // defines a double floating-point variable
    string s; // defines a string
    bool b; // defines a Boolean variable

    i = 1234567890;
    d = 1.23456789012345;
    s = "string";
    b = true;
    cout << "Integer i = " << i << endl; // 'endl' ends the current line
    cout << "Double d = " << d << endl;
    cout << "String s = " << s << endl;
    cout << "Boolean b = " << b << endl;
    

    // This program demonstrates arithmetic operations.
    int a;
    int c;

    a = 3;
    c = 2;
    cout << "a = " << a << endl;
    cout << "c = " << c << endl;
    cout << "a + c = " << a + c << endl;
    cout << "a - c = " << a - c << endl;
    cout << "a * c = " << a * c << endl;
    cout << "a / c = " << a / c << endl;
    cout << "a % c = " << a + c << endl; // Modulus

    // This program converts an input Fahrenheit temperature to Celsius.
    double fahrenheit;
    double celsius;

    cout << "Enter Fahrenheit temperature:" << endl;
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5 / 9;

    cout << fahrenheit << "° Fahrenheit is " << celsius << "° Celsius" << endl;
    return 0;
}