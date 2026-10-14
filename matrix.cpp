#include <iostream>
using namespace std;
int main() {
    int A[10][10], B[10][10];
    int sum[10][10], diff[10][10],multiply[10][10],transpose[10][10];
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;
    cout << "Enter elements of Matrix A:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> A[i][j];
        }
    }
    cout << "Enter elements of Matrix B:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = A[i][j] + B[i][j];
            diff[i][j] = A[i][j] - B[i][j];
            multiply[i][j] = A[i][j] * B[i][j];
        
            transpose[j][i] = A[i][j];
        }
    }
    cout << "\nAddition of A and B:\n";
for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nSubtraction of A and B:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << diff[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nMultiplication of A and B:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nTranspose of Matrix A:\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}