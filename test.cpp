#include<iostream>
using namespace std;

void check_max_heap(int arr[], int len){
    for (int i=0; i<len/2; i++){
        //to check that if the left child or right child is larger than the current node, then it is not a max-heap
        if (arr[i] < arr[2*i] || arr[i] < arr[2*i+1]){
            cout<<"false"<<endl;
            return;
        }
    }
    cout<<"true"<<endl;
    return;
}

int main(){

    int a[] = {3,2,1,4};
    int len = sizeof(a)/sizeof(a[0]);
    check_max_heap(a, len);

    return 0;
}