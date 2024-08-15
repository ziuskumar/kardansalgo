
kardansalgo

 #include<iostream>
#include <climits>
using namespace std;

void maxSubarraysum(int *arr , int n){
    int maxsum = INT_MIN;
    int currsum = 0;

    for(int i =0; i<n; i++){
        currsum += arr[i];
        maxsum = max(currsum, maxsum);
        if(currsum < 0){
            currsum = 0;
        }
    }
    cout <<" Mamimum SubArray sum = "<< maxsum << endl; 
      
}

int main(){
    int arr[6] = {2,-3,6,-5,4,2};
    int n = sizeof(arr) /sizeof(int);

    maxSubarraysum(arr, n);

}
