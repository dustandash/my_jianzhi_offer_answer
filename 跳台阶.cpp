/*
题目描述
一只青蛙一次可以跳上1级台阶，也可以跳上2级。求该青蛙跳上一个n级的台阶总共有多少种跳法（先后次序不同算不同的结果）。
*/
/*我的答案*/
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


/*
作者：娜宝1993
链接：https://www.nowcoder.com/questionTerminal/8c82a5b80378478f9484d87d1c5f12a4
来源：牛客网
*/
class Solution {
public:
    int jumpFloor(int number) {
        if(number==0){
            return 0;
        }
        if(number==1){
            return 1;
        }
        if(number==2){
            return 2;
        }
        int n1=1;
        int n2=2;
        int total=0;
        for(int i=2;i<number;i++){
            total=n1+n2;
            n1=n2;
            n2=total;  
        }
        return total;
        
    }
};
