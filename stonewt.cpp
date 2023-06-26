#include <iostream>
using std::cout;
#include "stonewt.h"
 
Stonewt::Stonewt(double lbs)
{
    cout << "call constructor"<< std::endl;
    stone = int(lbs) / Labs_per_stn ;
    pds_left = int(lbs) % Labs_per_stn + lbs- int(lbs);
    pounds = lbs;
}
 
Stonewt::Stonewt(int stn,double lbs)
{
    this->stone = stn;
    this->pds_left = lbs;
    this->pounds = stn *Labs_per_stn  + lbs;
}
 
void Stonewt::operator= (const Stonewt & st)
{
    cout<< "overide assignment operator....."<< std::endl;
}


Stonewt::Stonewt(const Stonewt & st){

    cout << "call copy constructor"<< std::endl;
    
}

Stonewt::~Stonewt()
{
 
}
 
void Stonewt::show_stn() const
{
    cout << this->stone << " stone, " << pds_left << " pounds.\n" ;
}
 
void Stonewt::show_lbs() const
{
    cout << this->pounds << " pounds.\n" ;
}