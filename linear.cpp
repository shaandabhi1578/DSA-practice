#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter target: ";
    cin>>target;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            cout<<"Found at index "<<i;
            return 0;
        }
    }
    cout<<"Not Found";
    return 0;
}