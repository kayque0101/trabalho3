#include <iostream>
using namespace std;

void insertionSort(int vetor[], int size) {
    for (int i = 1; i < size; i++) {
        int chave = vetor[i];
        int j = i - 1;

        while (j >= 0 && vetor[j] > chave) {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = chave;
    }
}

void bubbleSort(int vetor[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (vetor[j] > vetor[j + 1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int vetor[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;

        for (int j = i + 1; j < size; ++j) {
            if (vetor[j] < vetor[minIndex]) {
                minIndex = j;
            }
        }
        int temp = vetor[i];
        vetor[i] = vetor[minIndex];
        vetor[minIndex] = temp;
    }
}

int main() {
    const int MAX_TAMANHO = 1000;
    int vetor[MAX_TAMANHO];
    int tamanho;
    cout << "Coloque a quantidade de elementos que você deseja inserir no seu modelo de organização.(1 a 20 valores, InsertionSort; 21 a 30 valores, BubbleSort; maior do que 30 valores, SelectionSort.)" << endl;
    cin >> tamanho;

    for (int i = 0; i < tamanho; ++i) {
        cin >> vetor[i];
    }

    if (tamanho <= 0) {
        cout << "Número inválido" << endl;
    } else if (tamanho <= 20) {
        cout << "Vetor original: ";

        for (int i = 0; i < tamanho; ++i) {
            cout << vetor[i] << " ";
        }
        cout << endl;

        insertionSort(vetor, tamanho);

        cout << "Vetor ordenado usando Insertion Sort: ";
        for (int i = 0; i < tamanho; ++i) {
            cout << vetor[i] << " ";
        }
        cout << endl;
    } else if (tamanho <= 30) {
        cout << "Vetor original: ";
        for (int i = 0; i < tamanho; ++i) {
            cout << vetor[i] << " ";
        }
        cout << endl;

        bubbleSort(vetor, tamanho);

        cout << "Vetor ordenado usando Bubble Sort: ";
        for (int i = 0; i < tamanho; ++i) {
            cout << vetor[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Vetor original: ";
        for (int i = 0; i < tamanho; ++i) {
            cout << vetor[i] << " ";
        }
        cout << endl;

        selectionSort(vetor, tamanho);
        
        cout << "Vetor ordenado usando Selection Sort: ";
        for (int i = 0; i < tamanho; ++i) {
            cout << vetor[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
