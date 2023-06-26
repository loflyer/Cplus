#include "stonewt.h"
#include <iostream>
using std::cout;
using std::endl;
int main(int argc, char const *argv[])
{
    
    Stonewt swt(900);
    swt = 1000;
    cout << &swt<<endl;
    swt.show_stn();


    swt = 250;
    swt.show_stn();
    return 0;
}
