#include <iostream>
#include <string> 
#include <cctype>

using namespace std;

int main()
{
    string sare;
    getline(cin, sare);
    for (int c = 0; c < sare.size(); c++)
    {
        char m = sare.at(c);
        if (m == 'A' || m == 'E' || m == 'I' || m == 'O' || m == 'U')
            sare.at(c) = tolower(sare.at(c));
    }
    cout << sare << endl;
    return 0;
}