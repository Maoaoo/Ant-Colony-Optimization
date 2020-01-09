/*编译环境：DEV-C++  GCC  4.9.2*/
/*                                                  !!ATTENTION!!
请在程序根目录创建 database.txt 文件
并将如下数据复制进文件
作为默认迷宫

-1.00 -1.00 -1.00 -1.00 -1.00 -1.00 -1.00 -1.00 -1.00 -1.00 -1.00 -1.00 -1.00 -1.00 -1.00 -1.00 -1.00 -1.00 -1.00 -1.00 -1.00 -1.00
-1.00 -3.00 -1.00 -1.00 0.00 -1.00 -1.00 0.00 -1.00 0.00 -1.00 0.00 0.00 0.00 0.00 -1.00 0.00 0.00 0.00 -1.00 0.00 -1.00
-1.00 0.00 -1.00 -1.00 0.00 -1.00 0.00 0.00 0.00 0.00 -1.00 -1.00 -1.00 -1.00 0.00 -1.00 0.00 -1.00 0.00 0.00 0.00 -1.00
-1.00 0.00 0.00 0.00 0.00 -1.00 -1.00 0.00 -1.00 -1.00 -1.00 -1.00 0.00 -1.00 0.00 -1.00 0.00 -1.00 -1.00 -1.00 -1.00 -1.00
-1.00 -1.00 0.00 -1.00 0.00 -1.00 -1.00 0.00 -1.00 0.00 -1.00 -1.00 0.00 -1.00 0.00 -1.00 0.00 0.00 0.00 0.00 -1.00 -1.00
-1.00 -1.00 0.00 -1.00 0.00 0.00 0.00 0.00 0.00 0.00 0.00 -1.00 0.00 -1.00 0.00 -1.00 0.00 -1.00 -1.00 0.00 -1.00 -1.00
-1.00 0.00 -1.00 -1.00 0.00 -1.00 -1.00 0.00 -1.00 -1.00 -1.00 0.00 0.00 0.00 0.00 0.00 0.00 -1.00 0.00 0.00 -1.00 -1.00
-1.00 0.00 0.00 0.00 0.00 0.00 -1.00 0.00 -1.00 0.00 -1.00 0.00 -1.00 -1.00 0.00 -1.00 -1.00 -1.00 -1.00 -1.00 -1.00 -1.00
-1.00 -1.00 -1.00 -1.00 -1.00 0.00 -1.00 0.00 -1.00 0.00 -1.00 0.00 0.00 -1.00 0.00 0.00 -1.00 -1.00 0.00 0.00 0.00 -1.00
-1.00 0.00 0.00 0.00 -1.00 0.00 -1.00 0.00 0.00 0.00 0.00 0.00 -1.00 0.00 0.00 -1.00 -1.00 0.00 0.00 -1.00 0.00 -1.00
-1.00 0.00 -1.00 0.00 -1.00 0.00 -1.00 -1.00 -1.00 -1.00 -1.00 0.00 -1.00 0.00 -1.00 -1.00 0.00 0.00 -1.00 -1.00 0.00 -1.00
-1.00 0.00 -1.00 0.00 0.00 0.00 0.00 0.00 0.00 -1.00 -1.00 0.00 -1.00 0.00 -1.00 0.00 0.00 -1.00 0.00 -1.00 0.00 -1.00
-1.00 -1.00 -1.00 -1.00 -1.00 -1.00 0.00 -1.00 0.00 -1.00 0.00 -1.00 -1.00 0.00 -1.00 0.00 -1.00 -1.00 0.00 -1.00 0.00 -1.00
-1.00 0.00 0.00 0.00 -1.00 0.00 0.00 -1.00 -1.00 -1.00 0.00 0.00 0.00 0.00 0.00 0.00 -1.00 -1.00 0.00 0.00 0.00 -1.00
-1.00 0.00 -1.00 0.00 -1.00 -1.00 -1.00 -1.00 0.00 -1.00 0.00 -1.00 -1.00 -1.00 -1.00 0.00 0.00 0.00 -1.00 -1.00 0.00 -1.00
-1.00 0.00 -1.00 0.00 0.00 0.00 0.00 0.00 0.00 0.00 0.00 0.00 -1.00 -1.00 0.00 0.00 -1.00 0.00 0.00 -1.00 0.00 -1.00
-1.00 0.00 -1.00 0.00 -1.00 0.00 -1.00 -1.00 -1.00 -1.00 -1.00 0.00 -1.00 -1.00 -1.00 -1.00 0.00 -1.00 0.00 -1.00 0.00 -1.00
-1.00 0.00 -1.00 0.00 -1.00 0.00 0.00 0.00 0.00 -1.00 0.00 0.00 -1.00 0.00 0.00 0.00 0.00 0.00 0.00 0.00 0.00 -1.00
-1.00 0.00 -1.00 0.00 -1.00 0.00 -1.00 -1.00 0.00 -1.00 0.00 -1.00 -1.00 0.00 -1.00 -1.00 -1.00 -1.00 0.00 -1.00 0.00 -1.00
-1.00 0.00 -1.00 0.00 -1.00 0.00 0.00 -1.00 0.00 -1.00 0.00 0.00 -1.00 0.00 -1.00 0.00 -1.00 -1.00 0.00 -1.00 0.00 -1.00
-1.00 0.00 -1.00 0.00 -1.00 -1.00 -1.00 -1.00 0.00 -1.00 -1.00 0.00 0.00 0.00 -1.00 0.00 0.00 0.00 0.00 -1.00 -2.00 -1.00
-1.00 -1.00 -1.00 -1.00 -1.00 -1.00 -1.00 -1.00 -1.00 -1.00 -1.00 -1.00 -1.00 -1.00 -1.00 -1.00 -1.00 -1.00 -1.00 -1.00 -1.00 -1.00

*/
#include<iostream>
#include<cstdlib>
#include<windows.h>
#include<time.h>
#include<conio.h>

#define MAXSIZE 22                                                                      //迷宫尺寸
#define ANT_COUNT 10                                                                    //蚂蚁数量
#define MAXSTEP 500                                                                     //单只蚂蚁可以走的最大路程
#define HORMONE_LEVELS 5                                                                //初始信息素水平
#define INTERVAL_RETURN 5                                                               //回溯动画的速度，数值越小速度越快

using namespace std;
typedef struct pos {                                 									//坐标轴
	int x;
	int y;
	bool operator==(const pos a)const {													//重载==运算符
		return this->x == a.x && this->y == a.y;
	}
	bool operator!=(const pos a)const {													//重载！=运算符
		return this->x != a.x || this->y != a.y;										//此处曾写为 return this->x != a.x && this->y != a.y; 浪费DEBUG时间共十几个小时
	}
	pos operator+(const pos a)const {													//重载+运算符 ,用于坐标相加
		pos tmp;
		tmp.x = this->x + a.x;
		tmp.y = this->y + a.y;
		return tmp;
	}
	pos operator-(const pos a)const {													//重载-运算符 ,用于坐标相减
		pos tmp;
		tmp.x = this->x - a.x;
		tmp.y = this->y - a.y;
		return tmp;
	}
	void operator=(const pos a) {														//重载=运算符，用于坐标赋值
		this->x = a.x;
		this->y = a.y;
	}
}POS;

class Stack {                                   										//动态大小的栈
private:
	int Maxsize;																		//栈最大容量
	int ExpandStep;																		//扩大栈的步长

public:
	Stack(int);																			//构造函数，需要提供起始栈大小
	~Stack();																			//析构函数
	POS* Coord;																			//坐标类型的栈
	int Top;																			//返回栈顶下标
	void Push(POS);																		//入栈，POS即POS类型
	void Expand();																		//扩大栈容量
	bool IsEmpty();																		//栈是否为空，空则返回1，否则0
	POS Pop();																			//出栈 返回POS
	POS GetTop();																		//获取栈顶 返回POS
};

class Maze {
private:
	void ReadMaze();                            										//从文件中读取迷宫
	bool IsShowedFirst;                         										//是否已经打印出障碍物，是返回1，否返回0
public:
	Maze();                                     										//读取迷宫时的构造函数
	Maze(bool IsCommission);                    										//建造空迷宫的构造函数  需提供0或1任意数字
	void ReLoad();                              										//清除迷宫内信息
	void Volatile();																	//信息素挥发函数
	void Show(POS);    			                										//从点POS为左上角顶点可视化迷宫
	int FeasibleBlock;                          										//返回可走的区块数
	double data[MAXSIZE][MAXSIZE];														//储存迷宫及其信息素'-1'-不可通行；数值越大信息素浓度越大
	double TotalHormone;                        										//总信息素水平
	bool HaveAnt[MAXSIZE][MAXSIZE];      	    										//用来标明某点是否有蚂蚁
	friend class Ant;                           										//申明Ant为Maze的友元类，以便蚂蚁访问迷宫内信息
};
class Ant {                                     										//蚂蚁
private:
	Stack Path;                                 										//用栈储存路径
	double Hormone;                             										//信息素水平
public:
	POS CurPosition;                            										//当前位置
	Ant();                                      										//构造函数
	bool IsBlocked(Maze &m);                    										//判断此时蚂蚁是否被困住，需提供参数：友元Maze
	void ScatterHormone(Maze &m);               										//在没有找到食物的情况下散播信息素，需提供参数：友元Maze
	void ScatterHormoneExcitedly(Maze &m,bool mode);//找到食物的情况下散播信息素，mode：0--LiveView模式   1--Compute模式
	double GetHormone(POS, Maze &m);            										//获得迷宫m里位置为POS的信息素水平
	void Move(bool mode,Maze &m);               										//决定并移动至下一个点，mode：0--LiveView模式   1--Compute模式
	void Show(class Maze&);                     										//可视化蚂蚁，需要传入参数友元Maze
	void ReDo();                                										//当移动超过一定步数时，使该蚂蚁回到起点
};
Stack::Stack(int step = 100) {                  										//初始大小及默认扩大步长为step=100
	Coord = new POS[step];
	Top = 0;
	Maxsize = step;
	ExpandStep = step;
}

Stack::~Stack() {                               										//释放栈
	delete Coord;
}

void Stack::Expand() {                          										//扩大栈
	int size = Maxsize + ExpandStep;
	POS* tmp = new POS[size];                   										//申请新空间
	for (int j = 0; j < Top; j++) {             										//将数据复制入新空间
		tmp[j] = Coord[j];
	}
	delete Coord;                               										//释放新空间
	Coord = tmp;
	Maxsize = size;
}

bool Stack::IsEmpty() {
	if (Top == 0)return 1;
	return 0;
}

void Stack::Push(POS x) {
	if (Top >= Maxsize)Expand();
	Coord[Top++] = x;
}

POS Stack::Pop() {
	if (IsEmpty())return POS{ -1, -1 };
	return Coord[--Top];
}

POS Stack::GetTop() {
	if (IsEmpty())return POS{ -1, -1 };
	return Coord[Top - 1];
}



static int COLOR[11]{ 240,0,224,160,32,96,48,176,192,122,208};
/*分别代表颜色:白,黑,黄,绿,灰绿,灰黄,灰淡蓝,淡蓝,红,灰,紫*/
static POS VARI[4]{ {1,0},{0,1},{0,-1},{-1,0}};    										//方向
                   /* 右    下    上     左  */
static POS STARTPOS;                                     								//起点
static POS ENDPOS;										 								//终点
static HANDLE hThis;                                     								//控制台句柄
static Maze m;                                           								//迷宫
static int INTERVAL=100;								 								//刷新间隔
static int MINSTEP=500;                                  								//最大步数
static int ARRIVE_COUNT=0;                               								//到达的蚂蚁总数
static int MINSTEP_COUNT=0;                              								//最短路总数
static double RATE=0;                                    								//收敛比率



void GotoXY(POS p) {                                     								//将光标移动到坐标为p的位置
	COORD pos;
	pos.X = p.x * 2;
	pos.Y = p.y;
	SetConsoleCursorPosition(hThis, pos);
}

Maze::Maze() {                                          								//构造函数（默认不提供参数）
	FeasibleBlock=0;
	ReadMaze();
	IsShowedFirst=0;
	TotalHormone=0;
}
void Maze::ReLoad(){                                    								//重置Maze函数
	for(int i=0;i<MAXSIZE;i++){
		for(int j=0;j<MAXSIZE;j++){
			HaveAnt[i][j]=0;
		}
	}
	FeasibleBlock=0;
	ReadMaze();
	IsShowedFirst=0;
	TotalHormone=0;
}
Maze::Maze(bool IsCommission){                         									//传入 0 或 1 ，即开辟一个空的自定义迷宫
	if(IsCommission){
		for(int i=0;i<MAXSIZE;i++){
			for(int j=0;j<MAXSIZE;j++){
				HaveAnt[i][j]=0;
				if(i==1&&j==1){
					data[i][j]=-3;                          							//-3：起点
				}
				if(i==MAXSIZE-2&&j==MAXSIZE-2){
					data[i][j]=-2;                          							//-2：终点
				}
				if(i==0||j==0||i==MAXSIZE-1||j==MAXSIZE-1){
					data[i][j]=-1;                          							//-1：障碍
				}
				else{
					data[i][j]=0;                           							//>=0：可通行区块
				}
			}
		}
	}
}
void Maze::ReadMaze() {
	FILE* f = fopen("database.txt", "r");                   							//从文件里读入迷宫数据
	extern POS STARTPOS;
	extern POS ENDPOS;
	for (int i = 0; i < MAXSIZE; i++) {
		for (int j = 0; j < MAXSIZE; j++) {
			fscanf(f, "%lf", &data[i][j]);
			if(data[i][j] == -1){
				FeasibleBlock++;
			}
			if (data[i][j] == -3) {
				STARTPOS = POS{ j,i };
				data[i][j] = -1;
			}
			else if (data[i][j] == -2) {
				ENDPOS = POS{ j,i };
				data[i][j] = -1;
			}
		}
	}
}

void Maze::Show(POS p) {
	void GotoXY(POS);
	extern int COLOR[11];
	extern POS ENDPOS, STARTPOS;
	GotoXY(p);
	FeasibleBlock=0;
	for (int i = 0; i < MAXSIZE; i++) {
		for (int j = 0; j < MAXSIZE; j++) {
			if (data[i][j] == -1
				&& POS{ j,i } != ENDPOS
				&& POS{ j,i } != STARTPOS
				&& IsShowedFirst==0)
			{ //不可穿透障碍，白色
				SetConsoleTextAttribute(hThis, COLOR[0]);
				cout << "  ";
			}
			else if (POS{ j,i } == ENDPOS) {                  								//终点，红色
				SetConsoleTextAttribute(hThis, COLOR[8]);
				cout << "  ";
			}
			else if (data[i][j] == -4) {                    								//禁忌信息素，灰色
				SetConsoleTextAttribute(hThis, COLOR[9]);
				cout << "  ";
			}
			else {
				FeasibleBlock++;
				if (POS{ j,i } == STARTPOS) {
					cout << "()"; continue;
				}
				if(HaveAnt[i][j]==1){
					SetConsoleTextAttribute(hThis, COLOR[7]);
					cout << "  ";
				}
				else{
					SetConsoleTextAttribute(hThis, COLOR[int(data[i][j] + 1) + 2 < 6 ? int(data[i][j] + 1) : 6]);
																							//信息素浓度向上取整
					if(data[i][j]>=0.2&&data[i][j]<1)SetConsoleTextAttribute(hThis,COLOR[2]);
					else if(data[i][j]>=1&&data[i][j]<2.5)SetConsoleTextAttribute(hThis,COLOR[3]);
					else if(data[i][j]>=2.5&&data[i][j]<4)SetConsoleTextAttribute(hThis,COLOR[4]);
					else if(data[i][j]>=4)SetConsoleTextAttribute(hThis,COLOR[6]);
					cout << "  ";
				}
			}
		}
		p.y++;
		GotoXY(p);
	}
	IsShowedFirst=1;
}
void Maze::Volatile() {
	//double delta;
	/*挥发值delta是由全局的总信息素水平决定的*/
	double delta=TotalHormone*ANT_COUNT*0.0048/FeasibleBlock;                                                   //参数二
	for (int i = 0; i < MAXSIZE; i++) {
		for (int j = 0; j < MAXSIZE; j++) {
			if (data[i][j] >= 0) {
				data[i][j] =data[i][j] - delta < 0 ? 0 : data[i][j]-delta;
				TotalHormone-=delta;
			}
		}
	}
}

Ant::Ant() {
	CurPosition = STARTPOS;
	Hormone=HORMONE_LEVELS;
}

void Ant::Show(Maze &m) {
	m.HaveAnt[CurPosition.y][CurPosition.x]=1;
}

double Ant::GetHormone(POS p, Maze &m) {
	return m.data[p.y][p.x];
}

void Ant::ScatterHormone(Maze &m) {
	double delta;
	/*挥洒的信息素值由蚂蚁走的距离决定，离家距离越长，挥洒越少；找到食物后离食物越远，挥洒越少*/
	delta=Hormone/(Path.Top+1);
	if (m.data[CurPosition.y][CurPosition.x] < 0)return;
	m.data[CurPosition.y][CurPosition.x] += delta;
	m.TotalHormone+=delta;
}

void Ant::ScatterHormoneExcitedly(Maze &m,bool mode) {
	extern void GotoXY(POS);
	ARRIVE_COUNT++;
	int count=1;                                              								//回溯的步数
	/*一旦找到食物，蚂蚁播撒的信息素水平激增到 蚂蚁种群数*基础信息素水平 */
	Hormone=ANT_COUNT*HORMONE_LEVELS*0.5;                                                                   	//参数一
	if(Path.Top+1<MINSTEP){
		MINSTEP_COUNT=1;
		MINSTEP=Path.Top+1;
	}
	else if(Path.Top+1==MINSTEP)MINSTEP_COUNT++;
	while (!Path.IsEmpty()) {
		double delta=Hormone/(count*2.4);                                                  //蚂蚁的信息素随距离增加而成反比例减少,参数三
  		m.data[CurPosition.y][CurPosition.x]+=delta;
		m.TotalHormone+=delta/1.2;
		if(!mode){                                                   						//若为计算模式
			SetConsoleTextAttribute(hThis, COLOR[10]);
			GotoXY(POS{CurPosition.x+5,CurPosition.y+5});
			cout<<"  ";
			Sleep(INTERVAL_RETURN);
		}

		CurPosition = Path.Pop();
		count++;
	}
	Hormone=HORMONE_LEVELS;
	RATE=MINSTEP_COUNT*1.0/ARRIVE_COUNT;
	SetConsoleTextAttribute(hThis,COLOR[1]+15);
	GotoXY(POS{30,6});
	cout<<"                       ";
	GotoXY(POS{30,6});
	cout<<"最短路长度:"<<MINSTEP;
	GotoXY(POS{30,7});
	cout<<"                       ";
	GotoXY(POS{30,7});
	cout<<"到达的数量:"<<ARRIVE_COUNT;
	GotoXY(POS{30,8});
	cout<<"                       ";
	GotoXY(POS{30,8});
	cout<<"最短路数量:"<<MINSTEP_COUNT;
	GotoXY(POS{30,9});
	cout<<"                       ";
	GotoXY(POS{30,9});
	cout<<"收敛比率:  "<<RATE*100<<"%";
	//Hormone=HORMONE_LEVELS;
}

bool Ant::IsBlocked(Maze &m) {
	if (Path.IsEmpty())return 0;															//若在起点，则不可能被阻挡
	for (int i = 0; i < 4; i++) {
		if (GetHormone(CurPosition + VARI[i], m) != -1										//周围为障碍
			&& GetHormone(CurPosition + VARI[i], m) != -4									//已经被前面的蚂蚁标记为禁忌
			&& Path.GetTop() != (CurPosition + VARI[i])										//来路
		   )return 0;
		if(CurPosition + VARI[i]==STARTPOS){ //若为起点则重置
			ReDo();
			return 0;
		}
		if(CurPosition + VARI[i]==ENDPOS){
            return 0;
		}
	}
	return 1;
}
void Ant::ReDo(){
	CurPosition = STARTPOS;
	Hormone/=1.5;                         													//随着蚂蚁走的距离加长衰减信息素水平，降低话语权
	while(!Path.IsEmpty())Path.Pop();
}
void Ant::Move(bool mode,Maze &m) {
	if(Path.Top>=MAXSTEP || m.data[CurPosition.y][CurPosition.x]==-4)ReDo();            	//若超过了步数上或陷入禁忌信息素区块则重置
	ScatterHormone(m);
	if(IsBlocked(m)){
		while(IsBlocked(m)){
			m.data[CurPosition.y][CurPosition.x] = -4;
			m.FeasibleBlock--;
			CurPosition =Path.Pop();
		}                                 													//若进入死路，则退出，并标记死路进口为禁忌
	}

	double basic;
	double x[4], sum = 0, range[4];
	int ABLE[4]={-1};                                               						//用来储存range到x下标的映射关系
	int count = 0, index = 0, pos = 0;

	for (int i = 0; i < 4; i++) {
		x[i] = GetHormone(CurPosition + VARI[i], m);                     					//获得四个方位的信息素信息
		if (CurPosition + VARI[i]== ENDPOS) {                            					//若在四个方位中找到终点，则直接爬向终点
			m.HaveAnt[CurPosition.y][CurPosition.x]=0;
			Path.Push(ENDPOS);
			ScatterHormoneExcitedly(m,mode);                             					//回溯路线，并播撒信息素
			return;
		}
		if (x[i] >= 0 && CurPosition+VARI[i]!=Path.GetTop()) {   							//若下一点可行
			sum += x[i];
			range[count] = x[i];
			ABLE[count]=i;                                          						//ABLE数组储存了range下标为count的元素的x数组里的原下标
			count++;
		}
	}

	basic=0.15;                       														//此式子的目的是为了保证在信息素含量低的情况下的随机性
	sum+=count*basic;
	for(int i=0;i<count;i++){
		range[i]=range[i]+basic;
	}

	for (int i = 0; i < count; i++) {
		range[i] = range[i] / sum + (i == 0 ? 0 : range[i - 1]);        					//此处i-1曾写为i，耗费DEBUG时间若干小时
	}

	double random;
	random = (rand() / double(RAND_MAX));                   								//此处曾未加double()，耗费DEBUG时间若干小时
																							//此处曾经写为 *sum，浪费DEBUG时间若干小时

	for (index = 0; index < count; index++) {                       						//轮盘赌的方式决定下一个方位
		if (index == 0) {
			if (random <= range[0])break;
		}
		else if (index == count - 1) {
			if (random >= range[index - 1])break;
		}
		else {
			if(random>=range[index-1]&&random<=range[index])break;
		}
	}
	/*下列注释掉的垃圾代码不删除是为了警醒自己曾在此浪费了十几个小时的DEBUG青春大好时光*/
	/*
	for (int i = 0; i < 4; i++) {
		if (index == 0)break;
		if (pos == index+1)break;															//index==0时有异常!!!!导致pos永远大于index-1
		if (x[i] >= 0 && CurPosition+VARI[i]!=Path.GetTop())pos++;    						//若不是来路区块和障碍物,则将VARI下标加一
	}
	if (index == 0) {
		for (int i = 0; i < 4; i++) {
			if (x[i] >= 0 && CurPosition + VARI[i] != Path.GetTop()) {
				pos=i;
				break;
			}
		}
	}
	*/

	Path.Push(CurPosition);
	m.HaveAnt[CurPosition.y][CurPosition.x]=0;
	CurPosition = VARI[ABLE[index]] + CurPosition;                                      	//走到下一点
}


void HideCursor(HANDLE h){                                         		 					//隐藏句柄为h的光标
	CONSOLE_CURSOR_INFO cinfo;
  	cinfo.bVisible = 0;
  	cinfo.dwSize = 1;
  	SetConsoleCursorInfo(hThis,&cinfo);
}
void LiveView(Maze &maze){                                                              	//以实时演算模式实时查看迷宫maze的演算状态
	void Clear();
	void ShowInfo(POS);
	Ant a[ANT_COUNT];
	//GotoXY(STARTPOS);
	ShowInfo(POS{5,5});
	maze.Show(POS{ 5,5 });
	for(int i=0;i<ANT_COUNT;i++){                  			 								//将蚂蚁出发的时间错开，若集中出发则会降低收敛概率
		a[i].Move(0,maze);
		for(int k=0;k<=i;k++){
			a[k].Move(0,maze);
			a[k].Show(maze);
			maze.Show(POS{ 5,5 });
		}
		//Sleep(INTERVAL/100);
	}
	while (!(ARRIVE_COUNT>=100 && RATE>=0.85)) {                                            //结束条件为到达100个以上蚂蚁且85%为最短路
		for(int i=0;i<ANT_COUNT;i++)a[i].Show(maze);
		maze.Show(POS{ 5,5 });
		GotoXY(POS{ 0,0 });
		for (int i = 0; i < ANT_COUNT; i++){
			a[i].Move(0,maze);
		}
		maze.Volatile();
		Sleep(INTERVAL);
	}
	ARRIVE_COUNT=0;
	RATE=0;
	MINSTEP_COUNT=0;
	GotoXY(POS{30,25});
	cout<<"已经完成运算，按任意键返回主界面";
	getch();
	Clear();
}
/*分别代表颜色:白,黑,黄,绿,灰绿,灰黄,灰淡蓝,淡蓝,红,灰,紫*/
void ShowInfo(POS p){                                                                   	//以p为左上角显示区块的注释信息
	p=p+POS{25,6};
	GotoXY(p);
	SetConsoleTextAttribute(hThis,COLOR[0]);
	cout<<"  ";
	SetConsoleTextAttribute(hThis,COLOR[1]+15);
	cout<<"\t\t-障碍";
	p.y++;
	GotoXY(p);
	SetConsoleTextAttribute(hThis,COLOR[0]);
	cout<<"()";
	SetConsoleTextAttribute(hThis,COLOR[1]+15);
	cout<<"\t\t-起点";
	p.y++;
	GotoXY(p);
	SetConsoleTextAttribute(hThis,COLOR[8]);
	cout<<"  ";
	SetConsoleTextAttribute(hThis,COLOR[1]+15);
	cout<<"\t\t-终点";
	p.y++;
	GotoXY(p);
	SetConsoleTextAttribute(hThis,COLOR[7]);
	cout<<"  ";
	SetConsoleTextAttribute(hThis,COLOR[1]+15);
	cout<<"\t\t-蚂蚁";
	p.y++;
	GotoXY(p);
	SetConsoleTextAttribute(hThis,COLOR[9]);
	cout<<"  ";
	SetConsoleTextAttribute(hThis,COLOR[1]+15);
	cout<<"\t\t-绝路";
	p.y++;
	GotoXY(p);
	SetConsoleTextAttribute(hThis,COLOR[2]);
	cout<<"  ";
	SetConsoleTextAttribute(hThis,COLOR[3]);
	cout<<"  ";
	SetConsoleTextAttribute(hThis,COLOR[4]);
	cout<<"  ";
	SetConsoleTextAttribute(hThis,COLOR[6]);
	cout<<"  ";
	SetConsoleTextAttribute(hThis,COLOR[1]+15);
	cout<<"\t-信息素(颜色越深，信息素浓度越大)";
}
void Compute(Maze &maze){                                                               	//以后台计算模式演算迷宫maze的解，仅显示文字状态
	void Clear();
	Ant a[ANT_COUNT];
	for(int i=0;i<ANT_COUNT;i++){                   										//将蚂蚁出发的时间错开
		a[i].Move(1,maze);
		for(int k=0;k<=i;k++){
			a[k].Move(1,maze);
		}
	}
	while (!(ARRIVE_COUNT>=100 && RATE>=0.85)) {                                            //结束条件为到达100个以上蚂蚁且85%为最短路
		for(int i=0;i<ANT_COUNT;i++)a[i].Show(maze);
		for (int i = 0; i < ANT_COUNT; i++){
			a[i].Move(1,maze);
		}
		maze.Volatile();
	}
	maze.Show(POS{5,5});
	ShowInfo(POS{5,5});
	ARRIVE_COUNT=0;
	RATE=0;
	MINSTEP_COUNT=0;
	GotoXY(POS{30,25});
	cout<<"已经完成运算，按任意键返回主界面";
	getch();
	Clear();
}
void ShowDrawGuide(){                                       								//提示自定义创建迷宫的操作
	SetConsoleTextAttribute(hThis,COLOR[7]+5);
	GotoXY(POS{30,4});
	cout<<"                       ";
	GotoXY(POS{30,5});
	cout<<"    w     -向上        ";
	GotoXY(POS{30,6});
	cout<<"    s     -向下        ";
	GotoXY(POS{30,7});
	cout<<"    a     -向右        ";
	GotoXY(POS{30,8});
	cout<<"    d     -向左        ";
	GotoXY(POS{30,9});
	cout<<"    j     -放置障碍    ";
	GotoXY(POS{30,10});
	cout<<"    k     -删除障碍    ";
	GotoXY(POS{30,11});
	cout<<"    l     -退出并计算  ";
	GotoXY(POS{30,12});
	cout<<"    b     -退出并放弃  ";
	GotoXY(POS{30,13});
	cout<<"                       ";
}
bool IsBlockAvailable(POS p,const Maze &m){                                             	//查看迷宫m中点p是否被堵住
	if(p.x==0||p.y==0||p.x==MAXSIZE-1||p.y==MAXSIZE-1||(p==POS{1,1}||(p==POS{MAXSIZE-2,MAXSIZE-2})))return 0;
	return 1;
}
void Clear(){                                                                           	//清屏函数
	GotoXY(POS{0,0});
	SetConsoleTextAttribute(hThis,COLOR[1]);
	for(int i=0;i<200;i++)cout<<"                    ";
}
int ReCheck(){                                                                          	//二次确认退出函数，返回1-取消退出，0-确认退出
	Clear();
	SetConsoleTextAttribute(hThis,COLOR[7]+4);
	GotoXY(POS{23,10});
	cout<<"****************************";
	GotoXY(POS{23,11});
	cout<<"*您真的要放弃此迷宫并退出吗*";
	GotoXY(POS{23,12});
	cout<<"*请按 a & d 来控制您的光标 *";
	GotoXY(POS{23,13});
	cout<<"****************************";
	GotoXY(POS{23,14});
	cout<<"                            ";
	GotoXY(POS{23,15});
	cout<<"*是滴我确定*";
	cout<<"    ";
	SetConsoleTextAttribute(hThis,COLOR[9]+4);
	cout<<"*我只是手滑*";
	int state=1;                                        
	char op='a';
	while(op!=' '){
		op=getch();
		if(op=='a'&&state==1){
			state=0;
			GotoXY(POS{23,15});
			SetConsoleTextAttribute(hThis,COLOR[9]+4);
			cout<<"*是滴我确定*";
			SetConsoleTextAttribute(hThis,COLOR[7]+4);
			cout<<"    *我只是手滑*";
		}
		else if(op=='d'&&state==0){
			state=1;
			GotoXY(POS{23,15});
			SetConsoleTextAttribute(hThis,COLOR[7]+4);
			cout<<"*是滴我确定*    ";
			SetConsoleTextAttribute(hThis,COLOR[9]+4);
			cout<<"*我只是手滑*";
		}
	}
	return state;
}
int ShowOption(){                                                                       	//确认自定义迷宫的演算方式返回0-实时预览，1-仅演算，2-取消
	Clear();
	SetConsoleTextAttribute(hThis,COLOR[7]+4);
	GotoXY(POS{23,10});
	cout<<"****************************";
	GotoXY(POS{23,11});
	cout<<"*请选择您对此迷宫进行的操作*";
	GotoXY(POS{23,12});
	cout<<"*请按 w & s 来控制您的光标 *";
	GotoXY(POS{23,13});
	cout<<"****************************";
	GotoXY(POS{23,15});
	cout<<"        *  仅演算  *        ";
	GotoXY(POS{23,16});
	cout<<"        *  按错了  *        ";
	SetConsoleTextAttribute(hThis,COLOR[9]+4);
	GotoXY(POS{23,14});
	cout<<"        * 实时预览 *        ";
	char op='a';
	int state=0;
	while(op!=' '){
		op=getch();
		if(op=='s' && state==0){
			state=1;
			GotoXY(POS{23,14});
			SetConsoleTextAttribute(hThis,COLOR[7]+4);
			cout<<"        * 实时预览 *        ";
			SetConsoleTextAttribute(hThis,COLOR[9]+4);
  			GotoXY(POS{23,15});
			cout<<"        *  仅演算  *        ";
			SetConsoleTextAttribute(hThis,COLOR[7]+4);
			GotoXY(POS{23,16});
			cout<<"        *  按错了  *        ";
		}
		else if(op=='s' && state==1){
			state=2;
			GotoXY(POS{23,14});
			SetConsoleTextAttribute(hThis,COLOR[7]+4);
			cout<<"        * 实时预览 *        ";
			SetConsoleTextAttribute(hThis,COLOR[7]+4);
  			GotoXY(POS{23,15});
			cout<<"        *  仅演算  *        ";
			SetConsoleTextAttribute(hThis,COLOR[9]+4);
			GotoXY(POS{23,16});
			cout<<"        *  按错了  *        ";
		}
		else if(op=='w' && state==2){
			state=1;
			GotoXY(POS{23,14});
			SetConsoleTextAttribute(hThis,COLOR[7]+4);
			cout<<"        * 实时预览 *        ";
			SetConsoleTextAttribute(hThis,COLOR[9]+4);
  			GotoXY(POS{23,15});
			cout<<"        *  仅演算  *        ";
			SetConsoleTextAttribute(hThis,COLOR[7]+4);
			GotoXY(POS{23,16});
			cout<<"        *  按错了  *        ";
		}
		else if(op=='w' && state==1){
			state=0;
			GotoXY(POS{23,15});
			cout<<"        *  仅演算  *        ";
			GotoXY(POS{23,16});
			cout<<"        *  按错了  *        ";
			SetConsoleTextAttribute(hThis,COLOR[9]+4);
			GotoXY(POS{23,14});
			cout<<"        * 实时预览 *        ";
		}
	}
	return state;
}
bool DrawMaze(){                                                                        	//画迷宫的函数，若正常返回，只返回0，用于调用时判断循环
	ShowDrawGuide();
	Maze my(1);                                   		     								//调用非默认的构造函数，得到一个空的迷宫
	POS curpos=POS{1,2},prepos=POS{1,2};                     								//当前位置,前一个位置
	my.Show(POS{0,0});
	GotoXY(curpos);
	SetConsoleTextAttribute(hThis,COLOR[9]);
	cout<<"  ";
	char op='a';
	 /* 右    下    上     左  */
 	while(op!='\\'){
		op=getch();
		int i;                                              								//方向下标
		if(op=='d')i=0;
		else if(op=='s')i=1;
		else if(op=='w')i=2;
		else if(op=='a')i=3;
		if(op!='j' && op!='k' && op!='l' && op!='b' && IsBlockAvailable(curpos+VARI[i],my)){
			prepos=curpos;
			curpos=curpos+VARI[i];
			GotoXY(prepos);
			if(my.data[prepos.y][prepos.x]==-1)
				SetConsoleTextAttribute(hThis,COLOR[0]);
			else
				SetConsoleTextAttribute(hThis,COLOR[1]);
			cout<<"  ";
			GotoXY(curpos);
			SetConsoleTextAttribute(hThis,COLOR[9]);
			cout<<"  ";
	    }
	    else if(op=='j'){
	    	my.data[curpos.y][curpos.x]=-1;
	    	my.Show(POS{0,0});
		}
		else if(op=='k'){
			my.data[curpos.y][curpos.x]=0;
			my.Show(POS{0,0});
			SetConsoleTextAttribute(hThis,COLOR[9]);
	    	GotoXY(curpos);
			cout<<"  ";
		}
		else if(op=='l'){
			int mode=ShowOption();
			if(mode==0){
				Clear();
				LiveView(my);
				return 0;
			}
			else if(mode==1){
				Clear();
				Compute(my);
				return 0;
			}
			else if(mode==2){
				Clear();
				ShowDrawGuide();
				my.Show(POS{0,0});
				SetConsoleTextAttribute(hThis,COLOR[9]);
	    		GotoXY(curpos);
				cout<<"  ";
			}
		}
		else if(op=='b'){
			int mode=ReCheck();
			if(mode==0)
				return 0;
			else{
				Clear();
				my.Show(POS{0,0});
				SetConsoleTextAttribute(hThis,COLOR[9]);
	    		GotoXY(curpos);
				cout<<"  ";
				ShowDrawGuide();
			}

		}
	}
 return 0;
}
int ShowMainInterface(){                                                                   	//显示主界面
	for(int i=0;i<30;i++){
		GotoXY(POS{8,i});
		SetConsoleTextAttribute(hThis,COLOR[7]+4);
		cout<<"\t\t\t\t\t\t\t\t\t\t\t";
	}
	GotoXY(POS{23,7});
	cout<<"****************************";
	GotoXY(POS{23,8});
	cout<<"*Maoaoo牌简单蚁群算法模拟器*";
	GotoXY(POS{23,9});
	cout<<"*请按 a & d 来控制您的光标 *";
	GotoXY(POS{23,10});
	cout<<"* 按空格键选择您想要的功能 *";
	GotoXY(POS{23,11});
	cout<<"****************************";
	SetConsoleTextAttribute(hThis,COLOR[9]+4);
	GotoXY(POS{13,19});
	cout<<"****************";
	GotoXY(POS{13,20});
	cout<<"*演算并实时查看*";
	GotoXY(POS{13,21});
	cout<<"****************";
	SetConsoleTextAttribute(hThis,COLOR[7]+4);
	GotoXY(POS{26,19});
	cout<<"****************";
	GotoXY(POS{26,20});
	cout<<"*演算后显示结果*";
	GotoXY(POS{26,21});
	cout<<"****************";
	GotoXY(POS{39,19});
	cout<<"****************";
	GotoXY(POS{39,20});
	cout<<"*自画迷宫并演算*";
	GotoXY(POS{39,21});
	cout<<"****************";
	char op='a';
	int curstate=0;
	while(op!=' '){
		op=getch();
		if(op=='a'&&curstate==1){
			curstate=0;
			SetConsoleTextAttribute(hThis,COLOR[9]+4);
			GotoXY(POS{13,19});
			cout<<"****************";
			GotoXY(POS{13,20});
			cout<<"*演算并实时查看*";
			GotoXY(POS{13,21});
			cout<<"****************";
		  	SetConsoleTextAttribute(hThis,COLOR[7]+4);
			GotoXY(POS{26,19});
			cout<<"****************";
			GotoXY(POS{26,20});
			cout<<"*演算后显示结果*";
			GotoXY(POS{26,21});
			cout<<"****************";
		}
		else if(op=='d'&&curstate==1){
			curstate=2;
			SetConsoleTextAttribute(hThis,COLOR[7]+4);
			GotoXY(POS{26,19});
			cout<<"****************";
			GotoXY(POS{26,20});
			cout<<"*演算后显示结果*";
			GotoXY(POS{26,21});
			cout<<"****************";
			SetConsoleTextAttribute(hThis,COLOR[9]+4);
			GotoXY(POS{39,19});
			cout<<"****************";
			GotoXY(POS{39,20});
			cout<<"*自画迷宫并演算*";
			GotoXY(POS{39,21});
			cout<<"****************";
		}
		else if(op=='a'&&curstate==2){
			curstate=1;
			SetConsoleTextAttribute(hThis,COLOR[9]+4);
			GotoXY(POS{26,19});
			cout<<"****************";
			GotoXY(POS{26,20});
			cout<<"*演算后显示结果*";
			GotoXY(POS{26,21});
			cout<<"****************";
			SetConsoleTextAttribute(hThis,COLOR[7]+4);
			GotoXY(POS{39,19});
			cout<<"****************";
			GotoXY(POS{39,20});
			cout<<"*自画迷宫并演算*";
			GotoXY(POS{39,21});
			cout<<"****************";
		}
		else if(op=='d'&&curstate==0){
			curstate=1;
			SetConsoleTextAttribute(hThis,COLOR[9]+4);
			GotoXY(POS{26,19});
			cout<<"****************";
			GotoXY(POS{26,20});
			cout<<"*演算后显示结果*";
			GotoXY(POS{26,21});
			cout<<"****************";
			SetConsoleTextAttribute(hThis,COLOR[7]+4);
			GotoXY(POS{13,19});
			cout<<"****************";
			GotoXY(POS{13,20});
			cout<<"*演算并实时查看*";
			GotoXY(POS{13,21});
			cout<<"****************";
		}
		else if(op==' '){
			Clear();
			return curstate;
		}
	}
}
void InitSettings(){                                                   						//初始化设置
	srand(time(0));                                         		  						//此处曾重复投放随机种子，导致随机数分布过于密集
	hThis = GetStdHandle(STD_OUTPUT_HANDLE);                         						//此窗口句柄
	HideCursor(hThis);                                                						//隐藏光标
	SetConsoleTitle("Maoaoo牌蚁群算法模拟器");                        						//设置窗口标题
}



int main() {
	InitSettings();
	int mode;
	while(1){
		mode=ShowMainInterface();
		if(mode==0){
			LiveView(m);
			m.ReLoad();
		}
		else if(mode==1){
			Compute(m);
			m.ReLoad();
		}
		else if(mode==2)while(DrawMaze());
	}
}
