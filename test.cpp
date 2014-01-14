#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>
#include <errno.h>
#include <assert.h>

#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <algorithm>
#include <string>

#include <unistd.h>

using namespace std;

int main(int argc, char** argv)
{
	char *ptr;
	char buff[1024] = {0};
	int ret = read(10, buff, sizeof(buff));
	assert(ret < 0);
	ptr = strerror_r(errno, buff, sizeof(buff));
	//cout << errno << endl;
	//cout << strerror(errno);
	cout << ret << endl;
	cout << ptr << endl;
	//perror("read");

	return 0;
}
