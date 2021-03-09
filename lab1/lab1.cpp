// lab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "conio.h"
#include "iostream"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n, a[10][10],i,j;
	cout<<"dati n"<<;
	cin>>n;
	for(i=0; i<n; i++)
	{
		a[i][i]=4;
		a[i][n-1-i]=4;
	}
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
		{
			if(a[i][j]!=4)
				a[i][j]=3;
		}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	getch();
	return 0;
}

