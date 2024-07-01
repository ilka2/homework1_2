#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    struct Account
    {
        int id;
        string name;
        float balance;

        void InfoAccount()
        {
            cout << "Номер счета: " << id << endl;
            cout << "Имя: " << name << endl;
            cout << "Баланс: " << balance << endl;
            cout << "\n";
        }

        void NewAccount()
        {
            cout << "Введите номер счета: ";
            cin >> id;
            //cout << endl;

            cout << "Введите имя: ";
            cin >> name;
            //cout << endl;

            cout << "Введите баланс: ";
            cin >> balance;
            cout << endl;

            InfoAccount();

            cout << "\n\n";
        }

        void NewBalance(int newBalance)
        {
            balance = newBalance;

            InfoAccount();
        }
    };

    Account Ilya;

    Ilya.NewAccount();

    int newBalance;
    cout << "Введите новую сумму: ";
    cin >> newBalance;
    cout << endl;

    Ilya.NewBalance(newBalance);
}
