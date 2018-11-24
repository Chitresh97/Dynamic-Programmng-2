#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minCostPathHelper(int **input, int m, int n,int ix, int iy) {
  if(ix==m-1&&iy==n-1)
    return input[ix][iy];
  if(ix==m-1)
    return input[ix][iy]+minCostPathHelper(input,m,n,ix,iy+1);
  if(iy==n-1)
    return input[ix][iy]+minCostPathHelper(input,m,n,ix+1,iy);
  return input[ix][iy]+min(minCostPathHelper(input,m,n,ix+1,iy),min(minCostPathHelper(input,m,n,ix+1,iy+1),minCostPathHelper(input,m,n,ix+1,iy)));
}


int minCostPath(int **input, int m, int n) {
  return minCostPathHelper(input,m,n,0,0);
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
