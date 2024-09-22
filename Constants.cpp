#include<iostream>
using namespace std;
int main()
{
  //this will declare the variable as "constant", which means unchangeable and read-only

  const int myNum = 15;  // myNum will always be 15
    myNum = 10;  // error: assignment of read-only variable 'myNum'

    return 0;
}