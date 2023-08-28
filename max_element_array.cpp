// code to find the maximum element in the array using recursions  code 

#include <iostream>
#include<limits.h>
using namespace std;


void findmax ( int arr[] , int n, int i , int maxi ){

  if(i>=n){
    return;
    
  }

 
  if(arr[i]>maxi)
  {
    maxi=arr[i];
  }


  findmax(arr,n,i+1,maxi);
  
}

int main() {

  int arr[] = { 10,20,66,74,35,90,34,56};
  int n = 8;
     int maxi = INT_MIN;
   int i = 0;
  
  findmax(arr,n,i,maxi);

  cout<<"the answer is "<<maxi;
}
