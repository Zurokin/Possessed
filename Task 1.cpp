#include <iostream>
#include <string>  

using namespace std;

int main()

{
    setlocale(LC_ALL, "Russian");

    string str;
    string buffer = "aeiouAEIOU";
    int vowel = 0;
    int n, p;
    int a = 0, e = 0, i = 0, o = 0, u = 0, A = 0, E = 0, I = 0, O = 0, U = 0;
    cout << "Введите данные: ";
    getline(cin, str);
    for (n = 0; n < str.size(); n++)
        for (p = 0; p < buffer.size(); p++)
            if (str[n] == buffer[p])
            {
                vowel++;
                if (str[n] == 'a')
                    a++;
                if (str[n] == 'e')
                    e++;
                if (str[n] == 'i')
                    i++;
                if (str[n] == 'o')
                    o++;
                if (str[n] == 'u')
                    u++;
                if (str[n] == 'A')
                    A++;
                if (str[n] == 'E')
                    E++;
                if (str[n] == 'I')
                    I++;
                if (str[n] == 'O')
                    O++;
                if (str[n] == 'U')
                    U++;
                continue;
            }
    cout << "Количество гласных: " << vowel << endl;
    cout << "a = " << a << endl;
    cout << "u = " << u << endl;
    cout << "e = " << e << endl;
    cout << "i = " << i << endl;
    cout << "o = " << o << endl;
    cout << "A = " << A << endl;
    cout << "U = " << U << endl;
    cout << "E = " << E << endl;
    cout << "I = " << I << endl;
    cout << "O = " << O << endl;

    return 0;
}