

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
     
    char s[10];
    cout << "Enter 10 symbols:\n";
    int N = 10;
    for (int i = 0; i < N; i++)
        cin >> s[i];

    for (int i = 0; i < N; i++)
    {
        if (isdigit(s[i])) 
        {
            s[i] = '*';
            cout << s[i] << " ";
        }
        else
        {
            s[i] = '*';
            cout << s[i] << " ";
        }
    }
    cout << "\n";
    system("pause");
    return 0;
}