#include <vector>
#include <iostream>
#include <math.h>

using namespace std;

void euler(){
    // x' = x - e^t
    double x = 0;
    double h = 0.1;
    for(int i = 0; i < 10; i++){
        x = x + h*(x - exp(h*i));
        cout << "When t = " << h*(i+1) << ". x = " << x << ". err = " << abs(x + h*(i+1)*exp(h*(i+1))) << endl;
    }
}

void modifiedEuler(){
    // x' = x - e^t
    double x = 0;
    double h = 0.1;
    for(int i = 0; i < 10; i++){
        double f = x - exp(h*i);
        x = x + h/2*(f + x + h*f - exp(h*(i+1)));
        cout << "When t = " << h*(i+1) << ". x = " << x << ". err = " << abs(x + h*(i+1)*exp(h*(i+1))) << endl;
    }
}

int main(){
    cout << "Euler's Method" << endl;
    euler();
    cout << endl;
    cout << "Modified Euler's Method" << endl;
    modifiedEuler();
}

/*
int fc(int size, int arr[], int min, int pos){ // size determines the position
    cout << "iter" << endl; // delete
    int val = -1;
    if(pos < 2) return min;
    
    if(arr[pos-1] > arr[pos]){
        if(arr[pos] < min){
            val = fc(size, arr, arr[pos], 3*pos/4);
        }
        else val = fc(size, arr, min, pos/4);
    }
    
    if(arr[pos-1] < arr[pos]){
        if(arr[pos-1] < min){
            val = fc(size, arr, arr[pos-1], pos/4);
        }
        else val = fc(size, arr, min, 3*pos/4);
    }
    return val;
}

int main(){
    int runs, size;
    cin >> runs;
    while(runs--){
        cin >> size;
        int arr[size];
        for(int i = 0; i < size; i++){
            cin >> arr[i];
        }
        
        cout << fc(size, arr, 1001, size/2) << endl;
        
    }
}*/


/*
// A Dynamic Programming based solution for 0-1 Knapsack problem
#include<stdio.h>
#include <iostream>
using namespace std;

// A utility function that returns maximum of two integers
int max(int a, int b) { return (a > b)? a : b; }

// Returns the maximum value that can be put in a knapsack of capacity W
int knapSack(int W, int wt[], int val[], int n)
{
    int i, w;
    int K[n+1][W+1];
    
    // Build table K[][] in bottom up manner
    for (i = 0; i <= n; i++)
    {
        for (w = 0; w <= W; w++)
        {
            if (i==0 || w==0)
                K[i][w] = 0;
            else if (wt[i-1] <= w)
                K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
            else
                K[i][w] = K[i-1][w];
        }
    }
    for(int a = 0; a < n+1; a++){
        for(int b = 0; b < W+1; b++){
            cout << K[a][b] << " ";
        }
        cout << endl;
    }
    
    return K[n][W];
}

int main()
{
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int  W = 50;
    int n = sizeof(val)/sizeof(val[0]);
    printf("%d", knapSack(W, wt, val, n));
    cout << endl;
    return 0;
}
*/
