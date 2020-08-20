#include<iostream>
using namespace std;
int main()
{
	int arr[100];	//array of numbers
	int n;	 // total no of elements
	int K;	//comparitive element
	cout<<"Enter total elements: "<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"enter the element: "<<i+1<<endl;
		cin>>arr[i];
	}
	cout<<"enter the comparision element: "<<endl;
	cin>>K;
	int less=0,greater=0,equal=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<K)
		{
			less++;	
		}
		if(arr[i]>K)
		{
			greater++;	
		}if(arr[i]==K)
		{
			equal++;	
		}	
	}
	cout<<"greater are :"<<greater<<endl;
	cout<<"lesser are :"<<less<<endl;
	cout<<"equal are :"<<equal<<endl;
	int g=greater;
	int l=less;
	int max=n;
	if(greater==less)
	{
		cout<<"maximum lenght subarray is :"<<n;
	}
	else{
	for(int j=1;j<=n;j++)//for size of subarray
	{
		for(int i=0;i<n-j+1;i++)//no of times output be print for respective size
		{
			for(int k=0;k<j;k++)// for elements
			{
				if(arr[k+i]<K)
				{
					l--;
					max--;
				}
				if(arr[k+i]>K)
				{
					g--;
					max--;
				}
				if(arr[k+i]==K)
				{
					continue;
				}
			}
			if(l==g)
			{
				cout<<"maximum subarray is:"<<max<<endl;
				break;
			}
			g=greater;
			l=less;
			max=n;
		}
		if(l==g)
			{
				break;
			}
}
}
}
