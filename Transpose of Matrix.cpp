#include<iostream>
#include<vector>

using namespace std;

vector<vector<double>> transpose(vector<vector<double>> matrix){
    vector<vector<double>> result={};
    int len= matrix.size();

    for(int i=0;i<len;i++){
      vector<double> dummy={};
      for(int j=0;j<len;j++){
        dummy.push_back(matrix[j][i]);
      }
      result.push_back(dummy);
    }
    return result;
  }
