
// Author : reclone_rk
// Time complexity : o(logn)
#include <bits/stdc++.h>
using namespace std; 
 
int binarySearch(int arr[], int l, int r, int x) 
{ 
	if (r >= l) { 
		int mid = l + (r - l) / 2; 

		
		// if found return value
		if (arr[mid] == x) 
			return mid; 

		// check in right portion
		if (arr[mid] > x) 
			return binarySearch(arr, l, mid - 1, x); 

		 // check in left portion
		return binarySearch(arr, mid + 1, r, x); 
	} 

	
	return -1; 
} 

int main(void) 
{ 
	//  taking number of elements
	int n;
	cout<<"Enter number of elements"<<endl;
	cin>>n;

	cout<<"Enter elements"<<endl;
	int a[n];

	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	// applying search
	int result = binarySearch(a, 0, n - 1, 5); 
	(result == -1) ? printf("Element is present in array") 
				: printf("Element is not present at index %d", 
							result); 
	return 0; 
} 
