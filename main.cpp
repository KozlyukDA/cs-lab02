#include <iostream>

using namespace std;

int main()
{
cout << "Enter A and B: ";
int a, b;
cin >> a >> b;
cout << "A + B = " << a + b << '\n'
<< "A - B = " << a - b << '\n'
<< "A * B = " << a * b << '\n'
<< "A / B = " << a / b << '\n'
<< "Maximum = ";
if (a < b)
    cout << b;
else
    cout << a;
cout<<"Minimum = ";
if (a < b)
    cout << a;
else
    cout << b;
}
