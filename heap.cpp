#include<bits/stdc++.h>
using namespace std;
class maxHeap{
    public:
    int arr[100];
    int curr = 0;  //points to the last element or indicates the size of heap
    void insertion(int num){            //insertion time complexity is O(logn)
        curr++;
        arr[curr] = num;
        int idx = curr;
        //rearranging
        while(idx > 1){
            int parent = idx/2;
            if(arr[parent] < arr[idx]){
                swap(arr[idx],arr[parent]);
                idx = parent;
            }
            else return;
        }
    }
    void print(){
        for(int i =1;i<=curr;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void deletion(){                        //deletion time complexity is O(logn)
        //make root node as the last node
        arr[1] = arr[curr];
        //remove last node
        curr--;
        //rearrange root node 
        int idx = 1;
        while(idx<curr){
            int leftChild = 2*idx;
            int rightChild = 2*idx+1;

            if(leftChild < curr && arr[leftChild]>arr[idx]){
                swap(arr[leftChild],arr[idx]);
                idx = leftChild;
            }
            else if(rightChild < curr && arr[rightChild]>arr[idx]){
                swap(arr[rightChild],arr[idx]);
                idx = rightChild;
            }
            else return;
        }

    }
};

int main(){
    maxHeap pq;
    pq.insertion(5);
    pq.insertion(3);
    pq.insertion(9);
    pq.print();
    pq.deletion();
    pq.print();
    return 0;
}