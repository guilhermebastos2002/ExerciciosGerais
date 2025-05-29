#include <iostream>
using namespace std;

int main() {
    int p, j1, j2, r, a;
    cin >> p >> j1 >> j2 >> r >> a;

    if (r == 1 && a == 1) {
        cout << "Jogador 2 ganha!" << endl;
    } else if (r == 1 && a == 0) {
        cout << "Jogador 1 ganha!" << endl;
    } else if (r == 0 && a == 1) {
        cout << "Jogador 1 ganha!" << endl;
    } else {
        int soma = j1 + j2;
        if ((soma % 2 == 0 && p == 1) || (soma % 2 != 0 && p == 0)) {
            cout << "Jogador 1 ganha!" << endl;
        } else {
            cout << "Jogador 2 ganha!" << endl;
        }
    }

    return 0;
}
