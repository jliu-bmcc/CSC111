# include <iostream>
using namespace std;

int main() {
    int num1;

    cout << "Please enter a number: ";
    cin >> num1;

    if(num1 > 10) {
        cout << "The number is grater than 10";
    }else if (num1 == 10) {
        cout << "The number is 10";
    }else {
        cout << "The number is less than 10";
    }
}
