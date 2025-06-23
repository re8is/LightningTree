#include <iostream>
#include <vector>
#include <utility>
#include <cmath>
#include <iomanip>
using namespace std;

void testMpCommCost(vector<pair<int, int> > params)
{
    for(int i = 0; i < params.size(); i++)
    {
        if(i == 0)continue;
        int d = params[i].first;
        int n = params[i].second;
        
        int ln = pow(2, d-1);
        int dn = ln - 1;

        int matrix = dn * n;

        double dnc = dn * 64.0 / 8 /1024;
        double lnc = ln * 64.0 / 8 /1024;
        double matrixc = matrix * 64.0 / 8 /1024;

        cout << d << ": " << std::fixed << std::setprecision(4) << dnc *2 << " & " << lnc *2<< " & " << matrixc*2 <<" & " << 2*(dnc+lnc+matrixc) << endl;
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
    testMpCommCost(params);
}