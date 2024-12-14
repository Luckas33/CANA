//Construção de algoritmo

#include <iostream>
using namespace std;

int vetorEx[20] = {2, 5, 1, 1, 7, 14, 8, 9, 13, -1, 2, 5, 1, 1, 7, 14, 8, 9, 13, -1};

void bubbleSort(int Vetor[], int tamanho){  // O(n^2)
    for (int i = 0; i < tamanho; i++){      // O(n)                        
        for (int j = 0; j < tamanho; j++) {  // O(n)
            if (Vetor[i] < Vetor[j])
            {
                int temp = Vetor[j];
                Vetor[j] = Vetor[i];
                Vetor[i] = temp;
            }
        }
    }
}

int main(){

    cout << "Vetor desordenado: " << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << vetorEx[i] << ", ";
    }

    bubbleSort(vetorEx, 20);

    cout << "\nVetor Ordenado: " << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << vetorEx[i] << ", ";
    }

    return 0;
}