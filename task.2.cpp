#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    double result = 0;
    char operater;

    cout << "Enter number one : ";
    cin >> num1;
    cout << "Enter number two : ";
    cin >> num2;
    cout << "Enter an operater (+, -, *, /) : ";
    cin >> operater;

    switch (operater)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    default:
        cout << "Please enter correct operater ";
        return 1;
    }

    cout << num1 << " " << operater << " " << num2 << " = " << result << endl;
    return 0;
}