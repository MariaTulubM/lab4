// SPDX-License-Identifier: GPL-2-Clause
#include <hello1.h>

MODULE_AUTHOR("IO-11 Maria Tulub");
MODULE_DESCRIPTION("Lab4");
MODULE_LICENSE("GPL");

static uint count = 1;

module_param(count, uint, 0);
MODULE_PARM_DESC(count, "Counter lab4\n");

static int __init init_hello(void)
{
	pr_info("hello2 has been initiated\n");
	display_hello(count);
	return 0;
}

static void __exit exit_hello(void)
{
	pr_info("hello2 has been unloaded\n");
}

module_init(init_hello);
module_exit(exit_hello);
