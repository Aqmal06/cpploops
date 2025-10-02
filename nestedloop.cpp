#include <iostream>

int main(){

//Full Triangle
    for(int i=1; i<=5; i++){
        for(int space =1; space<=5-i; space++){
            std::cout<<"  ";
        }

        for(int j=1; j<=2*i-1; j++){
            std::cout<<"* ";
        }
        std::cout<<'\n';
    }
    std::cout<<'\n';
    
//Half Triangle
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            std::cout<<"* ";
        }
        std::cout<<"\n";
    }
    std::cout<<'\n';

//Square
    for(int i=1; i<=4; i++){
        for(int j=1; j<=4; j++){
            std::cout<<"* ";
        }
        std::cout<<'\n';
    }
    return 0;
}