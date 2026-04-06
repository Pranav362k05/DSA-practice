//Find even or odd	https://practice.geeksforgeeks.org/problems/odd-or-even3618/1

#include <stdbool.h>
#include <stdio.h>

bool isEven(int n) {
    // code here
    if (n % 2 == 0){
        return true;}
        
    else{
        return false;
    }
}

int main() {
    
    int n;
    scanf("%d", &n);
    
    if(isEven(n)) {
        printf("true");
    }
    
    else {
        printf("false");
    }
    
    return 0;
}