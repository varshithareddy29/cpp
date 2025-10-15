#include<iostream>
using namespace std;
void callbyvalues(int X)
{
	X = X + 10;
	cout <<"inside  call by values function,x ="<< X<< endl;	
}
void callByReference(int &y)
{
	y = y + 10;
	cout <<"inside callByReference function,y="<< y<<endl;
}
int main()
{
	int a = 5;
    int b = 5;
    cout << "Before callBy values,a="<<a<<endl;
    callbyvalues(a);
    cout <<"After callBy values,a="<<a<<endl;
    cout << "\nBefore callByReference,b="<<b<<endl;
    callByReference(b);
    cout <<"After callByReference,b="<<b<<endl;
    return 0;
}
