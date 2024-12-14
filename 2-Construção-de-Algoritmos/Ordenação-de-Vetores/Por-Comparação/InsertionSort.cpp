#include <iostream>
using namespace std;

int vetor1[10] = {2, 1, 5, 6, 9, 3, 7, 4, 10, 0};

void insertionSortRudini(int Vetor[], int tamanho){
    for (int j = 1; j < tamanho; j++) // j levando que primeiro elem. está ordenado
    {
        int chave = Vetor[j];
        int i = j - 1;

        while (i >= 0 && Vetor[i] > chave)
        {
            Vetor[i + 1] = Vetor[i];
            i = i - 1;
        }
        Vetor[i + 1] = chave;
    }
}

void insertionSortLucas(int Vetor[], int tamanho){
    for (int i = 1; i < tamanho; i++) // O(n - 1)
    {
        int j = i;                  
        while (j > 0 && Vetor[j - 1] > Vetor[j]) // pior caso: O(n^2) , melhor caso: O(n)
        {
            int temp = Vetor[j];
            Vetor[j] = Vetor[j - 1];
            Vetor[j - 1] = temp;

            j--;
        }
    }
}

int main(){
    cout << "Vetor desordenado: " << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << vetor1[i] << ", ";
    }

    cout << "Vetor ordenado: " << endl;

    insertionSortLucas(vetor1,10);

    for (int i = 0; i < 10; i++)
    {
        cout << vetor1[i] << ", ";
    }
    return 0;
}