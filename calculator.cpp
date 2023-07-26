#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter your first number";
    cin>>a;
    cout<<"enter your secound number";
    cin>>b;
    int n;
    cout<<"enter your choice 1 add   2 sub  3 mul   4 div";
    cin>>n;
    switch(n){
        case 1: cout<<a+b;
        break;
        case 2: cout<<a-b;
        break;
        case 3: cout<<a*b;
        break;
        case 4: cout<<a/b;
        break;
        default: cout<<"out of choice"; 


    }
    return 0;

}
