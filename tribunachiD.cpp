#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> vec = {0, 0, 1};
	int n, p;
	
	cout<<"ingrese la cantidad de veces que quiera usar la funcion"<<endl;
	cin>>n;
	
	for(int i = 0;i<n;i++){
		p= vec[0] + vec[1] + vec[2];
		vec[0] = vec[1];
		vec[1] = vec[2];
		vec[2] = p;
		cout<<p<<" ";
}
	
	
	
	
	
	return 0;
}