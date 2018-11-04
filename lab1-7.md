###  利用Construct 2制作游戏  
1. 游戏策划：  
这个游戏有一个为玩家操控的人物，可以发射火球，火球  
具有很高的伤害。还有一个角色是怪兽，分布在画面四周  
，受到玩家发出的火球攻击后就会爆炸消失。  
2. 游戏设计：  
+---------------------------------+  
|object:精灵                      |  
+---------------------------------+  
|attributes 图片，位置             |  
+---------------------------------+  
|collaborator     |event & actions|  
+------------------------------------+  
|mouse   |every tick set angle toward|  
+-------------------------------------+  
  
+---------------------------------+  
|object:火球                      |  
+---------------------------------+  
|attributes 图片，位置             |  
+---------------------------------+  
|collaborator     |event & actions|  
+---------------------------------+  
|mouse    |left clicked spawn bullet|  
+---------------------------------+  
  
+---------------------------------+  
|object:monster                   |  
+---------------------------------+  
|attributes 图片，位置             |  
+---------------------------------+  
|collaborator     |event & actions|  
+--------------------------------------------+  
|mouse |on collision with buttle spawn bullet|  
+--------------------------------------------+  
https://github.com/Huangziyi66/hzy_homework/blob/gh-pages/images/%E6%8D%95%E8%8E%B7.PNG  
https://github.com/Huangziyi66/hzy_homework/blob/gh-pages/images/%E6%8D%95%E8%8E%B71.PNG
