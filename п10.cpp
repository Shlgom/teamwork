#include <iostream>
using namespace std;
int Denis(int rev);
int main()
{
int user,a,rev;

cin>>user;

while(user>0){
a=user%10;
rev=rev*10+a;
user=user/10;
}
cout<<rev<<endl;
cout<< "rev^2 = " << Denis(rev) << endl;
cout << "rev^4 = "<< Denis(rev)*Denis(rev)<<endl;
 return 0; // changed maks 
}

int Denis(int rev) {
	
	return rev*rev;
}
