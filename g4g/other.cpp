//
//  other.cpp
//  g4g
//
//  Created by Daniel Kim on 6/26/17.
//  Copyright © 2017 dk. All rights reserved.
//

#include "other.hpp"
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

string pair2(int n, int x, int c[]){
    for(int i = 0; i<n; i++)
    {
        for(int j = i+1; j < n; j++){
            if(c[i] + c[j] == x)
                return "Yes";
        }
    }
    return "No";
}

/*
 
 int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int m,n,a;
        cin >> m >> n;
        int c[m];
        for(int i = 0; i < m; i++){
            cin >> a;
            c[i] = a;
        }
        cout << pair2(m,n,c) << endl;
    }
    return 0;
}
 
 */
