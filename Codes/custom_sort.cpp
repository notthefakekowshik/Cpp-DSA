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
struct helper 
{
    bool operator()(pair<int,int> a, pair<int,int> b)
    {
        return a.second < b.second;
    }
};

bool sortvector(vector<int> a, vector<int> b)
{
 return a[1] < b[1]; 
} 

bool sortpair(pair<int,int> a, pair<int,int> b)
{
	return a.second < b.second;
}
int main()
{
	init_code();
	vector<vector<int>> v ={{1, 3}, {2, 6}, {8, 10},{2, 4}, {9, 11},{17, 9}, {15, 18}, {16, 17}};
	sort(all(v),  sortvector);
	for(auto &i : v)
	{
		for(auto &j : i)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<endl;


	vector<pair<int,int>> p = {{1, 3}, {2, 6}, {8, 10},{2, 4}, {9, 11},{17, 9}, {15, 18}, {16, 17}};
	sort(all(p),sortpair);
	for(auto i : p)
	{
		cout<<i.first<<" "<<i.second;
		cout<<endl;
	}
	cout<<endl;
	cout<<endl;

	vector<pair<int,int>> pp = p;
	sort(all(pp), helper()); // this shit is called Functors.
	for(auto it : pp) {
		cout<<it.first<<"->"<<it.second;
		cout<<endl;
	}
	return 0;
}

/*

In C++, 
a functor (or function object) is an object that can be treated as though it is a function. 
This is made possible by overloading the operator() in a class or struct, allowing instances of that class or struct to be invoked like a function.

*/