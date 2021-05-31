# C++自学练习 #
---------------------------

## 编译 ##
1. mkdir build
2. cd build
3. cmake ..
4. make
---------------------------

## 清除编译缓存 ##
1. cd build
2. make clean

## 删除编译生成的二进制并清除编译缓存 ##
1. cd build
2. make distclean


## 代码结构 ##
```
├── bin #编译后二进制存放位置
├── CMakeLists.txt
├── include #头文件存放位置
├── lib #链接库文件存放位置
├── mk #编译所需环境文件，脚本等
│   └── env.txt
├── Readme.md
└── src #源代码，存放联系编写的代码
    └── CMakeLists.txt
    ├── addArray
    │   ├── addArray.cpp
    │   └── CMakeLists.txt
    └── fileCopy
        ├── CMakeLists.txt
        └── fileCopy.cpp
```
