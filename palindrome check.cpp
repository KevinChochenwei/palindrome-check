#include <iostream>

using namespace std;

 
int main(){
	
	string A;
	int i,B,C;
	bool chc;
	
	while(cin>>A){
		B=A.size();
		
		for(i=0;i<B;i++)
		{
		
			if(A[i]==A[B-i-1])
			chc=true;
							
			else
			chc=false;
			break;
		}
			if(chc==0)
			cout<<"no"<<endl;
			else
			cout<<"yes"<<endl;
	}

	return 0;
	
	
}


