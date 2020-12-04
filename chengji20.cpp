#include <iostream>
#include <fstream>
//#include <cstdlib>
using namespace std;
int main()
{
int a[5][4]={0};    
int  i, j;
 ifstream  infile; 
 ofstream  outfile;

 infile.open("cj1.txt"); 
 
 //从文件读入数据 
 for(i=0; i<4; i++)      // i 控制行数 
    {    
	for(j=0; j<3; j++) // j 控制列数 
        infile >> a[i][j];   //  文件数据读入到内存a[i][j] 
     } 
for(i=0; i<4; i++)      /*  i 控制行数 */
    {    for(j=0; j<3; j++) /* j 控制列数 */
                a [i][3] +=  a[i][j]; 
		 a [i][3]  /= 3;     
     } 
for(j=0;j<4;j++)//控制列数 
{
	for(i=0;i<4;i++)//控制行数 
		a[4][j]+=a[i][j];//计算学生该课程总分 
	a[4][j]/=4;//课程求平均分 
}
 //在显示屏上输出该成绩表 
// for(i=0; i<5; i++)      
//    {    for(j=0; j<4; j++) 
//              cout << a[i][j]<<" ";  
//		cout<<endl;   
//     }
 
 //将成绩表输出到文件 
 outfile.open("cj2.txt");
 for(i=0; i<5; i++)      
    {    for(j=0; j<4; j++) 
              outfile << a[i][j]<<" ";  
		outfile<<endl;   
     }
 

infile.close();
outfile.close(); 
 
  return 0;
}

