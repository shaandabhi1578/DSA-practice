#include<iostream>
using namespace std;
int main()
{
    int n;
    int high,low,mid;
    int key;
    cout<<"enter size ";
    cin>>n;
    int arr[n];
    cout<<"enter elemnts: \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int temp=arr[0];
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
        }
    }
    cout<<"enter key: ";
    cin>>key;
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        return mid;
        else if(key<arr[mid])
        high=mid-1;
        else
        low=mid+1;
    }
    cout<<"key found at "<<mid;
}



































/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];
    cout << "Enter sorted array:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "Enter target: ";
    cin >> target;
    int low = 0;
    int high = n - 1;
    while(low <= high)
    {
        int mid = (low + high) / 2;
        if(arr[mid] == target)
        {
            cout << "Found at index " << mid;
            return 0;
        }
        else if(arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << "Not Found";
    return 0;
}
    */