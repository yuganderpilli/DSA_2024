#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        int mins = i;
       for(int j=i+1;j<n;j++){
        if(arr[j]<arr[mins]) mins=j;
       }
    swap(arr[mins],arr[i]);
        
    }
for(int i=0;i<n;i++) cout<<arr[i]<<" ";

}