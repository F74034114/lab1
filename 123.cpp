#include<iostream>
using namespace std;

int main(){
	int n,t ;

	cout<<"請輸入一個數字:";

	cin>>n ;

	

	for(t=1;t>0;t++){
	if(n==1){
		cout<<endl;	
		break;
	}

	if(n%2==0){
		n/=2;
		cout<<n<<" "; 
	}
	else{
		n=3*n+1;
		cout<<n<<" ";
	}
	}

	return 0;
}
