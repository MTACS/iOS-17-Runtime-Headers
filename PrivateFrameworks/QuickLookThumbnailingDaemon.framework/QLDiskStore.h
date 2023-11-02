
@interface QLDiskStore : NSObject {
    NSObject<OS_dispatch_queue> * _afterInit;
    unsigned char  _disableCache;
    unsigned char  _disableQuickLook;
    bool  _encrypted;
    struct statfs { 
        unsigned int f_bsize; 
        int f_iosize; 
        unsigned long long f_blocks; 
        unsigned long long f_bfree; 
        unsigned long long f_bavail; 
        unsigned long long f_files; 
        unsigned long long f_ffree; 
        struct fsid { 
            int val[2]; 
        } f_fsid; 
        unsigned int f_owner; 
        unsigned int f_type; 
        unsigned int f_flags; 
        unsigned int f_fssubtype; 
        BOOL f_fstypename[16]; 
        BOOL f_mntonname[1024]; 
        BOOL f_mntfromname[1024]; 
        unsigned int f_flags_ext; 
        unsigned int f_reserved[7]; 
    }  _fs_stat;
    bool  _isExternalEncrypted;
}

@property (readonly) bool acceptsThumbnails;
@property (readonly) unsigned long long availableDiskSpace;
@property unsigned char disableCache;
@property unsigned char disableQuickLook;
@property (readonly) bool distant;
@property (readonly) bool encrypted;
@property struct statfs { unsigned int x1; int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; struct fsid { int x_8_1_1[2]; } x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; BOOL x13[16]; BOOL x14[1024]; BOOL x15[1024]; unsigned int x16; unsigned int x17[7]; } fs_stat;
@property (readonly) bool hasThumbnailCache;
@property (nonatomic) bool isExternalEncrypted;
@property (readonly) const char *mountPath;

+ (id)diskStoreForURL:(id)arg1;
+ (id)diskStores;

- (void).cxx_destruct;
- (bool)acceptsThumbnails;
- (unsigned long long)availableDiskSpace;
- (id)description;
- (unsigned char)disableCache;
- (unsigned char)disableQuickLook;
- (bool)distant;
- (bool)encrypted;
- (void)executeBlock:(id /* block */)arg1 onQueue:(id)arg2;
- (struct statfs { unsigned int x1; int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; struct fsid { int x_8_1_1[2]; } x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; BOOL x13[16]; BOOL x14[1024]; BOOL x15[1024]; unsigned int x16; unsigned int x17[7]; })fs_stat;
- (bool)hasThumbnailCache;
- (id)initWithURL:(id)arg1;
- (bool)isExternalEncrypted;
- (const char *)mountPath;
- (void)setDisableCache:(unsigned char)arg1;
- (void)setDisableQuickLook:(unsigned char)arg1;
- (void)setFs_stat:(struct statfs { unsigned int x1; int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; struct fsid { int x_8_1_1[2]; } x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; BOOL x13[16]; BOOL x14[1024]; BOOL x15[1024]; unsigned int x16; unsigned int x17[7]; })arg1;
- (void)setIsExternalEncrypted:(bool)arg1;

@end
