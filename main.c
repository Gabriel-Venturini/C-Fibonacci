#include <stdio.h>
 
int main() {
    int firstValue = 0, secondValue = 1, thirdValue = 0, N = 0, loopCounter;
    
    while (N <= 0 || N > 46){
    scanf("%d", &N);
    }
    printf("%d ", firstValue);
    printf("%d ", secondValue);
  
    for(loopCounter = 2; loopCounter < N - 1; loopCounter++){ 
        thirdValue = firstValue + secondValue;
        printf("%d ", thirdValue);
        firstValue = secondValue;
        secondValue = thirdValue;
    }
    thirdValue = firstValue + secondValue;
    printf("%d\n", thirdValue);
}