// Author : reclone_rk
// best algoritm in o(n)
#include <bits/stdc++.h>
using namespace std; 

int main()
{
	// taking input
	int n;
	cout<<"Enter number of elements"<<endl;
	cin>>n;

	cout<<"Enter elements"<<endl;
	int a[n];

	// using max function
	int max_e = INT_MAX;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		max_e = max(max_e,a[i]);
	}

	cout<<max_e<<endl;
	
	return 0;
}
