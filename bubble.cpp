#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int arr[n];
  
  for(int i=0;i<n;i++)
  cin>>arr[i];
  
/*
  ->worst case: O(N^2)
*/  

  for(int i=0;i<n;i++)
  { bool swaped=false;
  	for(int j=0;j<n-1-i;j++)
  	{
  	  if(arr[j]>arr[j+1])
	  {
        swap(arr[j],arr[j+1]);
		swaped=true;	  	
	  }		
	}
	if(swaped==false)
	break;
  }

  for(int i=0;i<n;i++)
  cout<<arr[i]<<" ";
  

  return 0;
}

