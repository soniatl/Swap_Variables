#include <iostream>
using namespace std;

int main ()
{
    int num1, num2;
    num1 = 5;
    num2 = 10;

    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << num1 << " " << num2 << endl;
    
return 0;

}