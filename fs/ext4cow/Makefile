#
# Makefile for the linux ext4cow-filesystem routines.
#

obj-$(CONFIG_EXT4COW_FS) += ext4cow.o

ext4cow-y	:= balloc.o bitmap.o dir.o file.o fsync.o ialloc.o inode.o \
	   ioctl.o namei.o super.o symlink.o hash.o resize.o ext4cow_jbd.o

ext4cow-$(CONFIG_EXT4COW_FS_XATTR)	 += xattr.o xattr_user.o xattr_trusted.o
ext4cow-$(CONFIG_EXT4COW_FS_POSIX_ACL) += acl.o
ext4cow-$(CONFIG_EXT4COW_FS_SECURITY)	 += xattr_security.o
