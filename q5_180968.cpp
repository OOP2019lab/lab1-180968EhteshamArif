#include<iostream>
#include<fstream>
using namespace std;
void function(int *arr,int size,ofstream fout)
{
	
	for(int i=0;i<size;i++)
	{
	cin>>*( arr + i );

	
	}
		for(int i=0; i<size-1; i++)
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
		cout<<*( arr + i );
		fout<<*( arr + i );
	}
}
int main()
{
	ofstream fout;
	fout.open("results_l180968.txt");
	int size;
	cout<<" Enter the size of the array : ";
	cin>>size;
	int *arr=new int[size];
	function(arr,size);


}