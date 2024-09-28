#include<bits/stdc++.h>
using namespace std;
void Selection(int arr[],int start,int sizes){
    if(start>=sizes) return ;
    int min= start;
    for(int i=start;i<sizes;i++){
        if(arr[min]>arr[i]){
            min = i;
        }
    }   
    swap(arr[start],arr[min]);

    Selection(arr,++start,sizes);
}
int main(){
    int arr[]={7,45,43,42,75,75,236,43,56897,8,53,233,25,343,75,46,468,4574,342};
    int n= sizeof(arr)/sizeof(arr[0]);
    Selection(arr,0,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}