#include<bits/stdc++.h>
using namespace std;
void heapify(int arr[], int n ,int i){
    int largest = i;
    int rightChild = 2*i+2;
    int leftChild = 2*i+1;

    if(leftChild < n && arr[leftChild]>arr[largest]){
        largest= leftChild;
    }
    if(rightChild < n && arr[rightChild]>arr[largest]){
        largest= rightChild;
    }
    if(largest != i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}
int main(){
    int n=5;
    int arr[] = {1,4,7,3,9};
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}