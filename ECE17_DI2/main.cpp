#include <iostream>
using namespace std;

int checkVal(int divisorFizz, int divisorBuzz, int value){
    if(value%divisorFizz == 0){
        cout << "Fizz ";
        return 0;
    } else if (value%divisorBuzz == 0) {
        cout << "Buzz ";
        return 0;
    } else {
        cout << value;
        return 0;
    }
}

int FizzBuzz(int length, int space){
    for(int i = 1; i <= length; i+=space){
        checkVal(3, 5, i);
    }
    return 0;
}

int modulo(int num, int divisor){

}

int main() {
    FizzBuzz(500, 2);
}
