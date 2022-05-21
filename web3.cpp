#include <bits/stdc++.h>
using namespace std;
//this is a class for performing the work of lending
//it checks the balance in the account before lending money
class Loan
{
     private:
     int acno;
     string name;
     double balance;
     long time;
     double interest;
     double amt;
     int rate;
     public:
     //function for opening the account of borrower
      void Account()
    {
        cout << "Enter Account Number: ";
        cin >> acno;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter  Balance: ";
        cin >> balance;
    }
    //function to display the current status of account of borrower
     void displayAccount()
     {
         cout << "Account Number: " << acno <<"\n";
        cout << "Name: " << name <<"\n";
        cout << "Balance: " << balance <<"\n";
     }
     //to calculate the loan of the person
     void loan()
     {
         cout<<"Enter time for loan";
         cin>>time;
         cout<<"Enter amount required for loan";
         cin>>amt;
         if(balance<1000)
         cout<<"Loan cannot be given";
         else 
         {
             if(amt>1000&&amt<10000)
             {
                 rate=2;
                 interest=2/100.0*amt*time;
                 
             }
             else if(amt>10000&&amt<1000000)
             {
                 rate=5;
                 interest=5/100.0*amt*time;
             }
             else
             {
                 rate=10;
                 interest=5/100.0*amt*time;
             }
             cout<<"Interest paid is "<<interest<<"\n";
         }
           
     }
     
   
};
//this function is used to make contact between n borrowers and lenders
int main() {

	int n;
    cin>>n;
    //object of class loan is created for n people and we will take input for n people and display it
    Loan l[n];
    for(int i=0;i<n;i++)
    {
        l[i].Account();
        l[i].displayAccount();
        l[i].loan();
        
    }
	return 0;
}