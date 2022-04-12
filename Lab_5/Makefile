CONFIG_MODULE_SIG=n
EXTRA_CFLAGS = -Wall -g -w
obj-m = example.o
KDIR = /usr/src/linux-headers-5.13.0-37-generic
kbuild:
	make -C $(KDIR) M=`pwd`
clean:
	make -C $(KDIR) M=`pwd` clean