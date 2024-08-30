#include "stats.h"
#include <numeric>
#include <algorithm>
#include <cmath>
Stats Statistics::ComputeStatistics(const std::vector<float>& ip) {
    //Implement statistics here
    stats st;
    if(ip.size()==0)
    {
        st.average=NAN;
        st.min=
        st.max=
    }
    else
    {
        st.average= ((float)std::accumulate(ip.begin(),ip.end(),0.0f))/ip.size();
        st.min =*std::min_element(ip.begin(), ip.end());
        st.max =*std::max_element(ip.begin(),ip.end());
    }
    return st; 
}
