#include "Linear_Operators.h"
#include <vector>
#include <iostream>
using namespace std;

Matrix::Matrix(){
    //Run RREF HERE WHEN FINISHED
}
Matrix::Matrix(vector<vector<int>> arrSet){
    A = arrSet;
    m = A.size();
    r = A[0].size();

};

bool Matrix::isEmpty(){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < r; j++){
            if (A[i][j] != 0){
                return false;
            };
        }
    }
    return true;
};
bool Matrix::isDiagonal(){
    for (int i = 0; i < m; i++){
        for(int j = 0; j < r; j++){
            if(i != j && A[i][j] != 0){
                return false;
            }
        }
    }
    return true;
}

bool Matrix::isIdentity(){
   int r = min(m,r);
    for(int i = 0; i < r && isDiagonal(); i++){
        if(A[i][i] != 1){
            return false;
        }
    };
    return true;

}
void Matrix::printMatrix(){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < r; j++){
            cout << A[i][j] << " ";
            if (r -1 == j){
                cout << endl;
            };
        };
     };
};

int len(){
};

int Matrix::scalarProduct(vector<int> x, vector<int> y){
    int prod;
    if(x.size() != y.size()){
        return NULL;
    }else
    {
        for(int i = 0; i < x.size(); i++){
            prod += x[i] * y[i];
        };
    };  
    return prod;
};
/*#################ELEMENTARY ROW OPERATIONS############## 
                                NOTATION:    
                                |   R_i indicates ith row
                                |   BEFORE the operation is applied
                                |
                                |   R_* indicates ith row AFTER
                                |   the operation is applied.

SwapRow: interchange row i with row j
    R_i <-> R_j  (R_i* = R_j , R_j* = R_i)

Mutliply Row: Multiply Row by a const != 0
    R_i* = cR_i

addRowMult: Add c times row j to row i (leaving row j unchanged)
    R_i* = R_i + cR_j

*/
void Matrix::swapRow(vector<int*> Ri, vector<int*> &R_j){
    vector<int> *R_iHold = new.Vector<int>;

}


/*                  
                    |      n      |
        B =  r {    |      ^      |
                    |-------------|
*/                  
vector<vector<int>> Matrix::matrixProduct(vector<vector<int>> B){
    vector<int> x;
    vector<int> y;
    int B_r = B.size();
    int B_n = B[0].size();
    //if(B_r != b_n){
    //    return NULL;
    //}
    for(int i = 0; i < B_r; i++){

    };
};