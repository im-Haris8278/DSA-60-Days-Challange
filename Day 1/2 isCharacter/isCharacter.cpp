#include <iostream>
using namespace std;

bool isCharacter(int character)
{
    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    };
}

int main()
{
    int character;
    cout << "Enter a Character: ";
    cin >> character;

    isCharacter(character);

    return 0;
}