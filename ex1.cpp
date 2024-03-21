// Exercicio 1: Mensagem em cascata

#include <iostream>
#include <string>
#include <windows.h> // para usar a função Sleep()

using namespace std;

int main() {
    string mensagem;
    cout << "Digite uma mensagem: ";
    getline(cin, mensagem);

    system("cls"); // Limpa a tela do console

    // Centraliza a mensagem na linha 5
    int espacosEsquerda = (80 - mensagem.length()) / 2;
    for (int i = 0; i < espacosEsquerda; ++i)
        cout << " ";
    cout << mensagem << endl;

    // Simula a "cascata" da mensagem
    for (int linha = 6; linha <= 20; ++linha) {
        system("cls");
        for (int i = 0; i < espacosEsquerda; ++i)
            cout << " ";
        cout << mensagem << endl;
        for (int i = 0; i < linha; ++i)
            cout << endl;
        Sleep(100); // Pausa de 100 milissegundos
    }

    return 0;
}
