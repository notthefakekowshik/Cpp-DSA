#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define f(a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define mod 1000000007
#define pve(v) for(auto i : v) cout<<i<<" ";
#define c(x) cout<<x<<" ";
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vl vector<long>
#define ri(x) int x; cin>>x;
#define rs(x) string x; cin>>x;


using namespace std;
 
void init_code()
{
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int main()
{
	init_code();
	vector<int> a={1,2,3,4,7,9};
	vector<int> b={0,1,1,1,2,15};
	cout<<lower_bound(all(b),2) - b.begin();
	cout<<endl;
	cout<<upper_bound(all(b),2) - b.begin();
	cout<<endl;
	auto it = *upper_bound(all(b) , 2);
	cout<<it;
	cout<<endl;
	auto itt = *lower_bound(all(b) , 2);
	cout<<itt;
	cout<<endl;
	cout<<"----------------"<<endl;
	vector<int> v{ 10, 20, 30, 30, 30, 40, 50 };
	cout<<lower_bound(all(v) , 30) - v.begin();
	cout<<endl;cout<<endl;
	auto iit = *lower_bound(all(v) , 35) ;
	cout<<iit;
	return 0;
}

/*
 lower_bound() - x.begin() -> 
 1. gives you the exact index if the element is PRESENT.
 2. gives you the index TO INSERT if the element is NOT PRESENT.



lower_bound() ->
1. same as above but this doesn't return indexes, it returns the elements instead.


basically, LB says greater or equal but UB says only greater.

*/