#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={5,4,3,2,1};
    int sizes=sizeof(arr)/sizeof(arr[0]);
    int n=1;
    while(n<sizes){
        int key = n-1;
        int value= arr[n]; 
        while(key>=0 && value <arr[key]){
            arr[key+1]=arr[key];
            key--;
        }
    arr[key+1]=value;
    n++;                    
    }
for(int i=0;i<sizes;i++) cout<<arr[i]<<" ";
}