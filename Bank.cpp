#include <iostream>

using namespace std;

int main()
{
 //give ideas in dsicord before working on this   

cout << "Hello World" << endl;

int Addition (int a, int b);
int Subtraction (int a, int b);


string name;
string pin;
string action;

cout << "Please enter name..." << endl;
cin >> name;

if (name == "Joe") 
{
   cout << "Please eneter Pin number" << endl;
   cin >> pin;

   if (pin == "6969")
   {
    cout << "Welcome Joseph, your current balance" << endl;
    cout << "$0.00" << endl;
    cout << "Would you like to deposit or withdraw money?" << endl;

    cin >> action;

    if (action == "deposit");
    {
        cout << "How much?" << endl;
        cin >> action;
        cout <<"Your newblance is $" << action << endl;  
        cout << "Goodbye" << endl;
        return 0;        
    }

    else if (action == "withdraw");
    {
        cout << "How much would you like to take out?" << endl;
        cin >> action;
        cout << 
    }
   }

   else
   {
    cout << "WRONG GOODBYE" << endl;
   }
}

return 0;
}
