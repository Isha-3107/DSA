#include<iostream>
using namespace std;
int main()
{
    int i, arr[10], n, first, last, middle;
    cout<<"Enter 10 Elements (in ascending order): ";
    for(i=0; i<10; i++)
    cin>>arr[i];
    cout<<"\nEnter Element to be Search: ";
    cin>>n;
    first = 0;
    last = 9;
    middle = (first+last)/2;
    while(first <= last)
    {
        if(arr[middle]<n)
        first = middle+1;
        else if(arr[middle]==n)
        {
            cout<<"\nThe number, "<<n<<" found at Position "<<middle+1;
            break;
        }
        else
        last = middle-1;
        middle = (first+last)/2;
    }
    if(first>last)
    cout<<"\nThe number, "<<n<<" is not found in given Array";
    cout<<endl;
    return 0;
}