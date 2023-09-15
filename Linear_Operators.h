#ifndef LINEAR_OPERATORS
#define LINEAR_OPERATORS
#include <vector>

using namespace std;

class Matrix{
    public:
    Matrix();
    Matrix(vector<vector<int>> A_0);
    vector<vector<int>> MatrixProduct(vector<vector<int>>);
    bool setVector();
    bool isEmpty();
    bool isDiagonal();
    bool isIdentity();
    int LenCol();
    int LenRow();
    void printMatrix();
    vector<vector<int>> matrixProduct(vector<vector<int>>);
    vector<vector<vector<int>>> RREF; //3 arrays containing 2d matricies.
    //Structure: A * x_vec = b_vec

    private:
    int scalarProduct(vector<int>,vector<int>);
    vector<vector<int>> A;
    /*  Elementary Row Operations*/
    void swapRow(vector<int*> Ri, vector<int*> &Rj); //Swaps Row R_i with R_j
    void multiplyRow(vector<vector<int*>> &matrix,int i, float c);// multiply entire row i with const c
    void addRowMult(vector<int*> &Ri, vector<int*> &Rj, float c);
    int m;
    int r;


};


#endif