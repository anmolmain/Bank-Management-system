#include<iostream>
using namespace std;
void psswd();
void menu();
void showmenu();
void checkbalance();
int depositmoney();
int withdrawmoney();

int choice,amount;
int balance,ch;
int withdraw;
long int accountNumber=0;
int PIN=0;
int option;
int main()
{
    //0. psswd done
    //1. menu done
    //2. show menu done
    //3. check balance done
    //4. deposit money
    //5. withdraw money

    psswd();
showmenu();

  }

void psswd()
{
    beginn:;
    cout<< "Welcome!!!!\nPlease Enter your Account Number\n";
    cin>>accountNumber;
beggi:
    ;
    cout<< "Please Enter your PIN\n";
    cin>>PIN;
    switch(PIN)
    {
    case 3137:
        cout<<"\n\nSuccess!!\n\n"<<endl;
        break;
    default :
        cout<< "\nIncorrect PIN\nPlease try again\n\n"<<endl;

        goto beginn;
        }
}
void menu()
{
    beggi:;
    cout<< "Please choose an option"<<endl;
    cin>>option;
    switch(option)
    {
    case 1:
        checkbalance();
        break;
    case 2:
        depositmoney();
        break;
    case 3:
        withdrawmoney();
    case 4:
        goto EXIT3;
        break;
    default:
        cout<< "\n\n\n\n\nPlease Enter a valid Choice\n\n\n\n"<<endl;
        showmenu();
    goto beggi;
    }
    //}
EXIT3:
    ;
}
void showmenu()
{
    cout<<"**********MENU**********"<<endl;
    cout<< "1.   Check Balance Of Account"<<endl;
    cout<< "2.   Deposit Money"<<endl;
    cout<< "3.   Withdraw Money"<<endl;
    cout<< "4.   EXIT"<<endl;
    cout<<"************************"<<endl;
    menu();
}
void checkbalance()
{
        cout<< "Your Balance is "<<balance<<"\n\n"<<endl;
        showmenu();
}
int depositmoney()
{

        cout<< "\n\nEnter The Amount to deposit : "<<endl;
        cin>>amount;
        balance=balance+amount;
        cout<< "\n\n**********Amount deposited Successfully**********\nYou can exit now"<<endl;
         cout<< "\n\nCurrent Balance in Account : "<<balance<<"\n"<<endl;
        showmenu();

}
int withdrawmoney()
{
   // cout<< "\n\nYou choose to withdraw money\n\n"<<endl;
    cout<< "\n\nPlease Enter the Amount you want to withdraw : "<<endl;
    cin>>withdraw;
    if(withdraw>balance)
    {
        cout<<"\n\n\n**********There is not Enough cash in your account**********\n\n\n"<<endl;
        showmenu();
    }
    else
    {
        balance=balance-withdraw;
        cout<< "\n\n**********PLEASE COLLECT YOUR CASH**********\n\n"<<endl;
        showmenu();
}
}
