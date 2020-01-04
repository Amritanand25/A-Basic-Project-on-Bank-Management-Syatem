#include<iostream>
using namespace std;
class Bank
{
 char name[100];
 char add[200];
 char y;
 int balance;
 public:
   void OpenAccount();
   void DepositeMoney();
   void WithdrawMoney();
   void DisplayAccountDetail();
};
void Bank :: OpenAccount()
{
 cout<<"Enter your full name := ";
 cin.ignore();
 cin.getline(name,100);
 cout<<"Enter your Address := ";
 cin.ignore();
 cin.getline(add,200);
 cout<<endl<<"What type of Account you want to open Saving (s) or Current (c) := ";
 cin>>y;
 cout<<"Enter Amount for Deposite := ";
 cin>>balance;
 cout<<endl<<"YOUR ACCOUNT IS CREATED."<<endl;
}
void Bank :: DepositeMoney()
{
 int a;
 cout<<"Enter how much Amount you want to Deposite := ";
 cin>>a;
 balance=balance+a;
 cout<<endl<<"After this Deposite Amount, NOW TOTAL AMOUNT IN YOUR ACCOUNT IS := "<<balance;
}
void Bank :: WithdrawMoney()
{
 float amount;
 cout<<endl;
 cout<<"Enter Amount to withdraw := ";
 cin>>amount;
 balance=balance-amount;
 cout<<"After this withdraw amount, NOW TOTAL AMOUNT IS LEFT IN YOUR ACCOUNT IS := "<<balance;
}
void Bank :: DisplayAccountDetail()
{
 cout<<"Your full name := "<<name;
 cout<<endl<<"Your Address := "<<add;
 if(y=='s'){
 cout<<endl<<"Type of Account that you open is SAVING ACCOUNT ("<<y<<")";
 }else { if(y=='c')
 cout<<endl<<"Type of Account that you open is CURRENT ACCOUNT ("<<y<<")";}
 cout<<endl<<"Total Amount in Your Account := "<<balance;
}
int main()
{
 int ch;
 char x;
 Bank o;
 do
 {
  cout<<"1. Open Account "<<endl;
  cout<<"2. Deposite Money "<<endl;
  cout<<"3. Withdraw Money "<<endl;
  cout<<"4. Display Account "<<endl;
  cout<<"5. Exit "<<endl;
  cout<<"Please select the option from above."<<endl;
  cin>>ch;
  switch(ch)
  {
   case 1:
        cout<<"OPEN ACCOUNT. "<<endl;
        o.OpenAccount();
        break;
   case 2:
        cout<<"DEPOSITE MONEY. "<<endl;
        o.DepositeMoney();
        break;
   case 3:
        cout<<"WITHDRAW MONEY."<<endl;
        o.WithdrawMoney();
        break;
    case 4:
        cout<<"DISPLAY ACCOUNT DETAILS." <<endl;
        o.DisplayAccountDetail();
        break;
    case 5:
        if(ch == 5)
        break;
    default :
        cout<<"SORRY, This is not exist, please try Again."<<endl;
  }
  cout<<endl<<"Do you want to select next option then press : ( for yes (y) / for no (n) ) := ";
  cin>>x;
  if(x=='n' || x=='N')break;
 }while(x=='y' || x=='Y');
 return 0;
}

