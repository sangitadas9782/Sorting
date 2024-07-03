#include<iostream>
using namespace std;
int main(){
  int n=7;
  int arr[7]={0,5,1,2,10,14,3};
for(int i=0;i<n-1;i++){
  int minIndex=i;
  for(int j=i+1;j<n;j++){
if(arr[j]<arr[minIndex]){
  minIndex=j;
}
}
swap(arr[minIndex],arr[i]);
  }
  
for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
}
  return 0;
}