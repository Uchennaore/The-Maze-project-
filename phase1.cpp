//#include<iostream>
//#include<windows.h>
//#include<conio.h>
//using namespace std;
//
//int maxtrial=0;
//char maze[23][20]=
//	{
// {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' '},
// {' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ','#'},
// {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ','#'},
// {'#',' ',' ','#',' ','#','#','#','#','#','#','#','#','#','#',' ','#',' ',' ','#'},
// {'#',' ',' ','#',' ','#',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ',' ','#'},
// {'#',' ','#','#',' ','#',' ','#','#','#','#','#','#','#','#',' ','#',' ',' ',' '},
// {'#',' ','#',' ',' ','#',' ','#',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#','#'},
// {'#',' ','#',' ',' ','#',' ','#','#','#','#','#',' ',' ',' ',' ','#',' ','#',' '},
// {'#',' ','#','#','#','#',' ','#','#',' ',' ','#',' ',' ',' ',' ','#',' ','#',' '},
// {'#',' ',' ',' ',' ',' ',' ','#','#',' ',' ','#',' ',' ',' ',' ','#',' ','#',' '},
// {'#','#','#','#','#','#','#','#','#',' ','#','#',' ',' ',' ',' ','#',' ','#',' '},
// {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' '},
// {'#','#','#','#','#','#','#','#',' ','#','#','#','#','#','#',' ','#',' ','#',' '},
// {'#',' ','#','#',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ','#',' ','#',' '},
// {'#',' ','#','#',' ','#','#','#','#','#','#',' ','#',' ','#',' ','#',' ','#',' '},
// {'#',' ','#','#',' ','#','#','#','#','#','#',' ','#',' ','#',' ','#',' ','#',' '},
// {'#',' ',' ',' ',' ','#','#','#','#','#','#',' ','#','#','#',' ','#',' ','#',' '},
// {' ','#',' ','#',' ','#','#','#','#','#',' ',' ',' ',' ',' ',' ','#',' ','#',' '},
// {' ',' ',' ','#',' ','#',' ',' ',' ',' ',' ','#','#','#','#','#','#',' ','#',' '},
// {'#','#','#','#',' ','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ','#',' '},
// {'#','#','#','#',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' '},
// {'#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
// {'#','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}
//	};
//void printmaze(int x)
//{
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),x);
//
//    for(int i = 0; i <23; i++)
//	{
//        for(int ii = 0; ii < 20;ii++)
//		{
//            cout << maze[i][ii];
//        }
//        cout << endl;
//    }
//}
//void goLeft(int &x,int &y)
//{  if ((maze[x][y-1]==' '||maze[x][y-1]=='-'||maze[x][y-1]=='|')&& (y-1>0||y-1==0))
//	{  if (maze[x][y-1]==' ')
//	   maze[x][y-1]='-';
//	     system("CLS");
//         printmaze(9);
//	     y=y-1; 
//	}
//else
//{
//	cout<<"invalid move!";
//	maxtrial+=1;
//}
//}
//void goRight(int &x,int &y)
//{  if ((maze[x][y+1]==' ' || maze[x][y+1]=='-'|| maze[x][y+1]=='|')&& (y+1<19||y+1==19))
//         {   if (maze[x][y+1]==' ')
//			 maze[x][y+1]='-';
//		      system("CLS");
//              printmaze(9);
//			  y=y+1;
//
//         }
//    else
//	{
//	cout<<"invalid move!";
//	maxtrial+=1;
//    }
//
//}
//void goUp(int &x,int &y)
//{
//if ((maze[x-1][y]==' '||maze[x-1][y]=='|'||maze[x-1][y]=='-') && (x-1>0||x-1==0))
//          { if (maze[x-1][y]==' ')
//			  maze[x-1][y]='|';
//			   system("CLS");
//              printmaze(9);
//			  x=x-1;
//          }
//else
//{
//	cout<<"invalid move!";
//	maxtrial+=1;
//}
//}
//void goDown(int &x,int &y)
//{if ((maze[x+1][y]==' '||maze[x+1][y]=='|'||maze[x+1][y]=='-')&& (x+1==22||x+1<22))
//          { if (maze[x+1][y]==' ')
//			  maze[x+1][y]='|';
//			    system("CLS");
//                printmaze(9); 
//			  x=x+1;
//          }
//else
//{
//	cout<<"invalid move!";
//	maxtrial+=1;
//}
//}
//int main()
//{ 
//int startx=5,starty=19;
//maze[5][19]='*';
//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
//cout<<"Welcome to the popular maze game"<<endl<<endl;
//printmaze(9);
//while ((startx!=18 || starty!=0)&& maxtrial<3)
//	{
//	char move;
//	move=_getch();
//	if (move=='W'|| move=='w')
//		goUp(startx,starty);
//	else if (move=='S'|| move=='s')
//		goDown(startx,starty);
//	else if (move=='A'|| move=='a')
//		goLeft(startx,starty);
//	else if (move=='D'|| move =='d')
//		goRight(startx,starty);
//	else
//		cout<<"invalid input"<<endl;
//	
//}
//	
//if (maxtrial!=3)
//{
//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
//cout<<"congradulations,you found your way through!"<<endl;
//}
//
//else
//
//cout<<"Game over!!! loser!"<<endl;
//
//system("pause");
//return 0;
//
//}
