#include <stdio.h>

#if !defined(__unix__) && !defined(__unix)
#include <windows.h>
#endif


void load_pe_file(char* file_name){
	printf("> load %s \n", file_name);
	// 分析dos头
	// 分析标准pe头
	// 分析扩展pe头
	// 分析节表
}

int main(int argc, char *argv[])
{
	// count of argv
	int i;
	char* inject_file;
	if (argc <= 1){
		printf("usage: MzaddHorse [file] \n\n");
	}else{
		inject_file = argv[1];    // get file name
		printf("> inject horse to %s \n", inject_file);
	}

	// 解析pe文件
	load_pe_file(inject_file);

	return 0;
}