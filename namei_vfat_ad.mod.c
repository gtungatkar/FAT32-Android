#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xa7672d5a, "module_layout" },
	{ 0x771df0b, "fat_detach" },
	{ 0x20623cac, "kmalloc_caches" },
	{ 0x405c1144, "get_seconds" },
	{ 0x4575315d, "utf8s_to_utf16s" },
	{ 0xdc68b438, "mark_buffer_dirty_inode" },
	{ 0xad436ecb, "__mark_inode_dirty" },
	{ 0xb279da12, "pv_lock_ops" },
	{ 0x973873ab, "_spin_lock" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0xf9542bcc, "d_find_alias" },
	{ 0x517b0978, "names_cachep" },
	{ 0x4d8f9eb5, "unlock_super" },
	{ 0x2aeeda1, "mutex_unlock" },
	{ 0x218863b6, "fat_sync_inode" },
	{ 0xcdc68289, "fat_add_entries" },
	{ 0x7d11c268, "jiffies" },
	{ 0xf2cc8bf6, "fat_remove_entries" },
	{ 0x36c00ab8, "inode_setattr" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa154b8a, "fat_alloc_new_dir" },
	{ 0xd1f9192f, "fat_fill_super" },
	{ 0xcb8b84f7, "fat_build_inode" },
	{ 0x8d3894f2, "_ctype" },
	{ 0xb72397d5, "printk" },
	{ 0xbbdb7a1e, "fat_attach" },
	{ 0xc759e847, "fat_fs_error" },
	{ 0xb4390f9a, "mcount" },
	{ 0xaacd0601, "d_move" },
	{ 0x6c2e3320, "strncmp" },
	{ 0xd4c2b58d, "kmem_cache_free" },
	{ 0xb413f0f, "mutex_lock" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xdc2103a8, "sync_dirty_buffer" },
	{ 0xd24b3053, "fat_getattr" },
	{ 0xfa733bba, "fput" },
	{ 0x92e28bf3, "__brelse" },
	{ 0x61651be, "strcat" },
	{ 0x6eb25b1e, "kmem_cache_alloc" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdd74b98d, "kill_block_super" },
	{ 0xa5c65e01, "fat_search_long" },
	{ 0x21b0c2ea, "inode_change_ok" },
	{ 0x978f2cdf, "fat_scan" },
	{ 0x898e62b4, "register_filesystem" },
	{ 0x9d75c1b6, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x97e225b7, "d_splice_alias" },
	{ 0x41447783, "get_sb_bdev" },
	{ 0xbb6885ae, "fat_free_clusters" },
	{ 0xc960d614, "fat_get_dotdot_entry" },
	{ 0xe4c62ce7, "unregister_filesystem" },
	{ 0xc15f4fee, "lock_super" },
	{ 0xaf005041, "fat_time_unix2fat" },
	{ 0x701d0ebd, "snprintf" },
	{ 0xf96c7bea, "fat_dir_empty" },
	{ 0xb041d4cb, "d_instantiate" },
	{ 0xe914e41e, "strcpy" },
	{ 0x15307093, "filp_open" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fat";


MODULE_INFO(srcversion, "7432555C3B5AACCCA61E748");
