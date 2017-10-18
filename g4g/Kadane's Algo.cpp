/*#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
//http://practice.geeksforgeeks.org/problems/kadanes-algorithm/0

int kadane(int m, int c[]){
    // if positive, add to sum, if negative, keep track of lowest
    int highestNeg = -999;
    int sum = 0;
    for(int i = 0; i < m; i++){
        if (c[i] > 0){
            sum += c[i];
        }
        else{
            if (c[i] >= highestNeg){
                highestNeg = c[i];
            }
        }
        
    }
    
    if (sum >= 0) return sum;
    else return highestNeg;
    
}

 
 int main(){
     
 int t;
 cin>>t;
 while(t--) // NUM TEST CASE LOOP **
 {
 int m,a;
 cin >> m;
 int c[m];
 for(int i = 0; i < m; i++){
 cin >> a;
 c[i] = a;
 }
 cout << kadane(m,c) << endl;
 } // NUM TEST CASE END **
     
     
 return 0;
     
 }
 */

