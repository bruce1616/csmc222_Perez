/*-------------------------------------------------------------------------*/
/* Filename : 201810325_11057.cpp                                          */
/* Description : Exact Sum                                                 */
/* Author : Perez, Jeremy S.                                               */
/* Course and Year : BS CS-2                                               */
/* Last Modified :                                                         */
/* Honor Code : This is my own code. I have worked hard in completing      */
/* this work and I have not copied from any unauthorized                   */
/* resource. I am also well aware of the policies                          */
/* stipulated in the college student handbook regarding                    */
/* academic dishonesty.                                                    */
/*-------------------------------------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, M;
	while(cin >> n){
		int N[n];
		for(int i=0; i<n; i++)
			cin >> N[i];
		cin >> M;
			sort(N,N+n);
		
		int Hprice, Lprice;
		int i = 0;
		int j = n-1;
		while (i < j){
		    if(N[i] + N[j] == M){
		         Lprice = i;
			     Hprice = j;
		         i++; j--;
		         
				    // if(N[i] < N[j]){
				    //   Lprice = i;
					   //Hprice = j; 
				    // }else if(N[i] > N[j]){
				    //     Lprice = j;
					   // Hprice = i; 
				        
				    // }
				    // else if(N[i] == N[j]){
				    //     Lprice = j;
					   // Hprice = i; 
				        
				    // }
					
				}
			else if(N[i] + N[j] < M){
			    i++;
			}else{
			    j--;
			}
		    
		}

		cout << "Peter should buy books whose prices are " << N[Lprice] << " and " << N[Hprice] << "." << endl;
		cout << endl;
	
	}
	return 0;
}

