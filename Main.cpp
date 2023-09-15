#include "Linear_Operators.h"
#include <vector>
#include <iostream>

using namespace std;
void swapRow(vector<int>* Ri, vector<int>* Rj){
    
}
int main(){
    cout << "Start" << endl;
    Matrix myArray({{1,2,3,4,5},
                    {2,2,3,4,5},
                    {3,2,3,4,5},
                    {4,2,1,3,5}
                    });

                    
    vector<vector<int>> myArr = 
    {{1,2,3,4,5},
     {2,22,3,4,5},
     {3,2,3,4,5}};
    
    myArray.printMatrix();

    /*
    for(int i = 0; i < myArr.size(); i++){
        for(int j = 0; j < myArr[0].size(); j++){
            cout << myArr[i][j] << " ";
            if (myArr[0].size() -1 == j){
                cout << endl;
            };
        };
    };
    */


};