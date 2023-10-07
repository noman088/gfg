class Solution{
    public:
    vector<int> leaders(int a[], int n){
        
        vector<int> result;
        int leader = a[n-1];
        result.push_back(leader);
            
           for(int i=n-2; i>=0; i--){
               
               if(a[i]>=leader){
                   
                   result.push_back(a[i]);
                   leader = a[i];
               }
           }
        //    Reverse Array
           reverse(result.begin(),result.end());
           return result;
            
            
        
// just go and paste on gfg 

        
    }
};