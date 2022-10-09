#include <vector>
using namespace std;
#include<stdio.h>

int solution(vector<int> inputArray) {
  int x = 0;
  int y = 0;
  int p = -1000;
  for ( int i = 0; i < inputArray.size() - 1;i++){
      x = inputArray[i];
      y = inputArray[i+1];
      if ( x * y > p){
          p  = x *y;
        }
    
    }
    return p;
}  