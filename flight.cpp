#include <iostream>
#include<string>
// frfr
using namespace std;
class flight
{
  // prodtected class members.
protected:
  int adhar_chard;
  int pan_chard;
  string name;

public:
  void personaldetail(int ad, int pan,   string nam)
  {
    adhar_chard = ad;
    pan_chard = pan;
    name = nam;
  }
};
class ticket
{
protected:
  int tickettype;

public:
//in this function i am asking the which class  you want to pick 
  void typeoftickt()
  {
    int n;
    cout << " ... 1 = Vip bussnis class." << endl
         << " ... 2 = Economic class." << endl
         << " ... 3 = Gernal Class." << endl;
    cout << "Enter the type ....";
    cin >> n;
    switch(n)
    {
    case 1:
      cout << " vip busnis class ...." << endl;
      cout << " rs.....20000" << endl;
      break;
    case 2:
      cout << " Economic  class ...." << endl;
      cout << " rs.....10000" << endl;
      break;
    case 3:
      cout << " Gernal   class ...." << endl;
      cout << " rs.....80000" << endl;
      break;

      
    }
  }

};
// inheriting the name 
class finaltickit : public flight, public ticket
{
public:
// this function is printing the you details ,what you have entered .
  void finaltickit2()
{
    cout << "..... INDAN AIRLINES ......" << endl;
    cout << " your name................." << name << endl;
    cout << " your adharcard............." << adhar_chard << endl;
    cout << " your Pancard..............." << pan_chard << endl;
    typeoftickt();
    cout << " ......Thanks you sir......." << endl;
  }
};
int main()

{
  // cout << " ..... Welcome to airport sir would you like  risirve ticket........" << endl;
  // cout << " .... This flite will go goa ......" << endl;
  // cout << " .....This flight arive 5:00 AM ...." << endl;
  finaltickit tick;
  int ad;
  int pn;
  string naam;
  cout << " Enter your adharchard no...";
  cin >> ad;
  cout << " Enter your pancard no...";
  cin >> pn;
  cout << " Enter your butiful name sir...";
  cin >> naam;
  tick.personaldetail(ad, pn,naam);
  tick.finaltickit2();
  cout << " ....your ticket id booked sir ...." << endl;
}