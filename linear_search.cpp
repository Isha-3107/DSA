#include<iostream>
using namespace std;
int main()
{
    int arr[10], i, n, index;
    cout<<"Enter 10 Numbers: ";
    for(i=0; i<10; i++)
    cin>>arr[i];
    cout<<"\nEnter a Number to Search: ";
    cin>>n;
    for(i=0; i<10; i++)
    {
        if(arr[i]==n)
        {
            index = i;
            break;
        }
    }
    cout<<"\nFound at Index No."<<index;
    cout<<endl;
    return 0;
}