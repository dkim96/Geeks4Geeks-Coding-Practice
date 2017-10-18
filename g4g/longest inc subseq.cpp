/*

#include <iostream>
#include <stdlib.h>
using namespace std;

int LSI(int size, int arr[]){
    int LS[size];
    for(int i = 0; i < size - 1; i++)
    {
        LS[i] = 1;
        for(int j = 0; j < i - 1; j++)
        {
            if(arr[i] > arr[j] && LS[i] < LS[j]) LS[i] = LS[j] + 1;
        }
    }
    int largest = 0;
    for (int i = 0; i < size -1; i++){
        if(LS[i] > largest) largest = LS[i];
    }
    
    return largest;
    
    
}

int main(){
    int runs, size;
    cin >> runs;
    while(runs--){
        cin >> size;
        int arr[size];
        for(int i = 0; i<size; i++) cin >>arr[i];
        cout << LSI(size, arr);
    }
    
}
 
 */
