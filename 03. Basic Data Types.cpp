#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a;
    long b;
    char c;
    float d;
    double e;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<setprecision(10)<<d<<endl;
    cout<<setprecision(15)<<e<<endl;
    return 0;
}