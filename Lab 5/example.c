#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>

MODULE_DESCRIPTION("Kernel module 1 ");
MODULE_AUTHOR("Harry");
MODULE_LICENSE("GPL");

static int example_init(void)
{
   pr_debug("Welcome! Good to have you here!\n");
   return 0;
}

static void example_exit(void)
{
   pr_debug("Goodbye!\n");
}

module_init(example_init);
module_exit(example_exit);