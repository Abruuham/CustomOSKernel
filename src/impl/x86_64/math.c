#include "math.h"
#include "print.h"

int add(int a, int b){
    return a + b;
}

int subtract(int a, int b){
    return a - b;
}

int divide(int a, int b){
    if(b == 0){
        print_str("Can't divide by 0\n");
        return 1;
    }
    return a / b;
}

int multiply(int a, int b){
    return a * b;
}

int power(int a, int b){
    int result = 1;

    for(int b; b > 0; b--){
        result = multiply(result, a);
    }

    return result;
}

int square_root(int a, int b){
    int sqrt, temp;

    sqrt = divide(a, 2);

    while(sqrt != temp){
        temp = sqrt;

        sqrt = (a / temp + temp) / 2;
    }

    return sqrt;
}