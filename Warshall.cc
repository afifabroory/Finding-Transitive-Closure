#include <iostream>
using namespace std;

// R = {(1,4),(2,1),(2,3),(3,1),(3,4),(4,3)}
int Wk[4][4] = {
			  {0,0,0,1},
			  {1,0,1,0},
			  {1,0,0,1},
			  {0,0,1,0}
		       	 };

// R = {(1,2),(1,3),(2,4),(3,2),(3,4),(4,2)}
/*int Wk[4][4] = {
		{0,1,1,0},
                {0,0,0,1},
                {0,1,0,1},
                {0,1,0,0}
               };*/

int isExistsAPath(int i, int j, int k) {
  if (Wk[i][j] == 1 || (Wk[i][k] == 1 && Wk[k][j] == 1)) {
    return 1;
  } else {
     return 0;
  }
}


int main() {
  
  // Array length
  int arrLen = sizeof(Wk)/sizeof(*Wk);

  for (int k = 0; k <= arrLen; k++) { 
    for (int i = 0; i < arrLen; i++) {
      for (int j = 0; j < arrLen; j++) {
        Wk[i][j] = isExistsAPath(i,j,k);
      }
    }
  }
 
  for (int i = 0; i < arrLen; i++) {
    for (int j = 0; j < arrLen; j++) {
      cout << Wk[i][j] << " ";
    }
    cout << endl;
  }
}
