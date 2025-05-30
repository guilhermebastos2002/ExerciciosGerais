#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;
 
int main() {
 
 int N;
 int count1 = 0;
 int B = 0;
 char S[101];
 cin >> S;
 
 for (int i = 0; i < strlen(S); i++) {
     if (S[i] == '1') {
         count1++;
     }
 }
 
 
 if (count1 % 2 == 0) {
     cout << S << 0;
 }
 else if (count1 % 2 != 0) {
     cout << S << 1;
 }

    return 0;
}