#include<bits/stdc++.h>
using namespace std;
void recurssion(int arr[],int start,int end){
 
    if(start>=end) return;
    if(arr[start]>arr[start+1]) 
    {
        swap(arr[start],arr[start+1]);
    }
    recurssion(arr,start+1,end);

}
void bubble(int arr[],int end){
   
    if(end<=1) return;
    recurssion(arr,0,end-1);
    bubble(arr,end-1);

}

int main(){
    int arr[]={6,8,43,3,2,56,8,853,4233,23,23,65,86,86};
    int sizes = sizeof(arr)/sizeof(arr[0]);

    bubble(arr,sizes);
    for(int i=0;i<sizes;i++) cout<<arr[i]<<" ";

}