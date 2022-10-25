#include <iostream>


using namespace std;
int main()
{

    double n1, n2, cont;
    string ch;
    do
    {

    a:
        cout << "Please enter the first value:";cin >> n1;
        cout << "And the second value:";cin >> n2;
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
        cout << "Would you like to do another operation? y/n?" << endl;
        c:
        cin >> ch;
        if (ch!="y" && ch!="n" && ch != "Y" && ch != "N")
        {
            cout << "Come on, I am just a calculator. Please enter y or n" << endl;
                goto c;
        }


    } while (ch == "y" || ch== "Y");
    cout << "Goodbye..." << endl;
}
