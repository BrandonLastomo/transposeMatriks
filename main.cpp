#include <iostream>
using namespace std;

void printElemen(int arr[][10], int ukuran);
void transposeMatriks(int arr[][10], int ukuran);

int main(){
    
    int n, matriks[10][10];

    cout << "Masukkan ukuran matriks persegi (n x n)\n> ";
    cin >> n;
    int rep = n-1;

    // input elemen matriks
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << "Masukkan elemen ke[" << i+1 << "][" << j+1 << "] = ";
            cin >> matriks[i][j];
        }
    }
    // endof input

    cout << endl;

    // display elemen matriks
    printElemen(matriks, n);
    // endof display elemen
    
    // proses transpose
    transposeMatriks(matriks, n);
    // endof proses transpose
    cout << endl;
    
    // display elemen matriks
    printElemen(matriks, n);
    // endof display elemen

    return 0;
}

void printElemen(int arr[][10], int ukuran){
    cout << "Matriks yang Anda masukkan adalah: " << endl;
    for (int i = 0; i < ukuran; i++){
        for (int j = 0; j < ukuran; j++){
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

void transposeMatriks(int arr[][10], int ukuran){
    for (int i = 0; i < ukuran; i++){
        for (int j = 0; j < ukuran; j++){
            for (int k = 0; k < ukuran; k++){
                for (int l = 0; l < ukuran; l++){
                    // skip pemeriksaan diagonal utama
                    if (i == j){
                        j = ukuran;
                        k = ukuran;
                        l = ukuran;
                    // endof skip

                    // proses pertukaran nilai pada elemen matriks
                    } else if (i == l && j == k){
                        arr[i][j] = arr[i][j] + arr[k][l]; 
                        arr[k][l] = arr[i][j] - arr[k][l]; 
                        arr[i][j] = arr[i][j] - arr[k][l];
                    // endof pertukaran
                    }
                }
            }
        }
    }
}