<!--
 * @Author: zhanghao
 * @Date: 2022-08-11 14:14:39
 * @LastEditTime: 2022-08-11 16:28:16
 * @FilePath: /hao_ceres-solver/README.md
 * @Description: ceres-solver
-->
# hao_ceres-solver
my ceres-solver learning

- cost function  <-----> functor
- build youhua question
- paramter and solver  -----> Solve

version
`sudo gedit /usr/local/include/ceres/version.h `
## 安装
```
sudo apt-get install cmake
sudo apt-get install libgoogle-glog-dev libgflags-dev
sudo apt-get install libatlas-base-dev
sudo apt-get install libeigen3-dev
sudo apt-get install libsuitesparse-dev
```
cmakelists
```
set(Ceres_DIR "/home/hao007/haolib/ceres-solver/ceres-solver/install/lib/cmake/Ceres")
find_package(Ceres 2.0.0 REQUIRED)
include_directories(${CERES_INCLUDE_DIRS})
```


```cpp
struct CostFunctor{
    // template function 模板函数，泛化函数类型
    template <typename T>
    //重载（），仿函数；传入待优化变量列表和承接残差的变量列表
    bool operator()(const T* const x, T* residual) const{ //不改变成员变量
        residual[0] = T(0.5)*(T(10.0)-x[0])-(T(10.0)-x[0]); //1/2(10-x)^2
        return true;
    }
};
int main(int argc, char **argv)
{
    double initial_x = 5.0;
    double x = initial_x;
    
}
```