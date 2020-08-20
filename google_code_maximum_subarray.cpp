#include<iostream>
using namespace std;
int main()
{
	int arr[100];	//array of numbers
	int n;	 // total no of elements
	int k;	//comparitive element
	cout<<"Enter total elements: "<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"enter the element: "<<i+1<<endl;
		cin>>arr[i];
	}
	cout<<"enter the comparision element: "<<endl;
	cin>>k;
	int less=0,greater=0,equal=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<k)
		{
			less++;	
		}
		if(arr[i]>k)
		{
			greater++;	
		}if(arr[i]==k)
		{
			equal++;	
		}	
	}	
	if(less==greater)
	{
		cout<<"max subarray lenght is: "<<n;
	}
	int m=n;
	if(less<greater)
	{
		for(int i=0;i<n;i++)
		{
			if(arr[i]==k || arr[i]<k)
			{
				continue;
			}
			if(arr[i]>k)
			{
				if(greater!=less)
				{
					greater--;
					m--;
				}
				else
				{
					break;
				}
			}
		}
				cout<<"max subarray lenght is: "<<m;
	}
}
