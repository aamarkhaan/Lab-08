#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter an alphabet : ";
    cin >> ch;

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout << ch << " is a vowel.";
        break;
    default:
        cout << ch << " is a consonant." << endl;
    }

    return 0;
}