#include <iostream>
using namespace std;

int main(){

    int n = 3;
    int rep = n-1;
    int matriks[10][10] = {
        {1, 2, 3}, {4, 5, 6}, {7, 8, 9}
    };

    // int matriks[10][10] = {
    //     {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}
    // };

    cout << "Matriks yang Anda masukkan adalah: " << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << matriks[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;

    // reverse matriks
    while(rep > 0){
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (rep <= n-2){
                    if (j+1 == rep+1){
                        break;
                    }
                }
                if (j+1 == n){
                    break;
                }
                matriks[i][j] = matriks[i][j] + matriks[i][j+1]; 
                matriks[i][j+1] = matriks[i][j] - matriks[i][j+1]; 
                matriks[i][j] = matriks[i][j] - matriks[i][j+1];   
            }
        }
        rep--;
    }
    // endof reverse
    
    cout << "Matriks yang Anda masukkan adalah: " << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << matriks[i][j] << "\t";
        }
        cout << endl;
    }
    

    return 0;
}