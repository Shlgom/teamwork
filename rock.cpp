#include <iostream>
#include <cstdlib> 


using namespace std;
int main(){
	int rock=1;
	int scissrors=2;
	int papper=3;
	int a;
	int pc = (rand() %3);
	int b;
	
	cout<<"choice #1 rock , #2 scissors or #3 papper"<<endl;
	cin>>a;
	
	
	if (pc == 0 and a == 1) {
		cout <<"YOU WIN" <<endl;
	}
	else if ( pc == 1 and a == 2) {
		cout <<"YOU WIN" <<endl;
	}
	else if ( pc == 2 and a == 0) {
		cout <<"YOU WIN" <<endl;
	}
	else if ( a == pc) {
		cout <<"equal" <<endl;
	}
	else {
		cout <<"YOU LOSE" <<endl;
	}


{

cout<<"u choice"<<a<<endl;
cout<<"cm choice"<<pc<<endl;
}
return 0;
}
	
