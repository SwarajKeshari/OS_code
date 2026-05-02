#include <bit/stdc++.h>
using namespace std;

void findWaitingTime(int processers[], int n, int bt[], int wt[]){
  wt[0]=0;

  for(int i=1; i<n; i++){
    wt[i] = bt[i-1] + wt[i-1];
  }

  
}
