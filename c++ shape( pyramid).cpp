#include<iostream>
using namespace std;
int main(){
	int rows;
	int r=rows;
cout<<" enter the number of rows :";
cin>>rows;

for(int i=0;i<rows;i++){
	for(int j=rows;j>=i;j--){
		cout<<" ";
	}
	for(int k=0;k<(i*2)-1;k++){
		cout<<"*";
		
	}
	cout<<endl;
}

	
	
	
	return 0;
}
