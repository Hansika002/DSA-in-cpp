#include<iostream>
using namespace std;

void print(int *p) {

    cout << *p << endl; 

}
void update(int *p) {
   *p = *p + 1;
}

int getSum(int *arr, int n) {

    cout << endl << "Size : " << sizeof(arr) << endl;

    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[6] = {1,2,3,4,5,7};
    cout << "Sum is " << getSum(arr + 3 ,3) << endl ;  
    return 0;
}