#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
 
    int N = 0;
    int T;
    
    cin >> T;
    
    int vetor[5];
    
    for (int i = 0; i <= 4; i++) {
        cin >> vetor[i];
        if (vetor[i] == T) {
          N++;
        }
    }
    cout << N;
 
    return 0;
}