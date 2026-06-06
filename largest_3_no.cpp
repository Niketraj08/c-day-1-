//OUESTION 
// print the largest number of 3 number

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the a number : " << endl;
    cin >> a;
    cout << "Enter the b number : " << endl;
    cin >> b;
    cout << "Enter the c number : " << endl;
    cin >> c;
    if (a >= b && a >= c)
    {
        cout << "Largest is a =" << a << endl;
    }
    else if (b >= c)
    {
        cout << "Largest is b =" << b << endl;
    }
    else
    {
        cout << "Largest is c =" << c << endl;
    }
    return 0;
}
