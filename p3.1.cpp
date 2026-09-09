#include <iostream>
#include <string>
using namespace std;

class bankaccount
{
    private :
    string owner;
    double balance;

    public :
    void openaccount(string name, double initial)
    {
        owner = name;
        if (initial>0)
        balance = initial;
        else
        balance = 0;
    }

    void deposit (double amount)
    {
        if (amount > 0)
        balance = balance + amount;
    }

    bool withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance = balance - amount;
            return true;
        }
        return false;
    }

    string getowner()
    {
        return owner;
    }

    double getbalance()
    {
        return balance;
    }
};

int main()
{
    bankaccount account;

    string name;
    double initialdeposit;
    double depositamount;
    double validwithdrawal;

    cout << "enter account holder name:";
    getline(cin,name);

    cout << "enter initial deposit:";
    cin >> initialdeposit;

    account.openaccount(name,initialdeposit);

    cout << "enter amount to deposit:";
    cin >> depositamount;

    account.deposit(depositamount);

    cout << "\n enter valid withdrawal amount:";
    cin >> validwithdrawal;

    if(account.withdraw(validwithdrawal))
    {
        cout << "withdrawal successfull." << endl;
    }
    else
    {
        cout << "withdrawal failed." << endl;
    }

    cout <<"\n ===== ACCOUNT DETAILS =====" << endl;
    cout << "account holder:" << account.getowner() << endl;
    cout << "final balance:" << account.getbalance() << endl;
    return 0;
}