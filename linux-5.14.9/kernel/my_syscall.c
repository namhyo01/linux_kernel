#include <linux/kernel.h>
#include <linux/syscalls.h>

SYSCALL_DEFINE0(mycall){
	printk("20163158 NamHyo Kim\n");

	return 0;
}
