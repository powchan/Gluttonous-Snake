#### 四级标题表示普通bug
### *重要bug为3级斜体标题*
>#### 已解决bug挂引用标识
<br><br><br>


# Gluttonous_Snake   
## Alpha 0.1

>#### snakebug1  
>定时消失的实体不能正确消失

>#### snakebug2  
>蛇身生成会覆盖其它实体，甚至墙面

>#### snakebug3  
>蛇竟然可以原地掉头!!!

>#### snakebug4  
>空不能正确地初始化实体上限数组

>#### snakebug5  
>实体交互模块没有正确地把被吃掉的实体回复上限


>### *snakebug6*  
>蛇长为1时吃西瓜/椰子，导致向左生成蛇身时,蛇头会被覆盖;

## Alpha 0.2

## Alpha 0.3

## Alpha 0.4

>### *snakebug7*
>输入名字如果有空格，会导致其存储在缓冲区中不被读取

>### snakebug8
>没有初始化游戏刻

>### snakebug9
>没有清空输入流的操作,破坏游戏体验

>### *snakebug10*
>储存和读取技术:
>1. 不支持中文名字;
>2. 对多位英文名可能多位;

>### snakebug11
>闪光弹出现错误，并且导致很多奇怪的bug,可行的解决方案是分离map和print_map

>### snakebug12
>磁铁实体没有实现

## Alpha 0.5

>### snakebug13
>偶现一些诡异的提前实体交互,猜测为磁铁相关错误。

>### snakebug14
>磁铁现在会非法吸收敌人实体

>### snakebug15
>围攻障碍物的功能实际上没有实现 

>### snakebug16
>敌人无法被正常攻击

## Linux 0.6
### snakebug17
移植到Linux平台后文件读写功能全部失效
### snakebug18
snakebug9重现

