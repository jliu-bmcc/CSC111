#include <iostream>
using namespace std;

void timesTen(int&);
void getNumber(int&, int, int);
bool isEven(int); 

int main() {
    // cout << "Please enter a number: "
    int num = 10;
    cout << isEven(num);

}

bool isEven(int num){
    // bool result;
    if(num % 2 == 0) {
        // result = true;
        return true;
    }else {
        // result = false;
        return false;
    }
    // return result;
}



void timesTen(int &num) {
    num = num * 10;
    cout << "The product is: " 
         << num
         << endl
         << endl;
}

void getNumber(int &num, int start, int end) {
    cout << "Please enter a number between 1 to 100: ";
    cin >> num;

    while(num < start || num > end) {
        cout << "Opps! You enter wrong number, please enter the correct one: ";
        cin >> num;
    }
}




