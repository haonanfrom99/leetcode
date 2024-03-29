// ̰��
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), [](vector<int> a, vector<int> b){
            return a[1] > b[1];
        });
        int i = 0;
        int n = boxTypes.size();
        int res = 0;
        while(truckSize > 0 && i < n){
            res += min(truckSize, boxTypes[i][0])*boxTypes[i][1];
            truckSize -= min(truckSize, boxTypes[i][0]);
            i++;
        }
        return res;
    }
};
