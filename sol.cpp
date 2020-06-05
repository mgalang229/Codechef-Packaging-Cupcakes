#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	int n;
	while(t--){
		cin >> n;
		if(n==2)
			cout << 2;
		else if(n%2==0)
			cout << (n/2)+1;
		else
			cout << (n+1)/2;
		cout << "\n";
	}
	return 0;
}
