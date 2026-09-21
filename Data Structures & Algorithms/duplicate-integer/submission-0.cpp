class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>arr(nums.size());
        bool possi=false;
        for(int i=0;i<nums.size();i++){
            arr[nums[i]]++;
            if(arr[nums[i]]>1){possi=true;}
        }
        return (possi)?true:false;
        
    }
    
};