/*
题目描述
一只青蛙一次可以跳上1级台阶，也可以跳上2级。求该青蛙跳上一个n级的台阶总共有多少种跳法（先后次序不同算不同的结果）。
*/

class Solution {
public:
    int jumpFloor(int number) 
    {
   int num_copy=number;
		if(number<=0)
			return 0;
        if(number==1)
		{
			return 1;
		}
		else if(number==2)
		{
			return 2;
		}
		else if(number >2)
		{
			number--;
			num_copy=num_copy-2;
			return (jumpFloor(number)+jumpFloor(num_copy));
		}
        return 0;
    }
};
