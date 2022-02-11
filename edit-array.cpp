#include <iostream> 

int main(){
    
    int myData[10] = {1,1,1,1,1,1,1,1,1,1}; 
    int i; 
    int v; 

    do{
        for (int i=0; i < 10; i++) {
            std::cout << myData[i] << " "; 
        }
        std::cout << "\nInput index: " << std::endl; 
        std::cin >> i;

        std::cout << "Input value: " << std::endl;
        std::cin >> v; 
        
        if(i < 10 && i >= 0){
            myData[i] = v; 
        }
    }while(i < 10 && i >= 0);
    std::cout << "Index is out of range. Exit." << std::endl; 

    return 0; 
}