class Solution {
public:
    int romanToInt(string s) {
        map<char, int> roman;
    roman.insert(pair<char, int>('I', 1));
    roman.insert(pair<char, int>('V', 5));
    roman.insert(pair<char, int>('X', 10));
    roman.insert(pair<char, int>('L', 50));
    roman.insert(pair<char, int>('C', 100));
    roman.insert(pair<char, int>('D', 500));
    roman.insert(pair<char, int>('M', 1000));

        int cnt=0;
    int ans=0;
    while(cnt<s.size())
    {


        if(roman[s[cnt]]<roman[s[cnt+1]])
        {
            ans+= (roman[s[cnt+1]] - roman[s[cnt]]);
            cnt++;
        }
        else
        {
            ans+= roman[s[cnt]];
        }
        cnt++;
    }

    return ans;
    }
};
