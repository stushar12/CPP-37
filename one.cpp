#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p;
    cin>>p;
    while(p--)
    {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=1;
    int flag=0;
    int buy=0,sell=0,profit=0;
    while(i<n)
    {
        if(arr[i]>arr[i-1])
        {
            int j=i;
        buy=j-1;
        while(i<n && arr[i-1]<arr[i])
        {
            i++;
        }
        sell=i-1;
        flag=1;
        cout<<"("<<buy<<" "<<sell<<")"<<" ";
        i++;    
        }
        else
        {
            i++;
        }   
        

    }
    if(flag==0)
    cout<<"No Profit";
    cout<<endl;
}

}   
