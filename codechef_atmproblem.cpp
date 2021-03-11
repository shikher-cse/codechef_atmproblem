// enormous  input  problem
#include<bits/stdc++.h>
using  namespace std ;

int  main(){
	int  input  ,  check,  count  ;
	cin>>input  >>  check;
	int  val[input];
	for(int i =0;i< input;i++)
	{
		
		cin>>  val[i];
		if(val[i] %check == 0)
		{
			count = count   + 1 ;
		}
	}
	cout <<  count ;

	return 0;
}
