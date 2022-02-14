CONFIG_MODULE_SIG=n
EXTRA_CFLAGS = -Wall -g
obj-m = example.o
KDIR = /usr/src/linux-headers-5.11.0-46-generic
kbuild:
	make -C $(KDIR) M=`pwd`
clean:
	make -C $(KDIR) M=`pwd` clean