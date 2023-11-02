
@interface BRCVolume : NSObject {
    int  _deviceID;
    bool  _hasCloning;
    bool  _hasRenameExcl;
    bool  _hasRenameSwap;
    bool  _isCaseSensitive;
    bool  _isIgnoringOwnership;
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
    }  _stfs;
}

@property (nonatomic, readonly) int deviceID;
@property (nonatomic, readonly) NSNumber *freeSize;
@property (nonatomic, readonly) NSString *fsTypeName;
@property (nonatomic, readonly) bool hasCloning;
@property (nonatomic, readonly) bool hasRenameExcl;
@property (nonatomic, readonly) bool hasRenameSwap;
@property (nonatomic, readonly) bool isCaseSensitive;
@property (nonatomic, readonly) bool isIgnoringOwnership;
@property (nonatomic, readonly) NSString *mountPath;
@property (nonatomic, readonly) NSNumber *totalSize;

- (int)_setUpForStatfs:(struct statfs { unsigned int x1; int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; struct fsid { int x_8_1_1[2]; } x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; BOOL x13[16]; BOOL x14[1024]; BOOL x15[1024]; unsigned int x16; unsigned int x17[7]; })arg1;
- (id)description;
- (int)deviceID;
- (id)freeSize;
- (id)fsTypeName;
- (bool)hasCloning;
- (bool)hasRenameExcl;
- (bool)hasRenameSwap;
- (bool)isCaseSensitive;
- (bool)isIgnoringOwnership;
- (id)mountPath;
- (bool)setUpForRelPath:(id)arg1 error:(id*)arg2;
- (id)totalSize;

@end
