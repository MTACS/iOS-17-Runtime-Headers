
@interface MCMFSNode : NSObject <NSCopying> {
    long long  _ctime;
    int  _device;
    unsigned long long  _inode;
}

@property (nonatomic, readonly) long long ctime;
@property (nonatomic, readonly) int device;
@property (nonatomic, readonly) unsigned long long inode;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)ctime;
- (id)description;
- (int)device;
- (unsigned long long)hash;
- (id)initWithINode:(unsigned long long)arg1 device:(int)arg2 ctime:(long long)arg3;
- (id)initWithStat:(struct stat { int x1; unsigned short x2; unsigned short x3; unsigned long long x4; unsigned int x5; unsigned int x6; int x7; struct timespec { long long x_8_1_1; long long x_8_1_2; } x8; struct timespec { long long x_9_1_1; long long x_9_1_2; } x9; struct timespec { long long x_10_1_1; long long x_10_1_2; } x10; struct timespec { long long x_11_1_1; long long x_11_1_2; } x11; long long x12; long long x13; int x14; unsigned int x15; unsigned int x16; int x17; long long x18[2]; }*)arg1;
- (unsigned long long)inode;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFSNode:(id)arg1;

@end
