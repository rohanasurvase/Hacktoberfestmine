﻿#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int bintodec(int);
int main()
{
	string a,b="",tmp="";
	getline(cin,a);
	int i,t;
	for(i=1;i<=a.size();i++)
	{
		if(i!=a.size()&&a[i]!=' ')
		{
			tmp+=a[i];
		}
		else
		{
			b+=(char)bintodec(stoi(tmp));
			tmp="";
		}
	}
	cout<<"\n"<<a<<endl;
	return 0;
}
int bintodec(int temp)
{
	int dec=0,i=0;;
	while(temp>0)
	{
		int rem = temp%10;
		dec+= (int)pow((int)2,(int)i)*rem;
	        ++i;
		temp/=10;
	}
	return dec;
}
