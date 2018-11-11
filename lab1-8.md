### lab1-8 自顶向下 逐步求精的设计方法  
自顶向下的设计方法是一种程序开发技术，其中问题被分解为更容易处理的  
子问题，这些子问题的解决方案组合起来构成整体问题的解决方案。这个方  
法主要分为四个步骤，首先是明确要解决的问题，然后再把问题分成若干个  
子问题，之后再对每一个子问题要实现的功能进行编程，最后把所有的子函  
数集合起来，测试程序。  
对于洗衣机而言，其主要功能是将衣服洗干净，可以分成的子功能有：控制  
进水开关、设置进水量、控制排水开关、设置浸泡时间、设置漂洗时间、设  
置甩干时间、设置漂洗次数、设置甩干次数。  
BEGIN  
water_in_switch(open_close){  
get_water_volume() open switch  
if water_level reach preinstall value  
close switch }  
time_dip_clothes(){  
time_counter(){  
if time reach reach preinstall value  
exit } }  
wash_clothes(){  
motor_run(direction){}  
time_counter(){  
if time reach reach preinstall value  
exit } }  
water_out_switch(open_close){ get_water_volume() open switch  
if water_level reach preinstall value  
close switch }  
spin_dry_clothes(){ time_counter(){  
motor_run() if time reach reach preinstall value  
exit } }  
END
