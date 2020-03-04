/*-------------------------------------------------------------------------*/
/* Filename : 201810325_11057.cpp                                          */
/* Description : Exact Sum                                                 */
/* Author : Perez, Jeremy S.                                               */
/* Course and Year : BS CS-2                                               */
/* Last Modified :   March 3,2020                                          */
/* Honor Code : This is my own code. I have worked hard in completing      */
/* this work and I have not copied from any unauthorized                   */
/* resource. I am also well aware of the policies                          */
/* stipulated in the college student handbook regarding                    */
/* academic dishonesty.                                                    */
/*-------------------------------------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int num) { 
   int mid = l + (r - l)/2; 
   if (l <= r) { 
      if (arr[mid] == num)   
         return mid ; 
      if (arr[mid] > num)  
         return binarySearch(arr, l, mid-1, num);            
      else
         return binarySearch(arr, mid+1, r, num); 
   } 
   return mid; //no need to return -1. just return the last index
} 


int main(){
     int n,M;
    while (cin >> n){
        int N[n];
        for(int i=0; i<n; i++) 
            cin >> N[i]; 
        cin >> M; 
            sort(N,N+n);
            
    // for(int j=0; j < n; j++) 
    //     cout << N[j] << " "; 
    // cout << endl; 
    // cout << M;
    // cout << endl;
    
    int find = M/2;
    int l = binarySearch(N, 0, n - 1, find ); // the other one whose the lower price
	int r = binarySearch(N, 0, n - 1, find ); // the other one whose the higher price
    if (N[0] == find) // if equal to the half of the price
		cout << "Peter should buy books whose prices are " << N[0];
	else
		cout <<"Peter should buy books whose prices are "<< N[l - 1];
	cout << " ";
	if (N[n-1] == find)// if equal to the half of the price
		cout << "and " << N[n-1] <<".";
	else
		cout<<"and " << N[r] << ".";
    cout << endl;
    }
    return 0;
}



