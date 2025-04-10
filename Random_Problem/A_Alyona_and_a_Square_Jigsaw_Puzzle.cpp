#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> v(n);
        ll target=1,next=8;
        ll sum=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=v[i];
            
            while(sum>target)
            {
                target+=next;
                next+=8;
            }
            if(sum==target)
            {
                ans++;
                target+=next;
                next+=8;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}