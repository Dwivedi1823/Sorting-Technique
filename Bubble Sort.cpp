#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int arr[n];
    for(int  i = 0; i < n; i ++)
    {
        cin>>arr[i];
    }
    
    int cnt = 1;
    
    while(cnt < n){
        for(int  i = 0; i < n - cnt; i++){
            if(arr[i] > arr[i+1])
                swap(arr[i],arr[i+1]);
        }
        cnt++;
    }
    for(int  i = 0; i < n; i ++){
        cout<<arr[i]<<" ";
    }
    
	return 0;
}
