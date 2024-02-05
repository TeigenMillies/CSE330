#include <linux/module.h>     /* Needed by all modules */ 
#include <linux/kernel.h>     /* Needed for KERN_INFO */ 
#include <linux/init.h>       /* Needed for the macros */ 

//make the variable then pass to hello.c
static int Intparameter = 0;
hello(Intparameter, int, 0644);

static char *charparameter = "default";
hello(charparameter, charp, 0644);
  
static int __init developer_info (void) 
{ 
    printk(KERN_INFO "Hello, I am Teigen Millies, a student of CSE330 %s %d\n", charparameter, Intparameter); 
    return 0; 
} 
  
static void __exit hello_end(void) 
{ 
    printk(KERN_INFO "Goodbye-Teigen Millies\n"); 
} 
  
module_init(developer_info); 
module_exit(hello_end); 
