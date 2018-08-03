include<fstream>
#include<iostream>
#include<string>

using namespace std;

class BankAccount
{
public:
	string name;
	string accType;
	double Bal;
	BankAccount *next;
	BankAccount *top = NULL;
	const int MAX_STACK_ITEMS = 4;
	int Counter;

	BankAccount* pop()
	{
		if (top == NULL)
		{
			return NULL;
		}
		else
		{

			BankAccount *curr = top;
			top = top->next;
			curr->next = top;
			return curr;
		}
	}
	void push(string Lname, string acctype, double bal)
	{
		if (top == NULL)
		{
			name = Lname;
			accType = acctype;
			Bal = bal;
			top = this;
			next = top;
		}
		if (top != NULL)
		{
			BankAccount *node = new BankAccount;
			node->accType = acctype;
			node->name = Lname;
			node->Bal = bal;

			node->next = top;
			top = node;
		}
	}
	void showBalance(string AccName)
	{
		if (accType == "CD")
		{
			cout << AccName << " Balance Is " << Bal << " The Account is a Certificate of Deposit Account" << endl;
		}
		if (accType == "C")
		{
			cout << AccName << " Balance Is " << Bal << " The Account is a Checking Account" << endl;
		}

		if (accType == "s")
		{
			cout << AccName << " Balance Is " << Bal << " The Account is a Savings Account" << endl;
		}
	}

	void showList(BankAccount *Stack)
	{
		if (Stack->next != NULL)
		{
			while (Stack->next != NULL)
			{

				if (Stack->accType == "CD")
				{
					cout << Stack->name << " Balance Is " << Bal << " The Account is a Certificate of Deposit Account" << endl;
				}
				if (Stack->accType == "C")
				{
					cout << Stack->name << " Balance Is " << Bal << " The Account is a Checking Account" << endl;
				}

				if(Stack->accType == "s")
				{
					cout << Stack->name << " Balance Is " << Bal << " The Account is a Savings Account" << endl;
				}
				if (Stack = Stack->top)
				{
					break;
				}
			}
		}
		else
		{
			cout << "List empty" << endl;
		}
	}
};
void TheEnd(BankAccount param[])
{

	for(int i = 0; i<5; i++)
	{
		BankAccount *curr = param[i].top;
		while (curr != NULL)
		{
//cout << "Hi" << endl; Checking if here
			curr = curr->next;
			delete curr;
			cout << "Deleting files" << endl;
			if (i = 0)
			{
				cout << "Deleting List A-D" << endl;
			}
			if (i = 1)
			{
				cout << "Deleting List E-G" << endl;
			}
			if (i = 2)
			{
				cout << "Deleting List H-M" << endl;
			}
			if (i = 3)
			{
				cout << "Deleting List N-S" << endl;
			}
			if (i = 4)
			{
				cout << "Deleting List T-V" << endl;
			}
		}
	}
}

int main()
{

	BankAccount accounts[5];
	ifstream reader;
	BankAccount *sideList[100];
	int size = 0;
	int ListCounter = 0;
	char acctName[101], acctType[11];
	double acctBal;
	int counter0 = 0;
	int counter1 = 0;
	int counter2 = 0;
	int counter3 = 0;
	int counter4 = 0;
	char name[100];
	string Accname;




reader.open("E:/Data Structure/MidTerm/BankData.txt");  //open the appropriate file





while (!reader.eof())  //loop will terminate once there is no more data to read from file

{

reader.getline(acctName, 100, ',');  //reads the name of the account holder into acctName

reader.getline(acctType, 10, ',');  //reads the account type of the account into acctType

reader >> acctBal;  //reads the balance into acctBal

reader.ignore();
if (acctName[0] == 'A')
{
	if (counter0 < accounts[0].MAX_STACK_ITEMS)
	{
		accounts[0].push(acctName, acctType, acctBal);
		counter0++;
	}
	if (counter0 >= accounts[0].MAX_STACK_ITEMS)
	{
		cout << "Stack is Full Popping Top and Adding New Value" << endl; ListCounter++;
		sideList[size] = accounts[0].pop();  size++;
		accounts[0].push(acctName, acctType, acctBal);
		;
	}
}

if (acctName[0] == 'B')
{
	if (counter0 < accounts[0].MAX_STACK_ITEMS)
	{
		accounts[0].push(acctName, acctType, acctBal);
		counter0++;
	}
	if (counter0 >= accounts[0].MAX_STACK_ITEMS)
	{
		cout << "Stack is Full Popping Top and Adding New Value" << endl; ListCounter++;
		sideList[size] = accounts[0].pop();  size++;
		accounts[0].push(acctName, acctType, acctBal);
	}
}

if (acctName[0] == 'C')
{
	if (counter0 < accounts[0].MAX_STACK_ITEMS)
	{
		accounts[0].push(acctName, acctType, acctBal);
		counter0++;
	}

	if (counter0 >= accounts[0].MAX_STACK_ITEMS)
	{
		cout << "Stack is Full Popping Top and Adding New Value" << endl; ListCounter++;
		sideList[size] = accounts[0].pop();  size++;
		accounts[0].push(acctName, acctType, acctBal);
	}
}

if (acctName[0] == 'D')
{
	if (counter0 < accounts[0].MAX_STACK_ITEMS)
	{
		accounts[0].push(acctName, acctType, acctBal);
		counter0++;
	}
	if (counter0 >= accounts[0].MAX_STACK_ITEMS)
	{
		cout << "Stack is Full Popping Top and Adding New Value" << endl; ListCounter++;
		sideList[size] = accounts[0].pop();  size++;
		accounts[0].push(acctName, acctType, acctBal);
	}
}
if (acctName[0] == 'E')
{
	if (counter1 < accounts[1].MAX_STACK_ITEMS)
	{
		accounts[1].push(acctName, acctType, acctBal);
		counter1++;
	}
	if (counter1 >= accounts[1].MAX_STACK_ITEMS)
	{
		cout << "Stack is Full Popping Top and Adding New Value" << endl; ListCounter++;
		sideList[size] = accounts[1].pop();  size++;
		accounts[1].push(acctName, acctType, acctBal);
	}
}

if (acctName[0] == 'F')
{
	if (counter1 < accounts[1].MAX_STACK_ITEMS)
	{
		accounts[1].push(acctName, acctType, acctBal);
		counter1++;
	}
	if (counter1 >= accounts[1].MAX_STACK_ITEMS)
	{
		cout << "Stack is Full Popping Top and Adding New Value" << endl; ListCounter++;
		sideList[size] = accounts[1].pop();  size++;
		accounts[1].push(acctName, acctType, acctBal);
	}
}
if (acctName[0] == 'G')
{
	if (counter1 < accounts[1].MAX_STACK_ITEMS)
	{
		accounts[1].push(acctName, acctType, acctBal);
		counter1++;
	}
	if (counter1 >= accounts[1].MAX_STACK_ITEMS)
	{
		cout << "Stack is Full Popping Top and Adding New Value" << endl; ListCounter++;

		sideList[size] = accounts[1].pop();  size++;
		accounts[1].push(acctName, acctType, acctBal);
	}
}
if (acctName[0] == 'H')
{
	if (counter2 < accounts[2].MAX_STACK_ITEMS)
	{
		accounts[2].push(acctName, acctType, acctBal);
		counter2++;
	}
	if (counter2 >= accounts[2].MAX_STACK_ITEMS)
	{
		cout << "Stack is Full Popping Top and Adding New Value" << endl; ListCounter++;

		sideList[size] = accounts[2].pop();  size++;
		accounts[2].push(acctName, acctType, acctBal);
	}
}
if (acctName[0] == 'I')
{
	if (counter2 < accounts[2].MAX_STACK_ITEMS)
	{
		accounts[2].push(acctName, acctType, acctBal);
		counter2++;
	}
	if (counter2 >= accounts[2].MAX_STACK_ITEMS)
	{
		cout << "Stack is Full Popping Top and Adding New Value" << endl; ListCounter++;

		sideList[size] = accounts[2].pop();  size++;
		accounts[2].push(acctName, acctType, acctBal);
	}
}
if (acctName[0] == 'J')
{
	if (counter2 < accounts[2].MAX_STACK_ITEMS)
	{
		accounts[2].push(acctName, acctType, acctBal);
		counter2++;
	}
	if (counter2 >= accounts[2].MAX_STACK_ITEMS)
	{
		cout << "Stack is Full Popping Top and Adding New Value" << endl; ListCounter++;

		sideList[size] = accounts[2].pop();  size++;
		accounts[2].push(acctName, acctType, acctBal);
	}
}

if (acctName[0] == 'K')
{
	if (counter2 < accounts[2].MAX_STACK_ITEMS)
	{
		accounts[2].push(acctName, acctType, acctBal);
		counter2++;
	}
	if (counter2 >= accounts[2].MAX_STACK_ITEMS)
	{
		cout << "Stack is Full Popping Top and Adding New Value" << endl; ListCounter++;

		sideList[size] = accounts[2].pop();  size++;
		accounts[2].push(acctName, acctType, acctBal);
	}
}

if (acctName[0] == 'L')
{
	if (counter2 < accounts[2].MAX_STACK_ITEMS)
	{
		accounts[2].push(acctName, acctType, acctBal);
		counter2++;
	}
	if (counter2 >= accounts[2].MAX_STACK_ITEMS)
	{
		cout << "Stack is Full Popping Top and Adding New Value" << endl; ListCounter++;

		sideList[size] = accounts[2].pop();  size++;
		accounts[2].push(acctName, acctType, acctBal);
	}
}

if (acctName[0] == 'M')
{
	if (counter2 < accounts[2].MAX_STACK_ITEMS)
	{
		accounts[2].push(acctName, acctType, acctBal);
		counter2++;
	}
	if (counter2 >= accounts[2].MAX_STACK_ITEMS)
	{
		cout << "Stack is Full Popping Top and Adding New Value" << endl; ListCounter++;

		sideList[size] = accounts[2].pop();  size++;
		accounts[2].push(acctName, acctType, acctBal);
	}
}

if (acctName[0] == 'N')
{
	if (counter3 < accounts[3].MAX_STACK_ITEMS)
	{
		accounts[3].push(acctName, acctType, acctBal);
		counter3++;
	}
	if (counter3 >= accounts[3].MAX_STACK_ITEMS)
	{
		cout << "Stack is Full Popping Top and Adding New Value" << endl; ListCounter++;

		sideList[size] = accounts[3].pop();  size++;
		accounts[3].push(acctName, acctType, acctBal);
	}
}

if (acctName[0] == 'O')
{
	if (counter3 < accounts[3].MAX_STACK_ITEMS)
	{
		accounts[3].push(acctName, acctType, acctBal);
		counter3++;
	}
	if (counter3 >= accounts[3].MAX_STACK_ITEMS)
	{
		cout << "Stack is Full Popping Top and Adding New Value" << endl; ListCounter++;

		sideList[size] = accounts[3].pop();  size++;
		accounts[3].push(acctName, acctType, acctBal);
	}
}

if (acctName[0] == 'P')
{
	if (counter3 < accounts[3].MAX_STACK_ITEMS)
	{
		accounts[3].push(acctName, acctType, acctBal);
		counter3++;
	}
	if (counter3 >= accounts[3].MAX_STACK_ITEMS)
	{
		cout << "Stack is Full Popping Top and Adding New Value" << endl; ListCounter++;

		sideList[size] = accounts[3].pop();  size++;
		accounts[3].push(acctName, acctType, acctBal);
	}
}

if (acctName[0] == 'Q')
{
	if (counter3 < accounts[3].MAX_STACK_ITEMS)
	{
		accounts[3].push(acctName, acctType, acctBal);
		counter3++;
	}
	if (counter3 >= accounts[3].MAX_STACK_ITEMS)
	{
		cout << "Stack is Full Popping Top and Adding New Value" << endl; ListCounter++;

		sideList[size] = accounts[3].pop();  size++;
		accounts[3].push(acctName, acctType, acctBal);
	}
}

if (acctName[0] == 'R')
{
	if (counter3 < accounts[3].MAX_STACK_ITEMS)
	{
		accounts[3].push(acctName, acctType, acctBal);
		counter3++;
	}
	if (counter3 >= accounts[3].MAX_STACK_ITEMS)
	{
		cout << "Stack is Full Popping Top and Adding New Value" << endl; ListCounter++;

		sideList[size] = accounts[3].pop();  size++;
		accounts[3].push(acctName, acctType, acctBal);
	}
}

if (acctName[0] == 'S')
{
	if (counter3 < accounts[3].MAX_STACK_ITEMS)
	{
		accounts[3].push(acctName, acctType, acctBal);
		counter3++;
	}
	if (counter3 >= accounts[3].MAX_STACK_ITEMS)
	{
		cout << "Stack is Full Popping Top and Adding New Value" << endl; ListCounter++;

		sideList[size] = accounts[3].pop();  size++;
		accounts[3].push(acctName, acctType, acctBal);
	}
}

if (acctName[0] == 'T')
{
	if (counter4 < accounts[4].MAX_STACK_ITEMS)
	{
		accounts[4].push(acctName, acctType, acctBal);
		counter4++;
	}
	if (counter4 >= accounts[4].MAX_STACK_ITEMS)
	{
		cout << "Stack is Full Popping Top and Adding New Value" << endl; ListCounter++;

		sideList[size] = accounts[4].pop();  size++;
		accounts[4].push(acctName, acctType, acctBal);
	}
}

if (acctName[0] == 'U')
{
	if (counter4 < accounts[4].MAX_STACK_ITEMS)
	{
		accounts[4].push(acctName, acctType, acctBal);
		counter4++;
	}
	if (counter4 >= accounts[4].MAX_STACK_ITEMS)
	{
		cout << "Stack is Full Popping Top and Adding New Value" << endl; ListCounter++;

		sideList[size] = accounts[4].pop();  size++;
		accounts[4].push(acctName, acctType, acctBal);
	}
}

if (acctName[0] == 'V')
{
	if (counter4 < accounts[4].MAX_STACK_ITEMS)
	{
		accounts[4].push(acctName, acctType, acctBal);
		counter4++;
	}
	if (counter4 >= accounts[4].MAX_STACK_ITEMS)
	{
		cout << "Stack is Full Popping Top and Adding New Value" << endl; ListCounter++;

		sideList[size] = accounts[4].pop();  size++;
		accounts[4].push(acctName, acctType, acctBal);
	}
}

if (acctName[0] == 'W')
{
	if (counter4 < accounts[4].MAX_STACK_ITEMS)
	{
		accounts[4].push(acctName, acctType, acctBal);
		counter4++;
	}
	if (counter4 >= accounts[4].MAX_STACK_ITEMS)
	{
		cout << "Stack is Full Popping Top and Adding New Value" << endl; ListCounter++;

		sideList[size] = accounts[4].pop();  size++;
		accounts[4].push(acctName, acctType, acctBal);
	}
}

if (acctName[0] == 'X')
{
	if (counter4 < accounts[4].MAX_STACK_ITEMS)
	{
		accounts[4].push(acctName, acctType, acctBal);
		counter4++;
	}
	if (counter4 >= accounts[4].MAX_STACK_ITEMS)
	{
		cout << "Stack is Full Popping Top and Adding New Value" << endl; ListCounter++;

		sideList[size] = accounts[4].pop();  size++;
		accounts[4].push(acctName, acctType, acctBal);
	}
}
if (acctName[0] == 'Y')
{
	if (counter4 < accounts[4].MAX_STACK_ITEMS)
	{
		accounts[4].push(acctName, acctType, acctBal);
		counter4++;
	}
	if (counter4 >= accounts[4].MAX_STACK_ITEMS)
	{
		cout << "Stack is Full Popping Top and Adding New Value" << endl; ListCounter++;

		sideList[size] = accounts[4].pop();  size++;
		accounts[4].push(acctName, acctType, acctBal);
	}
}
if (acctName[0] == 'Z')
{
	if (counter4 < accounts[4].MAX_STACK_ITEMS)
	{
		accounts[4].push(acctName, acctType, acctBal);
		counter4++;
	}
	if (counter4 >= accounts[4].MAX_STACK_ITEMS)
	{
		cout << "Stack is Full Popping Top and Adding New Value" << endl; ListCounter++;

		sideList[size] = accounts[4].pop();  size++;
		accounts[4].push(acctName, acctType, acctBal);
	}
}




}
//cout << accounts[2].name << endl; // Practice Code iterating loops 

/*BankAccount *curr = accounts[3].top;
for (int i = 0; i < 9; i++)
{
cout << curr->name << endl;
cout << curr->name << " Bal is " << curr->Bal << endl;
curr = curr->next;
}
cout << ListCounter << endl;

cout << counter0 << endl;

for (int i = 0; i < ListCounter; i++)
{
BankAccount curr = *sideList[i];
cout << curr.name << endl;
}*/


cout << "Enter Name of Account Holder " << endl; // Getting Name
cin >> Accname;

if (Accname[0] == 'A' || Accname[0] == 'B' || Accname[0] == 'C' || Accname[0] == 'D') //Conditions for A-D
{
	int i = 0;
	BankAccount *curr = accounts[0].top;
	for (int i = 0; i < 9; i++)
	{
		if (curr->name == Accname)
		{
			curr->showBalance(Accname);
			break;
		}
	}
	if (curr->name != Accname)
	{

		cout << "Sorry, Name not Found" << endl;
	}
}

if (Accname[0] == 'E' || Accname[0] == 'F' || Accname[0] == 'G')
{
	int i = 0;
	BankAccount *curr = accounts[1].top;
	for (int i = 0; i < 9; i++)
	{

		if (curr->name == Accname)
		{
			curr->showBalance(Accname);
			break;
		}

	}
	if (curr->name != Accname)
	{

		cout << "Sorry, Name not Found" << endl;
	}
}
if (Accname[0] == 'H' || Accname[0] == 'I' || Accname[0] == 'J' || Accname[0] == 'K' || Accname[0] == 'L' || Accname[0] == 'M' )
{
	int i = 0;
	BankAccount *curr = accounts[2].top;
	for (int i = 0; i < 9; i++)
	{

		if (curr->name == Accname)
		{
			curr->showBalance(Accname);
			break;
		}

	}
	if (curr->name != Accname)
	{

		cout << "Sorry, Name not Found" << endl;
	}
}

if (Accname[0] == 'N' || Accname[0] == 'O' || Accname[0] == 'P' || Accname[0] == 'Q' || Accname[0] == 'R' || Accname[0] == 'S' )
{
	int i = 0;
	BankAccount *curr = accounts[3].top;
	for (int i = 0; i < 9; i++)
	{

		if (curr->name == Accname)
		{
			curr->showBalance(Accname);
			break;
		}

	}
	if (curr->name != Accname)
	{

		cout << "Sorry, Name not Found" << endl;
	}
}
if (Accname[0] == 'T' || Accname[0] == 'U' || Accname[0] == 'V' || Accname[0] == 'W' || Accname[0] == 'X' || Accname[0] == 'Y' || Accname[0] == 'Z')
{
	int i = 0;
	BankAccount *curr = accounts[4].top;
	for (int i = 0; i < 9; i++)
	{

		if (curr->name == Accname)
		{
			curr->showBalance(Accname);
			break;
		}

	}
	if (curr->name != Accname)
	{

		cout << "Sorry, Name not Found" << endl;
	}
}

TheEnd(&accounts[5]);
/*for (int i = 0; i < 5; i++) Delete Check
{
accounts[i].showList(&accounts[i]);

} */
system("pause");
return 0;
}