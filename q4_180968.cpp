#include<iostream>
using namespace std;
void function(int arr[],int size)
{
	
	for(int i=0;i<size;i++)
	{
	cin>>arr[i];
	
	}
		for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
          
            if(arr[j] < arr[i])
            {
               int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
	for(int i=0;i<size;i++)
	{
	
	cout<<arr[i]<<" ";
	}
}
int main()
{
	int arr[100];
	int size;
	cout<<" Enter the size of the array : ";
    cin>>size;
	function(arr,size);


}
