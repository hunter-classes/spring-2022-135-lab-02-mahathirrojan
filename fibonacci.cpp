#include <iostream> 

int main(){
    int fib[60];

    fib[0] = 0;
    fib[1] = 1;

    for(int i = 2; i < 60; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }

    for(int i = 0; i < 60; i++){
        std::cout << fib[i] << std::endl; 
    }
    return 0; 
}

/* 
The reason why the numbers start becoming negative 
as it approaches 2 billions is because ints can store up to 
2.1 billion. 
*/ 
