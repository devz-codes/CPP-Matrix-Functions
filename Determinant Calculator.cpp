#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

double determinant(vector<vector<double>> v){
  int len = v.size();
  double det=1;

  int count=len-1;
  int k=1;
  int no=0;

  for(int i=0;i<len;i++){
    if(i!=len-1){
      for(int j=count;j>=k;j--){
        if(v[i][i]==0){
          for(int l=0;l<len;l++){
            int c=v[i][l];
            v[i][l]=v[i+1][l];
            v[i+1][l]=c;
          }
          no+=1;
        }
        double factor = v[j][i]/v[i][i];
        for(int l=0;l<len;l++){
          v[j][l]-=factor*v[i][l];
        }
      }
    }
    else{
      break;
    }
    k+=1;
  }

    for(int i=0;i<len;i++){
      det*=v[i][i];
    }
    return pow(-1,no)*det;
  }
