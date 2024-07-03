#include <iostream>
using namespace std;


int main(){
    int n=8;
    int arr[8]={2,1,7,6,10,9,14,3};
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}