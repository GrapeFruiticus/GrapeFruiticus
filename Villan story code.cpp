#include <iostream>
using namespace std;
int main ()
{
bool yes = false;
bool no = false;
char input = '*';
//Villan flowchart
cout << "As you drive to you 25th Highschool reunion you start to have flashbacks." << endl;
cout <<"You start to remember the incident that happened in your junior year." << endl;
cout <<"You do not remember if the cool laughed in your face or if they did not laugh at you." <<endl;
cout <<"Did the cool kids laugh at you? Type in Y or N." << endl;
cin >> input;
cout << endl;

if((input == 'N') || (input == 'n')) // converted input to boolean
{
    no = true;
}

if(no)
{
  cout <<"No, you're being over dramatic. Calm down and enjoy catching up with old friends!" << endl;
}

if((input == 'Y') || (input == 'y')) // converted input to boolean
{
    yes = true;
}
if(yes)
{
cout <<"RELEASE YOUR FREEZNATOR MUAHAHAAHA!!!!!!!!!!!!!!! You have a degree in mechanical enginnering, remember?" << endl;
}

return 0;
}