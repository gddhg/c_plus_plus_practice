#include<iostream>
#include<fstream>

int main(int argc, char *argv[])
{
    int rv = 0;
    std::ifstream fileIn;
    std::ofstream fileOut;

    if (argc != 3) {
	std::cerr << "usage: fileCopy srcFile dstFile." << std::endl;
	return -1;
    }
    
    fileIn.open(argv[1]);
    fileOut.open(argv[2]);
    if (!fileIn || !fileOut) {
	std::cerr << "打开文件失败" << std::endl;
	return -1;
    }
    
    while (!fileIn.eof()) {
   	char str[1024];
	fileIn.getline(str, sizeof(str), '\0');
	fileOut << str;
    }
    fileIn.close();
    fileOut.close();

    return rv;
}
