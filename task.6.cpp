#include <iostream>
using namespace std;

int main()
{
    char color;
    cout << "Enter traffic light color (R, G, Y) : ";
    cin >> color;

    switch (color)
    {
    case 'R':
        cout << "Stop" << endl;
        break;
    case 'G':
        cout << "Go" << endl;
        break;
    case 'Y':
        cout << "Slow down" << endl;
        break;
    default:
        cout << "Invalid Input" << endl;
    }

    return 0;
}