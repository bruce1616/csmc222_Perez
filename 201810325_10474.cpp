/*-------------------------------------------------------------------------*/
/* Filename : 201810325_10474.cpp                                          */
/* Description : Where is the Marble?                                      */
/* Author : Perez, Jeremy S.                                               */
/* Course and Year : BS CS-2                                               */
/* Last Modified :   March 2, 2020                                         */
/* Honor Code : This is my own code. I have worked hard in completing      */
/* this work and I have not copied from any unauthorized                   */
/* resource. I am also well aware of the policies                          */
/* stipulated in the college student handbook regarding                    */
/* academic dishonesty.                                                    */
/*-------------------------------------------------------------------------*/

#include<bits/stdc++.h>
using namespace std;

int binary_seacrh_firstOcc(int A[],int x, int left, int right){
    if(left > right)
        return -1;
    int m = (left + right)/2;
    if(A[m] == x && (A[m-1] != x || m == 0))
        return m+1;
    else if(x > A[m]){
        return binary_seacrh_firstOcc(A,x,m+1,right);
    }
    else{
        return binary_seacrh_firstOcc(A, x, left, m-1);
    }
}

int main(){
    int n,M;
    int counter = 0;
     while (cin >> n >> M){
        if(n == 0 && M == 0){
            break;
        }
        else{
                counter++;
                int N[n];
                
                for(int i=0; i<n; i++) 
                      cin >> N[i]; 
                    sort(N,N+n);
                  
                int m[M];
                for(int x=0; x<M; x++) 
                    cin >> m[x];
            
        
            cout << "CASE# " << counter << ":" << endl;
            for(int j=0; j < M; j++){
                if(binary_seacrh_firstOcc(N,m[j],0,n) != -1){
                   cout << m[j] << " found at " << binary_seacrh_firstOcc(N,m[j],0,n) << endl; 
                }
                else if (binary_seacrh_firstOcc(N,m[j],0,n) == -1){
                    cout << m[j] << " not found" << endl; 
                }
                
              }

            
        }
        
   }
 
 return 0;   
}


