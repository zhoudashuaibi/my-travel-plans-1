#include "iostream"
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;
int main()
{
    system("color 94"); 
  cout<<endl;
  cout<<"**************************小学数学四则运算试题****************************"<<endl;
  cout<<endl;
  cout<<endl;
Again:
  double Ques1=1;
  int Ques01;
  int Ques2=1;
  int Ques3=100;
  char Ques4;
  int Ques5=0;
  char Ques6='n';
  char Ques7='n';
  double ans=0;
  int right=0;
  cout<<"                      一.请输入题目数量：";
  cin>>Ques1;
  Ques01=floor(Ques1);
  //    cout<<"请输入每行打印题目数（1-5）：";
  //    cin>>Ques2;
  cout<<"                      二.请输入算式中数值的最大值：";
  cin>>Ques3;
cout<<"`````````````````````````````````````````````````````````````````````````"<<endl;
      cout<<"开始答题："<<endl;
      srand(time(NULL));
          while(1)
          {
              if(Ques1<1)
              {
                  cout<<"输入有误，请重新输入题目数量:";
                  cin>>Ques1;
                  Ques01=floor(Ques1);
              }
              else
              {
                  for(int j=0; j<Ques01; j++)
                  {
                      if(j!=0&&j%Ques2==0)
                      {
                          for(int i=0; i<Ques5; i++)
                          {
                              cout<<endl;
                          }
                      }
                      int num1=rand()%Ques3;
                      int  num2=rand()%Ques3;
                      int sign=rand()%4;
                      switch(sign)
                      {
                      case 0:
                          cout<<j+1<<":"<<" "<<num1<<"+"<<num2<<"="<<"  ";
                          cin>>ans;
                          if(ans==num1+num2)
                          {
                              cout<<"正确"<<endl;
                              right++;
                          }
                          else
                          {
                              cout<<"答错了！"<<endl;
                              cout<<"正确答案是："<<num1+num2<<endl;
                          }
                          break;
                      case 1:
                          if(Ques7=='y')
                          {
                              cout<<j+1<<":"<<" "<<num1<<"-"<<num2<<"="<<"  ";
                              cin>>ans;
                              if(ans==num1-num2)                             {
                                  cout<<"正确"<<endl;
                                  right++;
                              }
                              else
                              {
                                  cout<<"答错了！"<<endl;
                                  cout<<"正确答案是："<<num1-num2<<endl;
                              }
                          }
                          else
                          {
                              if(num1>num2)
                              {
                                  cout<<j+1<<":"<<" "<<num1<<"-"<<num2<<"="<<"  ";
                                  cin>>ans;
                                  if(ans==num1-num2)
                                  {
                                      cout<<"正确"<<endl;
                                      right++;
                                  }
                                  else
                                  {
                                      cout<<"答错了！"<<endl;
                                      cout<<"正确答案是："<<num1-num2<<endl;
                                  }
                              }
                              else
                              {
                                  cout<<j+1<<":"<<" "<<num2<<"-"<<num1<<"="<<"  ";
                                  cin>>ans;
                                  if(ans==num2-num1)
                                  {
                                      cout<<"正确"<<endl;
                                      right++;
                                  }
                                  else
                                  {
                                      cout<<"答错了！"<<endl;
                                      cout<<"正确答案是："<<num2-num1<<endl;
                                  }
                              }
                          }
                          break;
                      case 2:
                          cout<<j+1<<":"<<" "<<num1<<"*"<<num2<<"="<<"  ";
                          cin>>ans;
                          if(ans==num1*num2)
                          {
                              cout<<"正确"<<endl;
                              right++;
                          }
                          else
                          {
                              cout<<"答错了！"<<endl;
                              cout<<"正确答案是："<<num1*num2<<endl;
                          }
                          break;
                      case 3:
                          if(num2!=0)
                          {
                              int t=rand()%30;
                              int num3=num1*t;
                              cout<<j+1<<":"<<" "<<num3<<"/"<<num1<<"="<<"  ";
                              cin>>ans;
                              if(ans==(float)num3/(float)num1)
                              {
                                  cout<<"正确"<<endl;
                                  right++;
                              }
                              else
                              {
                                  cout<<"答错了！"<<endl;
                                  cout<<"正确答案是："<<(float)num3/(float)num1<<endl;
                              }
                          }
                          else
                          {
                              j--;
                          }
                          break;
                      }
                  }
                  break;
              }
          }
          cout<<"共答对"<<right<<"道题；"<<"答错"<<Ques01-right<<"道题。";
          cout<<"继续努力！"<<endl;
  cout<<endl;
  while(1)
  {
      cout<<"还需要继续出题还是退出？(y：继续出题；n：退出)";
      cin>>Ques6;
      if(Ques6=='y')
      {
          goto Again;
      }
      if(Ques6=='n')
      {
          goto Exit;
      }
      else
      {
          cout<<"输入有误，请重新输入：";
      }
  }
Exit:
  return 0;
}
