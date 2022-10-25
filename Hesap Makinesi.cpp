#include <iostream>
#include<locale.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Turkish");
    double n1, n2, cont;
    int ch;
    do
    {

    a:
        cout << "Please enter the first value:";cin >> n1;
        cout << "And second value:";cin >> n2;
        cout << "1=Addition" << endl;
        cout << "2=Subtraction" << endl;
        cout << "3=Multiplication" << endl;
        cout << "4=Division" << endl;
    b:

        cout << "What do you want to do?";cin >> cont;
        if (cont == 1)
        {
            cout << n1 << "+" << n2 << "=" << n1 + n2 << endl;
        }
        else if (cont == 2)
        {
            cout << n1 << "-" << n2 << "=" << n1 - n2 << endl;
        }
        else if (cont == 3)
        {
            cout << n1 << "*" << n2 << "=" << n1 * n2 << endl;
        }
        else if (cont == 4)
        {
            if (n2 == 0)
            {
                cout << "Can't divide by zero" << endl;
                goto a;
            }
            cout << n1 << "/" << n2 << "=" << n1 / n2 << endl;
        }
        else
        {
            cout << "Please enter one of the specified values." << endl;
            goto b;
        }
        cout << "Would you like to do another operation? 1/0?" << endl;
        cin >> ch;


    } while (ch == 1);
    cout << "Goodbye..." << endl;
}
