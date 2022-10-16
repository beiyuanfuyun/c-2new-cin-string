//#define _CRT_SECURE_NO_WARNINGS
// 01.new和delete
// 在C++种用来向内存申请内存空间
// new相当于malloc函数
//delete的作用相当于free函数，相互配对的
//    1.new是关键字
//       new可以是分配两种内存，一种是单个内存，一种是连续的内存
//            new只有在分配单个内存时可以同时给内存赋值
//               如果要给连续的内存同时赋值用memest赋值，赋值为0
//    2.delete也是关键字
//        delete可以是释放两种内存，一种是单个内存，一种是连续的内存
//          delete释放内存时，指针的必须时指向内存的首地址
//             释放完成后要记得给纸质呢赋值为NULL，避免产生野指针
//


//02.命名空间
//用来住址和重用代码的编译单元
// 在多人协同开发是很容易出现重名的情况，命名空间相当于一个箱子，所以要开锁用自己的东西
// 
//

//03.cin和cout
//cin相当于scanf
// cout相当于printf,但他们的本质是标识符，是一种工具，可以用而且可以适用各种类型，
// 而不是函数不是方法,printf相当于一种方法格式，需要%d啥的符合格式使用，
// 准备头文件<iostream>,要用using namespace 开放std的全部权限，或者用using std::cout 单独开放一个函数 
//


//04.string的基本使用
//是C++中的字符串，类似于c语言中的字符数组
// string是系统提供的一个类，适用的时候把它当成一个类型
//  string除了可以保存字符串，还可以使用自身函数对其进行编辑访问

//05.扩展内容
  //1.c++中的三目运算符返回的为变量，而c中返回的为常亮   
//   int a1=20,a2=30;
//     a1>a2?a1:a2=50;//c++支持
//
//   2.c++对函数的返回值更加严格，不能省略
//
//     3，c语言用const修饰的变量为伪常量，可以通过指针修改，而且不能用来定义数组，
//     而c++可以，修饰了就永远成成常量了，也可以用来定义数组
// 
//




//#include<iostream>
//#include<string>


//-----------------2----------------------------------
//namespace yi
//{
//	int a = 100;
//	void show()
//	{
//		printf("---\n");
//	}
//}
//namespace yi//再次打开空间，加入东西
//{
//	int b = 20;
//}//但是不能删东西
//namespace y = yi;//给yi取别名y
//
//
////using namespace yi;//标识符污染
//	int a = 10;
//------------------------------------------------------------------

//int main()
//{ 
	//-----------------------4------------------------
	//std::string str;
	//string 对象//string 创建的str就像一个string的百宝箱（类）(像结构体)，
	// 你以这个string为一种数据类型创立为str或者str2的变量,通过变量里面访问里面很多工具其实可能就是函数
	// 前提是你给string创立了变量再通过变量加.访问里面的数据，而std则是一个大类，没有小名时只能通过类名：：访问
	// 
	//str = "adfhjhuijk jkl jk";//可以在定义之后还可以进行初始化
	////string会自己扩容
	//str.push_back('e');//手动加入一个字符，当然要使用‘’表示为字符//str.可以对str进行很多操作的
	//str.pop_back();//删除末尾字符
	//std::cout << str << std::endl;
	//std::cout << str.at(0) << std::endl;//str.at(4)相当于str[4]的功能的，从0位开始的
	//std::cout << str[0] << std::endl;

	//判断是否相等
	//std::string str1 = "abcd";
	//std::string str2 = "abcd";
	//std::cout << (str1 == str2) << std::endl;//（）的优先级高于<<，可以自行调准
	//不能使用 ;是行不通的，str相当于一个工具，而保存字符串只是其中之一的，除非你将其中的字符给转到其它的字符中
	//const char* arr_str = str.c_str();
	//printf("%s\n", arr_str);

	//中间插入
	//str1.insert(str1.begin() + 2, 'f');//str.begin()让光标重回开头再向后动两个字符的长度，再选择加入的字符
	//中间删除
	//str1.erase(str1.begin() + 2);
	//std::cout << str1 << std::endl;

	


	//--------------------------3------------------------------------
	//int a;
	//char c;
	//char parr[10];
	////std::cin >> parr;//cin相当于一个工具就像qq语音,而scanf("%d",&d);相当于电报机,>>代表输入顺序
	////std::cout << parr << std::endl;//endl相当于结尾换行,会以空格 回车作为结束，但不会以\0作为结束
	////且可以多次输入
	////std::cin >> parr >> a >> c;
	////std::cout << parr<<std::endl << a <<std::endl<< c << std::endl;//<<可能不代表输出顺序的，好像是从做到endl进行输出
	////输出后重置
	//std::cin >> c;
	//c = 65;
	//std::cout << "hellow  world" <<"\n\n\n\n" << c << std::endl;//endl换一行或者重复输入，\n\n\n手动多行
	//std::cout << c << std::endl;//但是cout的精度没有scanf高

	//---------------------------2------------------------------------
	//int a = 10;
	//printf("%d\n", yi::a);//对箱子里面的东西进行申请用：：
	//且这个int a=10的a与箱子里面的a处于两个空间，可以重定义
	//如果开放了箱子则空间就合并了,但很容易发生冲突
	
	//解决方法1，局部变量的优先级高于全局变量，局部开放
	//using yi::a;//相当于局部变量
	//printf("%d\n", a);
	//方法二：用到的时候才开锁
	//printf("%d\n", yi::a);

	//：：前面没有作用域标识符，则作用于全局
	//printf("%d", ::a); 


	//----------------------------1-----------------------------------
	////int* p = new int;//申请单个空间
	////*p = 10;//初始化空间

	////或者这样，一开始赋值
	//int* p = new int(10);
	//printf("%d\n", *p);
	//int* arr = new int[10];//10个int =sizeof(int)*10
	//memset(arr, 0, sizeof(int) * 10);

	//delete p;
	//p = nullptr;//C++的空值
	//printf("%d\n", NULL == nullptr);//二者相同

	//delete[]arr;//[]不能省略//[]中间可以写10也可以不写，因为他是默认连续删除
	//arr = nullptr;
	//return 0;
//}