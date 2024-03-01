#include <iostream>

using namespace std;

int main()
{
 //give ideas in dsicord before working on this   

cout << "Hello World" << endl;

string name;

string pin;

string action;


cout << "Please enter name..." << endl;

cin >> name;

if (name == "Joe") 
{
   cout << "Please eneter Pin number" << endl;

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
        

    }

   }

   else
   {
    cout << "WRONG GOODBYE" << endl;
   }
}



return 0;

}
