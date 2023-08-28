
// BINARY SEARCH USING RECURSIONS IN C++


#include <iostream>
#include<vector>

using namespace std;

int binarySearch(vector<int> &arr , int s, int e, int key)
{
    //base case
    //case-1 key not found
    //s>e - invalid array 
    
    if(s>e)
    return -1;
    
    int mid = (s+e)/2;
    
    //case-2 key found
    
    if(arr[mid] == key)
    return mid;
    
    // arr[mid] < key then search on right of the mid element in array 
    
    if(arr[mid]<key){
        
        return binarySearch(arr,mid+1,e,key);
    }
    
    else{
        
        // arr[mid] > key then search on the left of the mid element in array
        
        return binarySearch(arr,s,mid-1,key);
    }
    
}

int main()
{
    vector<int>&arr {10,20,30,40,50,60,70,80,90};
    
    trgt = 90;
    int i = 0;
    int n = arr.size();
    int s = 0;
    int e = n-1;
    
    int ans = binarySearch(v,s,e,trgt);
    
    cout<<" THE ANSWER is :"<<ans<<endl;

    return 0;
}
