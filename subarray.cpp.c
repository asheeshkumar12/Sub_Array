#include<bits/stdc++.h>
using namespace std;
int main()
{

    int arr[n];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {

        cin>>arr[i];

    }
    for(int i=0;i<n;i++)
    {

        for(int j=i;j<n;j++)
        {

            for(k=i;k<=j;k++)
            {

                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
