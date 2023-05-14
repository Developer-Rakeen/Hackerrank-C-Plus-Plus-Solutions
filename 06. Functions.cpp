#include<iostream>
using namespace std;
int max_of_four(int a, int b, int c, int d)
{
	int ret_res;
	if(a>b && a>c && a>d)
	{
		ret_res = a;
	}
	else if(b>c && b>d)
	{
		ret_res = b;
	}
	else if(c>d)
	{
		ret_res = c;
	}
	else
	{
		ret_res = d;
	}
	return ret_res;
}
int main()
{
	int a, b, c, d, res;
	cin>>a>>b>>c>>d;
	res = max_of_four(a,b,c,d);
	cout<<res;
	return 0;
}