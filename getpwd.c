/**通过调用系统接口获取当前文件路径**/
#include<stddio.h>
#include<stdlib.h>
#include<unistd.h>

int main(void)
{
	char buf[1024];
	char *cwd=getcwd(buf,sizeof(buf));
	if(NULL == cwd)
	{
		printf("Get current directory is fail\n");
		exit(-1);
	}else{
		printf("This directory is %d\n",cwd);
		
	}
	return 0;
}
