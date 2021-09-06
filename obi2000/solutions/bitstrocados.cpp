#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'

using namespace std;

int t,n,v,q,d[]={1,5,10,50},r;

int main(){_
	while ((cin>>v)&&v){
		cout<<"Teste "<<++t<<endl;
		cout<<v/50;
		r=v%50;
		for (int i=3;i--;r%=d[i]) cout<<" "<<r/d[i];
		cout<<endl<<endl;
	}
	return 0;
}