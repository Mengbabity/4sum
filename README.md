# 4sum

给定一个数组，找出所有4个数的组合，其和等于target。

思路：与3sum类似，两个for循环，每进一层循环，target减去对应数值即可。
     关键在于去重。while循环的指针，若其下一位等于已放入vector中的第3/4位，说明重复，跳过该数（头尾均相等可跳过，因为必定重复；不相等也可跳过，
     因为和定不等于target）；两个for循环可以直接跳过重复数字。
     
#4sum II
事实证明，写过的题目都忘记啦

这次是给定4个数组，判断有几种和为0的可能。

思路:设一个map，首先在AB两层循环中，令和为下标，次数为大小进行存储。
     在CD两层循环中，设置auto it，令其等于map.find(0-c-d)；
     若存在这样的数，就加上it->second；
