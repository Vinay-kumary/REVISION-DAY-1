#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
float num,i;
cout<<"Enter number: ";
cin >> num;
for(i=0.01;i*i<=num;i=i+0.01);
if(num==0)
{
cout<<"Square root of given number is 0";
}
else if(num==1)
{
cout<<"Square root of given number is 1";
}
else if( num < 0 )
{
cout<<"Enter a positive number to find square root";
}
else
{
std::cout << std::fixed;
std::cout << std::setprecision(3);
cout<<"Square root of given number is " <<i;
}
}
