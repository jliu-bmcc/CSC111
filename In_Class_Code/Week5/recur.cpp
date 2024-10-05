#include <iostream>
using namespace std;

int sum(int);
int evenSum(int);
int fact(int);

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;
    // int result = 1;
    // for(int i = 1; i <= num; i++) {
    //     result *= i;
    // }
    cout << evenSum(num);
}

int sum(int n) {
    if(n == 0) {
        return 0;
    }else {
        return n + sum(n-1);
    }
}

// evenSum(7) = 6 + 4 + 2 + 0
// evenSum(7)
// evenSum(6) => 12
// 6 + evenSum(4) => 6 + 6 = 12
// 4 + evenSum(2) => 4 + 2 = 6
// 2 + evenSum(0) => 2 + 0 = 2
// evenSum(0) = 0
int evenSum(int n) {
    if(n == 0){
        return 0;
    }else {
        if(n % 2 == 0) {
            return n + evenSum(n-2);
        }else {
            return evenSum(n - 1);
        }
    }
}








int fact(int num){
    if(num <= 1){
        // Base case
        return 1;
    }else {
        // recursive case
        return num * fact(num-1);
    }
}