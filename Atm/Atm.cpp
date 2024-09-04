/*
* check balance
* cash withdraw
* cash deposit
* exit
*/
#include<iostream>
using namespace std;
class ATM
{
private:
	int balance;
public:
	ATM(int bal)
	{
		balance = bal;
	}
	int get_balance() 
	{
		return balance;
	}
	int withdraw(int amout)
	{
		if (amout > balance)
		{
			return false;
		}
		balance -= amout;
		return true;
	}
	void deposit(int amout)
	{
		balance += amout;
	}
};
int main()
{
	ATM atm(100000000);
	int choice,amount,success;
	char op;
	do {
		system("cls");
		cout << "-----------ATM--------------\n";
		cout << "1- View Balance\n";
		cout << "2- Cash Bithdraw\n";
		cout << "3- Cash Deposit\n";
		cout << "4- Exit\n";
		cout << "-----------ATM--------------\n";
		cout << "Enter Your Choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Balance is: " << atm.get_balance();
			break;
		case 2:
			cout << "Balance is: " << atm.get_balance() << endl;
			cout << "Enter The Amount Withdraw:";
			cin >> amount;
			success = atm.withdraw(amount);
			if (success)
			{
				cout << "Withdraw Successfull...\n";
			}
			else
			{
				cout << "Insufficient Balance..\n";
			}
			break;
		case 3:
			cout << "Enter The Amount Deposit:";
			cin >> amount;
			atm.deposit(amount);
			cout << "Depoist Successfull...\n";
			break;
		case 4:
			cout << "Thanks For Using Atm...\n";
			break;
		default:
			cout << "Invalid choice...\n";
		}
		cout << "\nDo You Want To Try Another Trasaction [Yas / No]: ";
		cin >> op;
	} while (op == 'y' || op == 'Y');
	

	return 0;
}