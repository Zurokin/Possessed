#include <iostream>
#include <string> 
#include <cctype>

using namespace std;

string Replace(string & t)
{
        int i = 0;
        while (t[i])
        {
            if (t[i] == 'A' || t[i] == 'E' || t[i] == 'I' || t[i] == 'O' || t[i] == 'U') t[i] += 32;
            i++;
        }
        return t;
}

int main()
{
    setlocale(LC_ALL, "Russian");
        string o;
        cout << "������� ������: ";
        getline(cin, o);

        cout <<"�������� ������: " << Replace(o) << endl;

        return 0;
}