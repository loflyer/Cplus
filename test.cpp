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

    // 如果重载赋值运算符而不对该函数作任何处理， 下面代码的赋值（隐式类型转换就转不了） 

    // 对的，没有错！！
    swt = 250;
    swt.show_stn();
    return 0;
}
