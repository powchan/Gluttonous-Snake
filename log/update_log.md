# Gluttonous_Snake   


## Alpha 0.2

#### 底层逻辑更新
1. 重写了实体生成函数，以便于后续版本的更新;

#### 游戏平衡调整
1. 提高了最低速度挡位;
2. 削弱了💊;
3. 略微削弱了生命系统，后续会进一步削弱;
4. 增强了🚨的功能;

#### 修复bug
>参看bug_list

修复了snakebug ***1~6***

## Alpha 0.3

#### 底层逻辑更新
1. 优化了Sleep函数的使用,现在程序的速度更加贴近speed了;
2. 彻底修改了空实体的显示方案,现在它显示空字符

#### 游戏体验优化
1. 大幅优化了游戏入口,增加了大量文本引导游戏;
2. 添加了帮助模块;
3. 更改了速度选择系统,现在输入大于6的数字会给速度赋值;

## Alpha 0.4

#### 新增
##### 新增了大量实体：  
⚪:你吃闪了！地图立刻白屏，持续8个游戏刻  
🩸:你获得流血效果，持续期间你先持续失去生命值(0.05/clock)至1；若生命值为1，你持续失去长度(0.2/clock),当你的长度减到0时死亡  
***若你在512个游戏刻内都没有中流血,你获得流血效果***  
🩹:当你中流血时立刻生成(不计入生成上限),若你处于流血状态,清除流血效果;否则你减少1❤️  
🧲:吸收蛇头3*3范围的所有可吸收实体,期间得分翻倍,持续32游戏刻  
❓:随机幸运实体,随机产生一种可吸收实体的效果   
💜:将❤️立刻降低至1,然后减少5长度，减少10分;若减少长度的行为使蛇长<1,则蛇死亡    
*有药时免疫此毒心效果，并消耗一个药  
💖:立刻增加5❤️,不受生命上限限制,同时减少5分;生成32游戏刻后消失  
🔟:传送门,触碰其中一个会传送到形态相同的传送门处;传送后传送门消失。该传送门为特殊传送门，穿过后蛇长减为1  
♈☦️⛎♉♊♏:传送门,触碰其中一个会传送到形态相同的传送门处;传送后传送门消失  
❄️:立刻将游戏速度*1/2，持续16游戏刻  
⚡:立刻将游戏速度*2，持续64游戏刻  

#### 底层逻辑更新
1. 优化了生成函数;
2. 将清屏函数嵌入到了print_map函数内;

#### 游戏体验优化
1. 对界面进行了大面积的中文化;

#### 游戏平衡调整
1. 大幅提高了障碍物的生成概率
2. 降低了增益实体的生成概率

## Alpha 0.5 （预期更新，未发布）
#### 新增

##### 新增机制
1. 当障碍物或敌人被你的蛇身包围时按>键或Q键，障碍物被击破消失，你获得1分。预计0.5.1实现

##### 新增难度系统//
1. 简单难度：提高增益实体的生成概率
2. 普通难度：普通的正常难度
3. 困难难度：会生成敌人
4. 地狱难度：敌人和负面实体的生成权重提高 *未实装，预计0.5.1实装

##### 新增敌人系统
！敌人系统和⚔️在0.5.2彻底实现，现版本敌人不能发射实体，⚔️也是无用的   
**通常，触碰敌人会使你减1心。若你有🚆，则改为敌人死亡**   
1. 💙：每16clock发射🌀。
2. 💚：生成后512clock，将所有蛇身变为💚。
3. 💛：使5*5内的敌人免疫任何伤害。（通过将life设置为小于-5表示）
4. 🧡：对11*11范围内的蛇施加🩸流血效果。
5. 🩷：这是圣母敌人，每520clock发射💖。
6. 🤍：每10clock发射⚪。
7. 🤎：每100clock☢️。
8. 💔：每10clock发射🔥。


##### 新增实体
1. 🍖：加6分，并额外增加1长度，然后有80%概率使蛇陷入饥饿🍖状态，10%概率使蛇陷入中毒💜状态，10%概率不受影响。  
   **饥饿状态：可以被💊和西瓜解除。使你每20clock便减少1蛇长，并减少2分；当蛇长减少到小于等于1时，开始每100clock损失1生命，直到剩余1生命时移除此效果**  
   **中毒状态：可以被💊解除。每100clock减少1生命，直到死亡**  
2. 🔥：陷入燃烧(负面)状态,持续200clock。
   **燃烧状态：可以被💧解除。每500clock减少1生命，直到死亡**
3. 💧：陷入潮湿(负面)状态，持续200clock。
   **潮湿状态：可以被🔥解除。当你被敌人攻击时，立即死亡**
4. 🛡️：32clock内免疫敌人的任何伤害，并且免疫(不能解除)除流血以外的负面效果。
5. ⚔️：持续256clock。期间，你可以按E键或?键向前方10格发起攻击，这个攻击可以击破敌人和障碍物。
6. 💣：消灭场上所有敌人和5*5范围内除了蛇和墙之外的实体，然后你减少1生命。
7. 🌀：你被晕眩16clock。
8. ➕：使蛇增加10长度。

#### 游戏平衡调整
1. 将💊的上限提升为3
2. 下调了🩸的生成上限
3. 使得💜能附加中毒状态,但是下调了其伤害

## Alpha 0.5.1

#### bug修复
1. 修复了snakebug13~14  

#### 新增
1. 当障碍物或敌人被你的蛇身包围时按>键或Q键，障碍物被击破消失，你获得1分
2. 实现了⚔️

#### 游戏体验优化
1. 暂停状态下按h可查看帮助

#### 逻辑与结构优化
1. 将基于enemy.exist的结构全部修改为基于enemy.life,并将无敌状态设为life = -10;
2. 将help函数系统搬进了snake.h

## Alpha 0.5.2

#### 游戏平衡调整
1. 简单模式下不再有倒计时流血的效果
2. 调整了各个模式下的得分逻辑，高难度和高速度下现在会有分数加成
3. 盾牌现在能抵抗炸弹的扣血效果

#### 新增
1. 实现了地狱模式
2. 完全实现了现有敌人的功能

#### 修正
1. 修正了帮助文档中的一些错误