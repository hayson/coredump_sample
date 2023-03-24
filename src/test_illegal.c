#include <stdio.h>
#include <string.h>

/** 
 * [buf_overflow 缓冲区溢出]
 * @author	hayson <haixing9@qq.com>
 * @date	2023-03-24 08:28
 */
void buf_overflow(){
	char data[8] = {0x0};
    strcpy(data, "hello world! hello world! hello world!hello world!hello world!hello world!");
}

/** 
 * [illegal_pointer 非法指针引用]
 * @author	hayson <haixing9@qq.com>
 * @date	2023-03-24 08:28
 * @param                     [description]
 */
void illegal_pointer(){
	char *data = NULL;
	strcpy(data, "hello world! hello world! hello world!hello world!hello world!hello world!");
}

int main(int argc, char** argv){

	int input = 0;
	if(argc == 2)
		input = atoi(argv[1]);
	if(input)
		buf_overflow();
	else
		illegal_pointer();
	
    return 0;
}