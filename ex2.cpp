// Exercício 2: Palíndromo

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool ehPalindromo(const string& mensagem) {
    string mensagemSemEspacos;
    for (char c : mensagem) {
        if (c != ' ')
            mensagemSemEspacos += c;
    }
    string mensagemInvertida = mensagemSemEspacos;
    reverse(mensagemInvertida.begin(), mensagemInvertida.end());
    return mensagemSemEspacos == mensagemInvertida;
}

int main() {
    string mensagem;
    cout << "Digite uma mensagem: ";
    getline(cin, mensagem);

    if (ehPalindromo(mensagem))
        cout << "A mensagem e um palindromo." << endl;
    else
        cout << "A mensagem nao e um palindromo." << endl;

    return 0;
}
