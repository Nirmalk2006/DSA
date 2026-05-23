#include <iostream>
using namespace std;

int main() 
{
    char ch;
    cout <<" Enter the Character :" ;
    cin >> ch;
    if(ch >= 'a' && ch <= 'z')
    {
        cout << " The Character is a Lowercase Letter " << endl;
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        cout << " The Character is an Uppercase Letter " << endl;
    }
    else if(ch >= '0' && ch <= '9')
    {
        cout << " The Character is a numeric character " << endl;
    }
    else
    {
        cout << " The Character is not an Alphabet or a numeric character " << endl;
    }

}