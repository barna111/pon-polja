#include <iostream>
using namespace std;
	int main (){
		
		int a;
		cout << "unesi broj:"<<endl;
		cin>>a;
		
		int n[a];
		
		for(int i = 0; i<a ;i++){
		
		cout<<"upisi"<<i+i<<"vrijednost u polje:"<<endl;
		cin >> n[i];
	}
	
		system("PAUSE");
		return 0;
	}
