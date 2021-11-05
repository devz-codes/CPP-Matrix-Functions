#include<vector>
#include<iostream>

using namespace std;

vector<vector<double>> inverse(vector<vector<double>> matrix){
    int len = matrix.size();
    vector<vector<double>> copy;
    double det = determinant(matrix);
    vector<vector<double>> adj = adjoint(matrix);

    for(int i=0;i<len;i++){
      vector<double> dummy={};
      for(int j=0;j<len;j++){
        dummy.push_back(adj[i][j]/det);
      }
      copy.push_back(dummy);
    }
    return copy;
  }
