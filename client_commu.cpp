#include <iostream>
#include <vector>
#include <utility>
#include <cmath>
using namespace std;


void testClientCommCost(vector<pair<int, int> > params)
{
    for(int i = 0; i < params.size(); i++)
    {
        if(params[i].second == 19)continue;
        double n = (double)params[i].second;
        double ln = pow(2, params[i].first-1);
        double fsshare = n * 64/8 /1024;
        double resshare = ln * 2 * 128 / 8 / 1024;
        cout << n << " fs_share: " << fsshare * 2 << " res_share: " << resshare * 2<< " " << (fsshare+resshare)*2 << " KB \n";
    }
}

int main()
{
    vector<pair<int, int> > params;
    params.push_back(make_pair(2, 19));
    params.push_back(make_pair(3, 13));
    params.push_back(make_pair(4, 15));
    params.push_back(make_pair(8, 9));
    params.push_back(make_pair(13, 13));
    params.push_back(make_pair(17, 57));
    cout << "article,d,n,cost"<<endl;
    testClientCommCost(params);
}