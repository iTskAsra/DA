#include <iostream>


using namespace std;

int main() {
    int n;
    cin >> n;
    int pillars[n];
    int largest_pillar = 0;
    for (int i=0; i<n; i++){
        cin >> pillars[i];
        if (pillars[i]>largest_pillar) largest_pillar = pillars[i];
    }
    cout << endl << endl;
    int matrix[largest_pillar][n] = {};
    for (int i=0; i<n; i++){
        for (int j=0; j<pillars[i];j++){
            matrix[j][i] = 1;
        }
    }

    for (auto &row : matrix)
    {
        for (auto &column : row)
        {
            cout << column << " ";
        }
        cout << endl;
    }
    cout << endl << endl;
    
}