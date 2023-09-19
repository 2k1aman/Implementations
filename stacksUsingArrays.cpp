#include<bits/stdc++.h>
using namespace std;

class Stack {    
public:
    int curr;
    int *arr;
    int n;
    Stack(int capacity) {
        curr = -1;
        this->n = capacity;
        arr = new int[capacity];
    }

    void push(int num) {
        if(curr == n-1) return;
        curr++;
        arr[curr] = num;
    }

    int pop() {
        if(curr==-1) return -1;
        int temp = arr[curr];
        curr--;
        return temp;
    }
    
    int top() {
        if(curr==-1) return -1;
        return arr[curr];
        
    }
    
    int isEmpty() {
        if(curr==-1) return 1;
        return 0;
    }
    
    int isFull() {
        if(curr==n-1) return 1;
        return 0;
    }
    
};

int main(){
    Stack s(10);
    s.push(5);
    cout<<s.pop();

    return 0;
}