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
        cout << "1. sayýyý giriniz:";cin >> n1;
        cout << "2. sayýyý giriniz:";cin >> n2;
        cout << "1=Toplama" << endl;
        cout << "2=Çýkarma" << endl;
        cout << "3=Çarpma" << endl;
        cout << "4=Bölme" << endl;
    b:

        cout << "Ne yapmak istiyorsunuz?";cin >> cont;
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
                cout << "0a bölünemez" << endl;
                goto a;
            }
            cout << n1 << "/" << n2 << "=" << n1 / n2 << endl;
        }
        else
        {
            cout << "Lütfen belirtilen deðerlerden birini giriniz." << endl;
            goto b;
        }
        cout << "Devam etmek istiyor musunuz? 1/0?" << endl;
        cin >> ch;


    } while (ch == 1);
    cout << "Elveda..." << endl;
}