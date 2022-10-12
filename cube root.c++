#include <iostream>
#include <cmath> 

using namespace std;

int main()
{
    cout << " =====  to find the Cube root of a given number ===== \n\n";

    // variable declaration
    int n;
    // variable initialization and declaration
    double cb = 1;
    // taking input from the command line (user)
    cout << " \n\nEnter the number you want to find the Cube root of : ";
    cin >>n;
    cb = cbrt(n);
    cout << " \n\nThe Cube Root of the number " << n << " is : " << cb;
    cout << "\n\n\n";

    return 0;
}
