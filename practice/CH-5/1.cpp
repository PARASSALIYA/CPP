#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Enter first number :";
    cin>>a;
    cout<<"Enter second number :";
    cin>>b;
    if(a<b)
    {
        cout<<"The minimum value :"<<a;
    }
    else
    {
        cout<<"The minimum value :"<<b;
    }
}