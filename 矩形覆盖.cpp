/*
题目描述
我们可以用2*1的小矩形横着或者竖着去覆盖更大的矩形。请问用n个2*1的小矩形无重叠地覆盖一个2*n的大矩形，总共有多少种方法？
*/
class Solution {
public:
    int rectCover(int number) 
    {
        int n1=1,n2=1,n3=0;
		if(number==0)
			return 0;
		if(number==1)
			return 1;
		if(number>=2)
		{
			while(--number)
			{
				n3=n1+n2;
				n1=n2;
				n2=n3;
			}
			return n3;
		}
        return 0;
    }
};
/*
链接：https://www.nowcoder.com/questionTerminal/72a5a919508a4251859fb2cfb987a0e6
来源：牛客网
*/
public class Solution {
    public int RectCover(int target) {
      if(target  <= 1){
            return 1;
        }
        if(target*2 == 2){
            return 1;
        }else if(target*2 == 4){
            return 2;
        }else{
            return RectCover((target-1))+RectCover(target-2);
        }
    }
}
