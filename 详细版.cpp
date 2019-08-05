//            这里凝聚了我那么久以来C语言探索的认知，经验，不同送给别人的版本，给你的是最齐全的。

//            这个教程针对计算机2级的大题部分，涵盖了大部分知识点以及会用到的各种简便写法

//            这一些都是我长期苦练脱发技巧的结晶，连我舍友都拉着劝我莫学了头发要紧，兴趣使然而已，我会坚持下去

//                                 玩笑话就不多说了，教程开始


           //头文件位置，头文件中包含了程序中需要的一些重要函数，必不可缺

#include <stdio.h>          //stdio.h 头文件 C语言最基础的头文件，使用C语言必须加上
#include <string.h>         //strring,h 对字符串的处理中需要使用到它
#include <math.h>           //math.h 某些特殊的数学计算需要使用到它
#include <iostream>         //C++ 的 iostream头文件，使用C++语言的相关语句需要调用它
using namespace std;        //C++ 中用来省略命名空间 ‘std：：’




int main()
{
//变量定义

//说到变量其实也是存在全局变量与局部变量的区别的，但是我们在写程序时按自己的习惯来就好，不要特意要求一定要使用全局还是局部变量。它们的区别就在于它们的有效范围不同。这个我们在后面有机会会讲到。
    
    int a;      //整型定义
    char s;     //字符定义
    float t;    //浮点数定义（小数）
    double k;   //双浮点数定义（定义的数据范围较大）
    long l;     //长整型定义（定义的数据范围比int大）同理存在short定义
    bool j;     //布尔定义（用的较少）存在“YES”，“NO”两个值，在C语言中对应1，0.可用于判断
    //数据的定义
    /*如果寻求更大范围的定义可以使用long long （双长整型）或者double double （双长浮点数）定义
     double的范围大于long*/
    /*
                            各种类型可以参考下表
     类型名称           占字节数           其他叫法      表示的数据范围
     char              1         signed char         -128 ~ 127
     unsigned char     1            none              0 ~ 255
     int              4           signed int        -2,147,483,648 ~ 2,147,483,647
     unsigned int      4          unsigned            0 ~ 4,294,967,295
     short             2         short int           -32,768 ~ 32,767
     unsigned short    2       unsigned short int     0 ~ 65,535
     long             4          long int           -2,147,483,648 ~ 2,147,483,647
     unsigned long     4        unsigned long         0 ~ 4,294,967,295
     float             4            none              3.4E +/- 38 (7 digits)
     double            8            none              1.7E +/- 308 (15 digits)
     long double       10           none              1.2E +/- 4932 (19 digits)
     */
    
    
    //字符输出的几种方式（法1仅限字符，法2为通法，可以输出各种变量）
    
    //          <1>
    
    s='a';//给字符s赋值       C语言中‘=’代表赋值，‘==’代表‘等于’，‘！=’代表‘不等于’
          //                      ‘<='代表‘小于等于‘   ’>='代表‘大于等于’
          //                 后4者常用于判断
    
    
    putchar(s); //      输出字符变量s      输出结果为 a
    putchar('s'); //    输出s这个字符      输出结果为 s
    putchar('\n'); //     输出换行    与上面的例子相同道理
    
    //提及了 ’\n‘ 换行符 这里我们可以拓展一下
    
    /*
     
     字符中有一类十分特殊的字符，它们的开头带着 ’\‘ ，我们称这种字符为转义字符
     
                        现在我们来归纳一下转义字符及其作用
     
     转义字符                      字符值                      输出结果
     \'                         一个单撇号（‘）              输出单撇号字符 ’
     \"                         一个双撇号（“）              输出双撇号字符 ”
     \?                         一个问号（？）               输出问号字符 ？
     \\                         一个反斜杠（\)               输出反斜杠字符 \
     \a                         警告（alert）               产生声音或者视觉信号
     \b                         退格                       将光标的当前位置后退一个字符
     \f                         换页                       将光标的当前位置移到下一页的开头
     \n                         换行                       将光标的当前位置移到下一行的开头
     \r                         回车                       将光标的当前位置移到本行的开头
     \t                         水平制表符                  将光标的当前位置移到下一个 Tab 的位置
     \v                         垂直制表符                  将光标的当前位置移到下一个垂直制表符对齐点
     \o、\oo 或者 \ooo           与该八进制码对应的ASCII字符   与该八进制码对应的字符
     \xh[h...]其中h表示一个16进制数字     与该十六进制码对应的ASICII字符  与该十六进制码对应的ASICII字符
     
     */
    
    
    //          <2>
    
    
    printf("%c\n",s); //使用printf函数输出
    
    
    //  printf 函数的结构  printf(“格式控制字符串”,输出表项) ；
    //  printf 函数的变量格式有以下几种常见形式
    /*
                %d——————整型变量
                %c——————字符变量
                %s——————字符串
                %f——————浮点数变量
                %ld————-长整型变量
                %lf————-长浮点变量
     
     还有%O，%x，%U等，用的较少，在此就不赘述
     
     在%f 与 %lf有注意事项 ： %A.Bf   其中A表示输出宽度（输出多少位数，包括小数点为），B代表输出小数点后B位
     */
    
    //知道了如何输出字符变量，那现在来说说如何输入变量
    
    //          <1>        (仅限字符）
    
    s=getchar(); //输入字符变量s
    
    //getchar 表示从键盘读入一个字符
    //如果需要输入字符串  可使用gets函数  使用形式为gets（s）  在后来的数组定义中会再提及
    
    //         <2>         (通法）
    
    scanf("%d",&a); //输入整数型变量a
    
    //              与printf函数相似
    //    不同点：表示前需加上‘&’地址符号
    //    scanf 函数对输出表项的读入使用了指针（后面可能会说到）， 须读入地址
    //    无需太多理解，记住就行，如果不加入‘&’会导致程序卡死等    感兴趣可以自己试试(??ω??)
    
    /*    这部分讲完了，下面是一些例子代码              */
    
    //输入5个数并将其输出
    
    int z1,z2,z3,z4,z5;
    
    scanf("%d %d %d %d %d",&z1,&z2,&z3,&z4,&z5);
    
    printf("输入的数据是：%d %d %d %d %d\n",z1,z2,z3,z4,z5);
    
    //是不是觉得，使用scanf，printf函数还要注意好多东西好麻烦，嘿嘿，这里有神器解决这种看起来就很麻烦的函数
    
    //C++拯救世界，在C++中，我们使用  "  cout<<  "  以及   "    cin>>   ",来分别表示输出和输入
    //好像从字面意思上很难去理解，那么我们就从它后面所跟的两个类型为 " > " 的符号所指方向来辨认它的意思
    // >> 就是进入的方向，所以对应输入   <<  从表面理解为出去的方向，代表输出    这样就方便记忆啦
    //而且弄错了方向会报错，到时候改改就好啦
    
    //具体啥用法呢？cout函数直接在'<<' 后面加上变量名等于输出变量，如果内容用双引号括起来，那么就直接输出
    //括号内的语句，如果需要加入变量，只要在第一个语句后直接加上另一个 "<<" 然后后面跟上变量名称即可，这个
    //十分灵活，十分便捷。
    
    //是不是讨厌scanf中要加入地址符号呀，七的八的格式，用cin >> 就非常简单 直接在 >> 后面加上变量名称即可
    //如果需呀输入多组变量，与cout相似，多加一个 >> 然后跟上变量名称即可！
    
    //但是有一点要注意，由于这个只在C++环境中实现所以，必须在支持C++的编译器上添加头文件 #include <iostream>;
    //以及 using namespace std; 后者帮助我们省去cout，cin函数前本来应有的 ‘std：：’ 标志
    
    
    /*                     运算符与表达式                   */
    
    /*
            类似数学表达式，C语言中存在其运算符以及表达式
     就如前面所说的，C语言中‘=’代表赋值，‘==’代表‘等于’，‘！=’代表‘不等于’
                    ‘<='代表‘小于等于‘   ’>='代表‘大于等于’
     
            赋值：a=100；     不能写作a==100；
            ‘==’更多的使用在各种判断语句中
            简单来说， 我们可以把变量理解为一个容器，放在左边当左值时，意思为保存、存放右边的值。
            所以，我们可以说=运算符的左操作数是可修改的左值。
     
                    现在我们来说说数学运算符的问题
     
            加法：‘+’ 减法：‘-’ 乘法： ‘*’ 除法： ‘/’ 求模：‘%’
            写表达式也与数学写法相同
            例子：
            a=1+2-4/2*3      输出的结果为： -3
     
            ‘变量’也可以写入右边的式子中
            例子：
            a=a+1；
            这个就代表a自身加上1
     
            其实这个例子可以使用另外的几种数学运算符表
     
            自增/自减：++/--      这个运算符可以使‘变量’自身加1或者减1
     
            ++/-- 放在变量的前面或者后面是有区别的
     
            ++/--放在变量前面  表示：先自身自增完后再参与相应的运算
            ++/--放在变量后面  表示：先进行相应的运算后再自身自增
     
     
            +=/-=表达式：
     
            放在‘变量’之后    ——>   a+=2   表示：a自身加上2
     
     
            所谓的表达式就是  各种运算符的自由组合（需要注意括号和数学相似）
            也要考虑优先级问题：
            ！ > 算术运算符 > 关系运算符 > && > || > 赋值运算符
            算术运算符中满足乘除大于加减
     
     
            以下为关于本节知识的例子代码
     
     */
    
    
    //      输入一个3位数，输出它的每一位以及每一位的和
    
    int input,c1,c2,c3; //定义input代表输入的3位数，c1、c2、c3代表每一位数字
    
    scanf("%d",&input);
    
    c1=input%10;
    input/=10;
    
    c2=input%10;
    input/=10;
    
    c3=input;   //获得input变量中的三位数
    
    printf("%d \n",c1+c2+c3);    // 输出3位数的和
    printf("%d %d %d",c3,c2,c1); // 输出’input‘每一位
    
    /*
     
                            C语言和程序流
     
            这一节是C语言基础中较为重要的一节，会出现很多结构，这部分最好多练习加以掌握
     
                        首先我们先来说说“选择结构”
            选择结构我们可以分为if...else (if)与switch语句
     
            我们重点讲述有关if...else (if)语句的相应知识
     
            以字面的意思我们就可以知道，if...else语句说的就是  如果...否则  的意思
            结构：  if(表达式)    //若条件成立则实行花括号里的语句，反之则不执行
                    {
                        语句
                    }
                （形式1）
     
     ---------------------------------------------------------------------------
     
                    if()      //判断括号内的条件是否成立，成立则执行
                    {
                        语句1
                    }
                    else      //如果上面括号内的条件不成立，则执行
                    {
                        语句2
                    }
                （形式2）
     
     ---------------------------------------------------------------------------
     
                    if()     //判断括号内的条件是否成立，成立则执行
                    {
                        语句1
                    }
                    else if()  //如果上面括号内的不成立，则判断该括号内的条件是否成					立，成立则执行
                    {
                        语句2
                    }
                    ... //以此类推
                （形式3）
     
                ！！  if...else (if)语句使用的频率较高  ！！
     
                在这里我们提及关于C语言的逻辑语言 或者 并且
                或者 ——> ‘||’
                并且 ——> '&&'
                这个务必要记住
     
     
                            switch语句
     
                这个部分不重点讲，但是这个结构层次会比较鲜明，if语句写长了之后容易乱
     
                 结构：switch(表达式)
                 {
                 case 常数表达式:语句1；
                 case 常数表达式:语句2；
                 case 常数表达式:语句3；
                    ......
                 default:语句n;
                 }
     
     
                 例：switch(value)
                 {
                 case 1:printf("one");break;
                 case 2:printf("two");break;
                 case 3:printf("three");break;
                 default:printf("other");break;
                 }

    
                    这里我们穿插讲讲条件运算符的相关知识
     
         条件运算符可以在一定的程度上代替if...else语句，让代码看起来更简洁

                    那么它的结构是啥嘞？
                    结构：表达式1？表达式2:表达式3；
         如何去理解它呢？我们先判断表达式1，如果表达式1为‘真’，或非0，则执行

                    表达式2中的语句，反之，则执行表达式3的语句
     
        举个例子吧：我们要从a.b两个数中得出较大的那个数，我们可以这样处理：

     
                     max=a>b?a:b;           //这个比较好理解，a如果大于b那么语句成立，返回语句2，a的值，                                 反之返回语句3，b的值
     
                     a>b?(max=a):(max=b);  //这与上面的例子相似，a>b成立则执行语句2的命令，反之执行语句3的命令

这里我们来讲讲一点拓展知识：模版
怎么去理解它？由于使用的较浅对于类和栈没有什么要求，可以直接理解成函数的一个模版，用于整合相似类型的函数比如一个比较大小的函数：max返回的是较大一个数，但是如果要重复使用而且存在int 和 double 两种类型的区别。一般情况下我们需要两个函数来实现大小的比较，但是它们的结构太相似了，我们该怎么简化它呢？这时候模版就派上了用场，就像它的名字，它可以自动辨识变量的类型并返回需要的值。

template <typename t>
t max1(t a, t b){
    return a>b?a:b;
}

template 定义模版 后面用<>号typename 后面跟上使用的变量名，这里的变量名可以自己定义，上面使用的就是自己定义的t类型变量，接下来的操作只要把t当作普通的变量类型来使用即可，可以把它联想成 int 等等类型
这样做可以在一定程度上使代码更简洁。  
     
                    现在我们来讲讲循环结构！
                循环结构在许多地方都有妙用，可以使程序看起来更简洁、逻辑性更强等
     
                    循环结构有while，do...while，for三种语句
     
                    其中while与for语句的使用较多，do...while语句也可以写作while语句的形式
                    我们先来说说while语句
                     结构：while(表达式)
                     {
                     循环体语句
                     }
     
                    当表达式的结果为‘假’或者 0 时结束循环
     
                     例：while(i++<10)   //当i的值大于的时候，表达式的结果为‘假’，						结束循环
                     {
                     printf(“count %d ”,i);
                     }
     
     
                    再来简单说说do...while语句
                     结构：do
                     {
                     循环体语句
                     }while(表达式);
     
                    与while语句不同的是，do...while先进行了一次循环语句，再来判					断表达式
     
     
                    现在来说说for语句，十分好用的一种语句，与数组的结合使用十分					经典
     
                     for语句使用由分号隔开的三个控制表达式来控制循环过程。初始化					 表达式只在开始执行循环语句之前执行一次。
                     如果判断表达式为真(或非0)就执行一次循环。然后计算更新表达式					 并再次检查判断表达式的值。for语句是一个入口条件循环，在进行					 一次循环之前决定是否要执行循环，因此有可能循环一次也不执行。					 循环的语句部分可以是一个简单的语句或一个复合语句。
     
                              ——————————来自网上的解释，挺好理解的
     
                     形式
                     结构：for(初始化表达式;判断表达式;更新表达式)
                     {
                     循环体语句
                     }
                    与while语句相似，在判断表达式为‘假’或者 0 之前重复进行循环语句
     
                    例：
                         for(i=0;i<100;i++)
                         {
                         printf("i count is %d\n",i);
                         }
                    当i<100时重复进行循环语句，执行完循环语句后再进行i++
     
     
                    说完循环结构，有几个循环结构的特殊语句不得不提及
                    那就是：break，continue语句
     
                    按字面意思可以知道，break语句可以用来打破循环，结束循环语句
                    常与if判断语句一起使用
     
                    continue语句字面上看是继续循环，其实它的作用是：不再进行continue语句后的循环语句
                    直接进入下一次循环，这里需要注意
                    与break相似，常与if等判断语句一起使用
     
     
                    以下是关于本节的例题代码
     */
    
    //              学会了这些我们就可以实现我以前经常和你玩的猜密码游戏了，虽然你挺不喜欢猜的
    
    //              现在我们就来讲讲如何通过循环语句和选择语句实现密码的正确错误判断与提示
    
    int num;            //定义变量
    
    num=2018317915;     //将我们设置好的密码赋值给 ‘num’ 变量
    
    for(int times=5;times>0;times--)  //用for循环实现密码的重复输入，这里使用 ‘times’ 变量的自减可以用于后面次数的减少
    {
        printf("Please input the password:");
        scanf("%d",&num);
        if(num==2018317915)         //使用选择语句来实现对密码正误的判断
        {
            printf("You're right!\n");
            break;                  //如果密码正确则跳出循环
        }
        else
        {
            printf("You have %d time(s) left\n",times);
            continue;               //这里的continue其实没有必有加上，方便于理解
        }
    }
    
    //看似玄乎的代码可以实现的东西还有很多
    
    //              将上一节的第一道例题简化
    
    int sum=0;
    while(input!=0)
    {
        printf("%d\n",input%10);
        sum+=input%10;
        input/=10;
    }
    printf("%d\n",sum);
    
    //写一程序，实现简单的 + - * /
    //例输入： 1 + 1 （数字字符间空格隔开） 输出： 1 + 1 = 2
    int z11,z12;   //定义进行计算的两个变量
    char p;        //定义运算符号
    scanf("%d %c %d",&z11,&p,&z12);    //按题目要求输入
    if(p=='+')
        printf("%d %c %d = %d",z11,p,z12,z11+z12);
    else if(p=='*')
        printf("%d %c %d = %d",z11,p,z12,z11*z12);
    else if(p=='-')
        printf("%d %c %d = %d",z11,p,z12,z11-z12);
    else if(p=='/')
    {
        if(z12!=0)
            printf("%d %c %d = %d",z11,p,z12,z11/z12);
        else
            printf("ERROR\n");
    }
    //以上为通过选择结构进行计算，并输出结果
    
    //写一程序，实现给定宽度，输出不同大小的爱心(宽度大于8）
    
    int v;                              //定义宽度
    scanf("%d",&v);                     //输入
    for(int i=0;i<v/2;i++)              //利用爱心的结构具有循环结构，使用for循环
    {
        for(int j=0;j<v/4-i;j++)        //在宽度的1/4处取点，前面用空格
            printf(" ");
        for(int j=v/4-i;j<v/4+i;j++)    //在1/4处对称打印 ‘*’ 字符
            printf("*");
        for(int j=v/4+i;j<3*v/4-i;j++)  //在打印完‘*’ 后继续打印空格
            printf(" ");
        for(int j=3*v/4-i;j<3*v/4+i;j++)//在3/4处对称打印 ‘*’ 字符
            printf("*");
        printf("\n");                   //完成一次循环，换行
        if(v/4-i==0)                    //如果一开始不再打印空格，就结束循环
            break;
    }
    for(int i=0;i<v/2;i++)              //打印爱心的下端，按对称性收缩
    {
        for(int j=0;j<i+1;j++)
            printf(" ");
        for(int j=0;j<v-2*(i+1);j++)
            printf("*");
        printf("\n");
    }
    
    //v取12或16或18的效果最佳
    /*
     v==16的效果（最好使用程序运行查看，复制而来效果很差）
        **      **
       ****    ****
      ******  ******
     ****************
      **************
       ************
        **********
         ********
          ******
           ****
            **
     
     C语言还是很有趣的，用自己的双手敲击键盘实现自己所想的，这就是C语言的魅力所在
     */
    
    /*
     
                                    数组
                什么是数组呢？简单来说就是把一堆的数据存放在一个个小房间里的容器
                数组依然遵循相应变量的的类型来定义。
                比如我要定义一个可以c储存100个字符的字符数组，我可以这样定义
                char s[100];
                值得注意的是：存放在数组中的第一位不是1，而是0，怎么直观的体现呢？
                假设s[5]为一个储存5个整型的数组，并假设它储存的数据为{1,2,3,4,5}
                那么它的第一位为s{0}==1,第二位才为s{1}==2.
     
                以上所说的为一维数组。即以一行的形式来储存数据。
                那么该如何给他赋值呢？
     
                <1>  在定义时就赋值
                    即：int a[5]={1,2,3,4,5}       //记得一定要使用大括号！
     
                    这样做的好处是我们可以自己定义我们的数据，但是大部分时候，我们需要的数据
                    需要我们后期再输入，这样赋值就存在其局限性。
                    下一种赋值法就可以很好的解决这个问题
     
                <2> 使用循环结构辅助输入 ！！！
                    我们可以注意到数组a[0],a[1],a[2]....中括号中的数是递增的
                    那么我们自然而然就可以想到，是不是可以通过循环结构将数据赋值给数组
     
                    这显然是可行的。   那我们该怎么做呢？
     
                        《1》方式1：使用while循环
     
                    例： 我们要往字符数组str[10]中输入10个字符
     
                        int i=0；
                        char str[10] ;
                        while(i<10)
                        {
                            sacnf("%c",&a[i]);
                            i++;
                        }
     
                        简单理解一下。
     
                        《2》方式2：使用for循环
     
                    既进行循环语句，又存在自增语句，我们也可以将其衍生到for循环上
                    以这种方式输入较为常见（搭配数组的情况下）
     
                    以上一个例子来说：
     
                    int i;
                    for(i=0;i<10;i++)
                        scanf("%c",&a[i]);
     
                    这样就显得十分的简洁。
                    为什么在这里我不使用大括号呢？
                    因为当while，for，if等语句后的语句只有一行代码，可以省略大括号
     
                    当然
                    if（）
                        ......;.......;
     
                    这样的情况是不可行的
                    这一行代码只能有一个‘；’
     
                    这就是对一维数组与对一位数组的赋值的相关知识。
     
                    接下来我们来讲讲二维数组。
                    啥是二维数组？我们先来看看它的结构  例：a[10][10]；
                    我们可以把它看做10层每层可以储存10个数据的数组
     
                    那我们它有什么用处呢？
                    它可以更好辅助我们解决一些二维问题，如果使用一维数组需要设置节点，较麻烦，而二维数组不需要
                    它本身就代表二维。
     
                    例：
                    我们可以将这样的数据
                    1 2 3
                    4 5 6
                    7 8 9
                    储存进二维数组，而且对它每个数组所在的位置也有较为直观的体现。
     
                    对于一个二维数组a[t][k]来说：
                    它是一个t行，k列的数组
     
                    那么我们该如何给它赋值呢？
                    与一维数组相似，有两种方式
     
                    《1》方式1：在定义时赋值
     
     存在两种形式：
     
     int a[3][4]={{1,2,3,4},{10,20,30,40},{100,200,300,400}};//定义一个三行四列的二维数组,按行赋值
     
     或者：
     
     int a[3][4]={1,2,3,4，10,20,30,40，100,200,300,400};//定义一个三行四列的二维数组并对其中的12（3*4）个元素进行赋值
     
                    这样的赋值相比一维数组就显得十分的麻烦
     
                    《2》方式2：使用循环结构赋值
                使用了循环结构，对二维数组的赋值简直是找到了救星，不用再那么麻烦地去逐个定义了
     
                我们在这里只提及最为简单的for循环嵌套输入
     
                没错循环等语句之间是可以相互嵌套的，十分自由
     
                那么格式是什么呢？我们以3行3列的数组输入为例
     
                for(int i=0;i<3;i++)           //外部使用一个for循环，实现行的变换
                 {
                     for(int j=0;j<3;j++)
                        scanf("%d",a[i][j];   //在一个for循环的内部使用一个for循环输入在某一行每一列的数值
                 }
     
                你应该也注意到了，在for循环中也可以进行变量的定义，只是这样的定义存在局限性
                这样定义的变量只能在该循环中使用，当它脱离循环后，将不适用于其他的语句中
     
     
                        现在再来说说字符/字符串的问题
     
                定义：char str[100];
     
                它的定义赋值有点特殊，需要和前面的一维数组等分开讲。
                它的定义赋值形式为： str[5]={'1','a',' ','g'};  //逐个定义赋值
                必须加上‘ ’符号来代表输入的是一个字符，而不是一个字母或者数字
                如果定义的数量并没有覆盖所有的可定义范围，余下的空间会自动补上’\0'（结束符）
                字符数组的定义可以使用字符串的形式来定义赋值
                例：  char str[5]={"china"}    以这种形式定义就需要使用双引号！！！！
     
                前面说到在讲字符串时会提及gets（）函数
                gets函数里放入所定义的数组名即可输入字符串，十分方便
                但是因为gets函数易受蠕虫病毒的影响，所以不是很安全
                但是我们入门并不需要考虑这些，了解便可
     
                讲到了字符串的部分，我们就不得不提及一个十分重呀的知识点，字符串的处理
     
                对于字符串的处理有以下几种：
                首先声明一下，这些处理都必须调用头文件 #include <string.h>
     
                计算字符串长度： strlen（），括号内放入需要计算长度的的字符数组的名即可返回字符串的长度
                用法为 int len = strlen（ a ）； //len 赋值以 a 数组的长度
     
                连接字符串： strcat（ ... , ... ) ,括号内放入需要连接的字符串名，两个字符串名之间使用
                逗号 ‘，’ 隔开。 用法为 strcat（ a ， b ） //直接调用即可,最后连接完的字符出串储存在a数组中
     
                复制字符串： strcpy（ ... , ... ）,括号内放入需要复制和需要被复制的数组
                用法为 strcpy （ a ， b ）； //直接调用，将 b 复制到 a 中
     
                复制字符串的另一种函数：strncpy（ ... , ... + POS , n ），形式与strcpy相似，但是多了POS和n
                省略号出依然同strcpy函数，POS 代表复制的起点位置，n代表复制的位数
                用法为 strrncpy（ a ，b+3 ，5 ）； //表示把 b 数组的第三位起的5位字符复制给 a 数组
     
                字符串比较： strcmp（ ... , ... ) ,括号内直接放入需要比较的两个字符串名即可
                用法为 int f = strcmp （ a ， b ）； //它的返回值有三类
                若返回值等于 0 ，则表示 a ， b 字符串相同 没错是 返回值为 0 ！
                若返回值大于 0 ，则表示 a 字符串的长度大于 b
                若返回值小于 0 ，则表示 a 字符串的长度小于 b
                根据它返回值存在 0 的关系，我们完全可以将它应用与：if、while等语句中
     
                知道这些关于字符串处理的函数，我们对字符串的处理就显得格外的简单，如果之前我们要实现
                字符串的比较，要动用 for 循环写长长的代码，现在就不需要了
     
                还有一个小小的注意点，由于我们对于整数的定义范围十分有限，这时候我们可以借用字符串
                传化为整数的关系来实现  “定义范围的扩大”   ，可就需要for循环的帮助了。
     
                比如 str【200】字符串中储存着我们需要的数据，那么我们该如何将它读取出来呢？
                方法如下：
     
                 int a,sum=0;
                 str[200];
     
                 for(int i=0;str[i]!='\0';i++)
                 {
                    sum=sum*10+str[i]-'0';
                 }
     
                此处了解即可。
     
                以下为关于本节的一些例题及代码
     */
    
    //-------------------------------------------------------------------------------------------
    
    //          1、    设计一个程序，使输入的5个数字可以从小到大排序
    
    int tk[10],t1;      //定义相应的数组来存放数据，t1作为中间变量，用来进行两组数据间的位置交换
    for(int i=0;i<5;i++)
        scanf("%d",&tk[i]);  //使用for循环输入数据
    for(int i=0;i<5;i++)    //使用for循环的嵌套来实现排序，这里使用的是冒泡排序法
    {
        for(int j=0;j<5;j++)
        {
            if(tk[j]<tk[i])
            {
            //使用if选择语句，外层的for作为整体移动，而内部的for循环则拿数组中的每一个数据
            //来与外层for所运动到位置对应的值进行比较，如果满足if语句中的条件，则将两个数据
            //调换位置。
                
                
                t1=tk[j];
                tk[j]=tk[i];   //实现数据的位置调换
                tk[i]=t1;
                
                
            }
        }
    }
    for(int i=0;i<5;i++)
        printf("%d ",tk[i]);    //按题目要求输出数据

其实我们有更快的的排序方法，比如堆栈排序等等，但是我们对这些知识并不做太多要求，现在我们来讲讲C++自带的排序函数，不需要冒泡排序这样20多行代码，几行就搞定

首先我们需要调用头文件   #include <algorithm>

如果使用C++的话，整个代码就显得十分简洁，代码如下：

int str[5];
for(int i=0;i<5;i++)
cin>>str[i];		//输入
Sort(str,str+5);		//使用sort函数排序，sort 函数的结构接下来会讲到
for(int i=0;i<5;i++)
cout<<str[i]<<’ ‘ ;//输出

现在我们来说说 sort 函数，他是C++自带的排序函数，必须调用C++的相关头文件
它的结构为  sort（ start ， end ，排序方式 ）；
第三项可以不编写，默认从小到大排序
第一个位置为起始位置，如果要从第二元素开始排序，只要在数组名后加上
“ +1 ” 即可 ，结束位置也是同样的道理。
这种排序方法在各种方面都优于冒泡排序哦
    
    
    
    //       2、     设计一个程序，输入1个字符串，使这个字符串进行简单的加密，如果其中的一个字母为A/a则对应1
    //       数字间空格隔开，与此类推。
    //       例： 输入：ABCD   输出：1 2 3 4
    
    
    /*                              法1                            */
    char st[100];       //定义相应的数组
    int count[100],c=0;     //定义数组来储存密码，并计数
    gets(st);            //使用gets函数直接输入字符串,需调用头文件<string.h>
    int len=strlen(st);     //这里使用strlen函数来计算字符串的长度，使用strlen函数需调用头文件<string.h>
    for(int i=0;i<len;i++)  // 使用for循环，逐个分析其大小写然后将对应的数据记录进count数组，为实现count数组
                            //可以逐个写入数据，我们借助c，每写入一个数据，c自增一次，实现数据的写入
    {
        if(st[i]>='A'&&st[i]<='Z')
        {
            count[c]=st[i]-'A'+1;
            c++;
        }
        else if(st[i]>='a'&&st[i]<='z')
        {
            count[c]=st[i]-'a'+1;
            c++;
        }
    }
    for(int i=0;i<c;i++)
        printf("%d ",st[i]); //输出结果
    
    /*                             法2（较为好理解）                            */
    
    char skt[100];          //定义相应数组
    int cou[100],cc=0;
    while((skt[cc]=getchar())!=EOF)   //使用循环结构输入数据，这里还有其他的写法后面会提及
        cc++;                         //EOF相当于结束标志‘\n'这里也可以使用‘\n'来替代，结束标志就是回车键输入的值,如果EOF无效，最好使用‘\n‘
    for(int i=0;i<cc;i++)
    {
        if(st[i]>='A'&&st[i]<='Z')
        {
            cou[c]=skt[i]-'A'+1;
        }
        else if(st[i]>='a'&&st[i]<='z')
        {
            cou[c]=skt[i]-'a'+1;
        }
    }
    for(int i=0;i<cc;i++)
        printf("%d ",skt[i]); //输出结果
    
    
    //其他的输入方式：（好理解）
    while(1)   //while与1连用代表无限循环
    {
        scanf("%c",skt[cc]);
        if(skt[cc]!='\0')
            cc++;
        else
            break;
    }
    
    
    //      写一程序实现在字符串输出字符串 “happy” 的出现次数，要求可以多次输入，如果输入为 0 则停止处理。
    
    int coun ;          //定义计数变量
    while(1)
    {
        coun=0;         //变量初始化
        char ro[100];   //变量初始化
        gets(ro);       //输入
        if((strlen(ro)==1)&&(ro[0]=='0'))   //按题目要求的方式结束程序
            break;
        for(int i=0;i<strlen(ro)-4;i++)
        {
            char ro1[100];          //初始化变量
            strncpy(ro1,ro+i,5);        //将ro字符串的第i位起5位复制给ro1数组
            if(strcmp(ro1,"happy")==0)  //字符串之间的比较
                coun++;
        }
        printf("%d\n",coun);        //输出出现的次数
    }
    
    
    //      如我们在循环结构中讲过的画爱心，在这里我们为什么不使用数组使爱心变得更加有特色呢？
    
    int w,co=0;
    char dst[]={"ILoveYou"};
    scanf("%d",&w);
    for(int i=0;i<w/2;i++)
    {
        for(int j=0;j<w/4-i;j++)
            printf(" ");
        for(int j=w/4-i;j<w/4+i;j++)
        {
            printf("%c",dst[co]);
            co++;
            if(co==8)
                co=0;
        }
        for(int j=w/4+i;j<3*w/4-i;j++)
            printf(" ");
        for(int j=3*w/4-i;j<3*w/4+i;j++)
        {
            printf("%c",dst[co]);
            co++;
            if(co==8)
                co=0;
        }
        printf("\n");
        if(w/4-i==0)
            break;
    }
    for(int i=0;i<w/2;i++)
    {
        for(int j=0;j<i+1;j++)
            printf(" ");
        for(int j=0;j<w-2*(i+1);j++)
        {
            printf("%c",dst[co]);
            co++;
            if(co==8)
                co=0;
        }
        printf("\n");
    }
    
    //我们将原先存放 ‘*’ 字符的位置全部替换成某个字符串的字符
    //利用一个存在与for循环之外的变量 co 通过它的变化来实现我们字符串每个元素的读取
    //当输出一个字符后，就让其自增，当它移动到没有字符的区域时，我们使用if语句使它初始化
    //这样效果极佳！！！！！

    
   

为了更好效果，直接看下一页







 /*
       IL      ov
      eYou    ILov
     eYouIL  oveYou
    ILoveYouILoveYou
     ILoveYouILoveY
      ouILoveYouIL
       oveYouILov
        eYouILov
         eYouIL
          oveY
           ou
     
     这是w=16的情况（在word中效果很差，欢迎将代码复制粘贴进编译器（Xcode）		进行测试）
     */
    
    
    /*
     
                                函数的定义与使用
     
                    为何我们要定义函数嘞？函数就是帮助我们实现程序中某种功能的模块
                    通过定义函数，我们可以可以更好地更有层次性的实现我们程序中的种种
                    功能。
     
                    那我们要如何定义我们需要的函数呢？
                     结构：类型 函数名(形参表说明)   //函数首部
                    {
                        说明语句                 //函数体
                        执行语句
                        返回值（return）
                    }
     
                    在程序设计中，我们将函数定义放在main（）函数的上方，头文件的底部
     
                    即：
                     #include<stdio.h>
                     #include<string.h>
     
                     int C++_teach()
                     {
     
                     }
     
                     int main()
                     {
                     ......
                       
 c=C++_teach(放入需要处理的数据，如果单纯想要实现某种功能可以看下一种调用方式)；
     
                        //上面的调用方式，c可以被赋予C++_teach函数运行后的返回值
     
                        C++_teach（）； //将需要实现的功能写进函数中，main函数中直接这样调用即可实现功能
                     }
     
        类型”是指函数返回值的类型。函数返回值不能是数组,也不能是函数,除此之外任何合法的数据类型都可以是函数的类型,如:int,long,float,char 等。函数类型可以省略,当不指明函数类型时,系统默认的是整型。
     
        形参又称为“形式参数”。形参表是用逗号分隔的一组变量说明,包括形参的类型和形参的标识符,其作用是指出每一个形参的类型和形参的名称,当调用函数时,接收来自主调函数的数据,确定各参数的值。
     
                                                _________定义来源于dotcpp.com
     
                对于函数我想说的不是特别多，我们可以将它理解为一段执行特定任务的代码
                如果有一段功能相同的代码在程序中将多次出现，我们就可以将它定义为函数
                每次需呀使用时就调用它即可，是代码清晰、好看、逻辑性强
     
                值得一提的是：如果有数据被放进函数中进行处理，那么在main函数调用该函数后，数值不会发生任何变化。
                如果需要数值改变，这时候就需要借助另一个工具：‘指针’，指针的相关知识在C语言基础中属于较为复杂的
                且十分重要部分，但是对于初学者并没有必要了解深入，如果有必要，后面会再提及。
     
                下面我们来看看关于函数的一些例子
     */
    
    //          设计一个函数使输入的两个数n.N，输出他们其中的最大值。
    
    /*
     
     #include<stdio.h>
     
     int max(int n,int N)   //定义相应的函数max
     {
         int m;
         m=n>N?n:N;         //条件运算符运算，得到两个数的最大值
         return m;          //将较大的那个值返回
     }
     
     int main()
     {
        int n,N,m;          //定义相应的变量
        scanf("%d %d",&n,&N);
        m=max(n,N);         //调用函数
        printf("%d\n",m);
     }
     
     更有甚者，我们可以更加简洁！！！！！！
     
     int max(int n,int N)
     {
        n>N?(printf("%d",n)):(printf("%d",N));   //直接输出就完事儿！！！！！
        return 1；   //在windows的编译器上不一定要使用return，而mac os系统必须加上
     }
     
     代码就显得十分十分的简洁

接下来我们来介绍一种特殊的函数——递归函数

什么是递归函数呢？如它的字面意思，就是一种层层嵌套起来的函数，简单来说就是一种调用自身的函数直到达到某种结果（可人为设置结束），概念性的东西我也不是十分擅长，我们直接通过实际结构来了解它。

结构：

Int func( int n )
{

If ( n 符合某种条件时结束）
语句；
return 1；

 				else
return （一个包含该函数函数名的语句，例如：n*func( n-1 ) ; )

}

由于在else选择语句中，返回了某个函数，那么系统会将调用该函数的结果计算出来之后再返回到 main 函数中 ，可能我们调用函数时又遇到了该结构，会继续先计算该函数的返回值，这就是它的递归过程。

下面我们通过一道例题来解释一下

设计一个程序计算 n！(阶乘）：

int func(int n)
{
    if(n==0||n==1)			//如果返回到函数的值为0或是1就结束递归，不再调用函数本身。
        return n;
    if(n>1)
        return n*func(n-1);	//不满足结束条件，使用递归结构
    return 1;					//macOS系统必须带上，win系统就不需要
}

int main()
{
    int n,a;					//定义相关变量
    scanf("%d",&n);
    a=func(n);				//调用函数
    printf("%d\n",a);
}

//其实使用递归函数有一个很明显的弊端，就是电脑的运算负担变大了，它的运算负担比循环结构大的多，如果要实验的话，可以设置两个相似的运算，一个使用递归，一个循环结构，它们答案给出的时间随计算的复杂程度差距越来越大，而且使用递归结构的电脑的cpu位置可以摸一下，烫得很，递归函数好用但是使用的次数要尽量少一些。

     */
    
    
    
    /*
     
                            现在我们来讲讲C语言中重要的一环
                                      指针！
     
                何为指针呢？我们可以把它理解为一个变量，但是它与一般的变量存在一定的不同
                如何理解呢？指针不同于其他变量，它是通过访问变量地址的方式来进行数据处理的一种变量
                通过定义讲解似乎并不是那么好理解，那么我们可以通过指针的定义来理解它究竟是一个什么样
                的变量
     
                对指针的定义：
     
                                     int a;
                                     int *p;
                                     *p=&a;
     
                这就是对指针的定义过程，我们该如何去理解它呢？
                首先我们先定义一个我们需要操作的变量，正如我在第一行所定义的整型变量a，然后在第二行
                我们给出对指针的定义，在字符前加上 ‘*’  即可将其定义为指针变量，第三行我们执行较为
                简单的一个赋值，我们可以注意到，我们在a的前方加上了  ‘&’   符号，这也是我们之前在
                讲述scanf函数中所提及的  ‘地址符号’  这就和前面我们所说的定义联系到了一起，指针变
                量是通过访问变量地址的方式来进行数据处理的一种变量。
     
                说了那么多，对于指针的运行机制已经进行了简单的介绍，但是  ‘地址&’  我们似乎并没有
                构建起什么概念，这里咱们就来讲讲，关于地址的理解。
     
                何为地址呢？与我们生活相互联系起来理解，就是变量储存的位置，每一个变量都拥有一个属
                它自己的地址，可能a变量的地址为  ’0xbfb949c4‘  我们就可以理解为，变量a的数据被
                储存在编号为   ‘0xbfb949c4’  的房间里。如果我们要改变这个变量的数据，一个是改变
                这个变量本身，另一个方法就是，我们那个变量的号码牌---‘地址’，去访问这个变量，从而
                对这个数据进行数据处理。
     
                但是直接修改变量本身好像更加地简便，如果指针的作用仅仅是用于变量的简单数据处理，那
                指针的对于C语言的影响也不会如此深刻了，就就举一个简单的例子-----函数与指针的关系。
                前面我们说过函数，将变量放入函数体中，即使函数语句对数据的大小进行了修改，也不会影
                响  main  主体中导入数据的变量的值的大小，如何去理解呢？这里就要将函数借着往深处
                挖掘了，我们可以看函数定义的第一行：
     
                        类型 函数名(形参表说明)
     
                举个简单的例子，我们在 main 中向函数导入变量 ‘a’  ，例如 ‘count（a）’
                函数头我们这样定义 int count (int b) 我们可以理解为，在函数体中，我们另
                外定义了一个变量 ‘b’，并将a 的值赋值给了 ‘b’ 所以在函数中进行了数据处理，
                如果我们要获得值的改变，我们可以借助两条道路:
                <1>
                我们调用函数时，使用  a=count(a); 的方式，并在函数的返回值出使用，return b;
     
                <2>
                我们可以使用指针来操作！代码就显得十分的简便。既然我们知道的数值导入具有赋值性，
                那么我们就可以使用它的这个性质来直接引用指针，如何操作呢？
     
                main 函数中：
                        count(&a);
     
                count 函数中：
                        int count(int *p)
     
                甚至不需要返回值就可以实现数值的处理。
     
                指针的应用并不只这些，在后面的结构体等知识点中，指针是必不可少的组成部分。
     
                我们接来下来看个十分简单的例题来理解指针的使用：
     
                使用指针变量将原先a的值1，改变为2：
     */
    
    int r=1;      //定义整型变量r=1
    
    int *r1=&r;   //使用整型指针r1，让它指向r的地址
    
    *r1=2;        //通过指针变量改变数据
    
    printf("r==%d\n",r);   //输出
    
    
    /*
     
                没错我们还可以执行有关函数的相关操作
     
                定义一个count函数来使导入的变量乘上自己的位数，并输出。
     
                int count (int *p)
                 {
                        int a=*p,c=0;
                        while(a!=0)
                         {
                             a/=10;
                             c++;
                         }
                        *p*=c;
                        (return 1;)       //苹果系统一定要加上，否则会报错
                 }
     
                代码十分的简洁，看起来很舒服
     
     
                        介绍完指针变量，接下来我们来说说指针与数组之间的关系
     
                            这部分的知识可能较难理解，我也会多阐述。
     
                与之前与变量之间的联系相似，指针数组也是通过访问地址的方式来实现数据的更迭，但是指针数组中
                存在一些容易混淆的概念，我们接下来详细的来讲一讲
     
                首先我们要把数组与指针数组区别开，数组的每一位可以表示为 name[i]  的形式，但是这个并不延伸到指针
                数组中，我们不能把指针数组的某一个元素表示为 *name[i] ，那我们该如何去表示它呢？我们先来看看指针
                数组的定义。
     
                定义： int a[5];
                      int *p;
                      *p=&a[0];
     
                以上是指针数组常用的一种定义形式，当然第二、第三行是可以合并在一起写的，只是分开写比较清晰。
                这时或许就有疑惑了，为什么只有一个 *p 把 a[0] 的地址给了它，那如何让它表示一整个数组中的
                所有元素呢？
                首先，使用a[i]来表示是最直接的，但这并不是我们要重点讨论的。我们要重点说明的是数组的指针表示法
     
                我们可以将数组表示为 *(a+i) , *(p+i) ,两种形式 a 是数组的名称 ， p是指向数组的指针变量，它的
                初值 p=a
     
                这里有一个需要区别开前面知识的一个知识点，既然指针数组的某个元素可以表示为 *(p+i) 那为什么不直接
                表示为 p+i 呢？ 这里我们就要提到一个概念，叫做指针漂移。当我们使用的命令之后，指针p所指向的数组元素
                ，不再是 a[0] 了，而是 a[i] 。这意味着，当我们后面再使用 *(a+j) 的指令后，它所表示的元素不再是
                a[j]，而是a[i+j]。这便是指针漂移，从原先指向的位置平移了。这里一定一定要注意。
     
                这里我们不得不提及字符串，我们要区别开字符串数组和字符串指针！！
                字符指针 str 是个变量,可以改变 str 使它指向不同的字符串, 但不能改变 str 所指向的字符串常量的值。
                而string 是一个数组,可以改变数组中保存的内容。应注意字符串指针和字符串数组的区别。
     
                虽然使用较少，但是其中的区别还是需要分别开。
     
                在指针的帮助下，我们对数据的处理就显得更加轻松。可以从某种程度上减少程序对内存的占用程度。
     
                接下来我们来看看关于指针的一些例题：
     
                设计一函数使得数组内元素的倒序
     
                int daoxv(int *p,int t)  //输入    t为数组的位数
                 {
                     int z1;
                     for(int i=0;i<t/2;t++)
                     {
                         z1=*(p+i);
                         *(p+i)=*(p+t-i);
                         *(p+t-i)=z1;
                     }
                    return 1;
                 }
     
                由此可见指针数组与指针变量的使用是十分相近的，所以它便于记忆，成了万金油似的存在
                忘了长长的变量名，我指针一套就完事儿啦。
     
     
                接下来我们来讲一讲一些有关指针的例题
     */
    
    //          写一程序实现数据的简单加密，即‘a’变为‘c’，‘b’变为‘d’
    
    /*
     
     根据题目的意思可知，我们将原先的字符所在ASICII码后移了2个位置
     所以只要字符进行  +=2  的操作即可
     
     int mima(int *p,int len)
     {
        for(int i=0;i<len;i++)
            *(p+i)+=2;
        return 1;
     }
     
    char str1[100];
    gets(str1);
    int len=strlen(str1);
    mima(&str1,len);
     
     */
    
    /*
     
                我们来讲讲最后一个知识点
                        ------结构体
     
            这个知识点我本来想简单说明就过，还是再详细说说吧.在最后的最后送你一串代码，给这个教程一个结尾
     
            如何简单的理解结构体？我们可以将结构体视为一个装下许多变量的框架，
            这个框架里可以放入许多的变量，当我们需要使用这些变量时，因为有框架的存在
            使代码的结构更加的清晰！
     
            结构体的结构如何呢？
     
            struct 结构体名
             {
                 数据类型 成员名1；
                 数据类型 成员名2；
                 ...
             }name1,name2...;				//切记分号一定要带上

//在这里定义name我们在main函数中就可以省去

Struct 结构名 name ；的操作了，具体的往下看就能理解啦。
     
            与函数的放置位置相同，在头文件之下，main函数之上
     
            使用方法
     
            例：
            struct str
             {
                 int a;
                 char b;
                 int c[100];
                 char d[100];
             };
     
            int main()
             {
     
                 struct str A;  //使用struct来调用结构体，并用 ‘A’ 来取代结构体名在main函数中的使用
     
                 A.a=2;         //调用结构体中的 ‘a’变量并赋值2

//其实这里的调用可以不使用 ‘。’号 使用下划线 ‘_’，看个人习惯啦
     
                 strcpy(A.d,"see you again ")  //将字符串复制到结构体中的 d 字符串中
     
             }
     
            这个只是结构体的简单运用，接下来我们往更深层次讲解

我们可以使用结构体来初始化一些数据
比如：
Struct STUDENT
{
Int num;
char name[10];
char sex;
};

Int main()
{
Struct STUDENT a;
a={ 24 , “zjh” , ‘M’ };
Printf( “ NO. %d \n name: %s \n sex : %c \n ”,a.num,a.name,a.sex);
}

输出的结果为

NO.24
Name:zjh
Sex:M

我们也可以这样操作

struct STUDENT
{
    int num;
    char name[10];
    char sex;
}a={ 24 , "zjh" , 'M' };;

int main()
{
    printf( " NO. %d \n name: %s \n sex : %c \n ",a.num,a.name,a.sex);
}

//直接在定义结构体时将它初始化也是可行的

结构体之间也是可以相互赋值的，毕竟是变量嘛

如果要将一个结构体内所有的值赋值给另一个结构体，例如：

Score1=Score2 ；

即可

如果是特定的成员/元素，进行形同下面的操作：

Score1.num=Score2.num ；

即可

对于结构体我们就不拓展至动态链表，共用体等知识了，如果有需要可以联系我，我应该可以讲的还算清楚接地气，毕竟结构体这部分知识在2级考试中要求并不是很大，只是用于解决相关问题时可以节约很多时间，接下来我们再来简单讲讲有关 结构体数组 和 结构体指针 的知识

我们先来讲讲结构体数组

我们在前面其实已经是用了结构体数组了，简单来说就是在结构体中定义了 某个数组，然后及其运用，但是数组就是数组不管它前面加了啥前缀，它还是数组而已，至于它的调用我们前面也说过了。

我们讲一下结构体指针的调用问题

在main 函数中，我们不能直接使用 int 等来定义结构体函数，那么要咋么操作嘞，其实形同 结构体 在main 函数里的调用

形同：struct stu *p
在printf等函数中或者单独赋值时它的使用也有需要注意的地方，它的调用有一丢丢小特殊

Print(“%d”, (*p)_name) 

(*P)_num=4;

//这里指针变量必须要括号起来，其他的使用就与一般的指针变量无异了


最后的最后我们来讲讲全局变量和局部变量吧

? ? 全局变量：在整个工程文件内都有效；“在函数外定义的变量”，即从定义变量的位置到本源文件结束都有效。由于同一文件中的所有函数都能引用全局变量的值，因此如果在一个函数中改变了全局变量的值， 就能影响到其他函数中全局变量的值。
? ??静态全局变量：只在定义它的文件内有效，效果和全局变量一样，不过就在本文件内部；
? ??静态局部变量：只在定义它的函数内有效，只是程序仅分配一次内存，函数返回后，该变量不会消失；静态局部变量的生存期虽然为整个工程，但是其作用仍与局部变量相同，即只能在定义该变量的函数内使用该变量。退出该函数后， 尽管该变量还继续存在，但不能使用它。 　　　　
? 局部变量：在定义它的函数内有效，但是函数返回后失效。“在函数内定义的变量”，即在一个函数内部定义的变量，只在本函数范围内有效。

对于C语言的讲解就到这里了，如果有需要帮助的随时联系我

莫说怕打扰，尽管骚扰，没有问题，我尽量帮你解决
     
     */

    
    //这是送给你的代码
    




char my_heart;
    
    char *what_you_do=&my_heart;
    
    char I[10]={"ILoveYou"};
    
    while(1)
    {
        if(strcmp(I,"die")==0)
            break;
    }
    
    //学过前面的知识，你知道我想说些什么
    
    
    //多练习，祝你计算机2级大题满分
    return 0;
}

