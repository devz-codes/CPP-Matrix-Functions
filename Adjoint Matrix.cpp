#include<iostream>
#include<vector>

using namespace std;

vector<vector<double>> adjoint(vector<vector<double>> matrix){
    int len= matrix.size();
    vector<vector<double>> result={};

    for(int i=0;i<len;i++){
      vector<double> dummy={};
      for(int j=0;j<len;j++){
        double val= pow(-1,i+j)*determinant(sub_matrix(matrix,i,j));
        dummy.push_back(val);
      }
      result.push_back(dummy);
    }
    return transpose(result);
  }
