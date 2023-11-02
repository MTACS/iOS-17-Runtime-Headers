
@interface AXPiOSElementData : NSObject <NSCopying> {
    int  _pid;
    struct { 
        unsigned long long elementOrHash; 
        unsigned long long elementID; 
    }  _uid;
}

@property (nonatomic) int pid;
@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; } uid;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)pid;
- (void)setPid:(int)arg1;
- (void)setUid:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (struct { unsigned long long x1; unsigned long long x2; })uid;

@end
