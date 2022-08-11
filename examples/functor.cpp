/*
 * @Author: zhanghao
 * @Date: 2022-08-11 16:56:36
 * @LastEditTime: 2022-08-11 16:56:36
 * @FilePath: /hao_ceres-solver/examples/functor.cpp
 * @Description: 
 */
//仿函数的示例代码
#include <iostream>
using namespace std;
class Myclass
{
public:
    Myclass(int x) : _x(x){};
    int operator()(const int n) const
    {
        return n * _x;
    }

private:
    int _x;
};

int main()
{
    Myclass Obj1(5);
    cout << Obj1(3) << endl;
    system("pause");
    return 0;
}