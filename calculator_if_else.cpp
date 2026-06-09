//QUESTION
// Bulid a calculator using if else for the 4- basic arithmatic operator :-
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char op;
    cout << "Enter the a number : " << endl;
    cin >> a;
    cout << "Enter the b number : " << endl;
    cin >> b;
    cout << "Enter the operator number : " << endl;
    cin >> op;
    if (op == '+')
    {
        cout << "a+b =" << (a + b) << endl;
    }
    else if (op == '-')
    {
        cout << "a-b =" << (a - b) << endl;
    }
    else if (op = '*')
    {
        cout << "a*b =" << (a * b) << endl;
    }
    else if (op = '/')
    {
        cout << "a/b =" << (a / b) << endl;
    }
    else
    {
        cout << "Invalid number " << endl;
    }
    return 0;
}







// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b;
//     char op;
//     cout << "Enter the a number : " << endl;
//     cin >> a;
//     cout << "Enter the b number : " << endl;
//     cin >> b;
//     cout << "Enter the operator number : " << endl;
//     cin >> op;
//     if (op == '+')
//     {
//         cout << "a+b =" << (a + b) << endl;
//     }
//     else if (op == '-')
//     {
//         cout << "a-b =" << (a - b) << endl;
//     }
//     else if (op = '*')
//     {
//         cout << "a*b =" << (a * b) << endl;
//     }
//     else if (op = '/')
//     {
//         cout << "a/b =" << (a / b) << endl;
//     }
//     else
//     {
//         cout << "Invalid number " << endl;
//     }
//     return 0;
// }