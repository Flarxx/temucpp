#include <iostream>
#include "unistd.h"
#define GetCurrentDir getcwd
#define cd chdir

using namespace std;

std::string GetCurrentWorkingDir( void ) {
  char buff[FILENAME_MAX];
  GetCurrentDir( buff, FILENAME_MAX );
  std::string current_working_dir(buff);
  return current_working_dir;
}

int main()
{
    while (0==0){
        string str;
        cout<<"\x1b[32m";
        cout<<GetCurrentWorkingDir();
        cout<<"\x1b[33m"<<" $->"<<"\x1b[39m";
        getline(cin, str);
        if(str[0]=='c'&&str[1]=='d')
            str.erase(0, 3);
            cd(str.c_str());
        system(str.c_str());
    }
    return 0;
}
