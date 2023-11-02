
@interface CM3DRetargetedSkeletonTransform : NSObject {
    void _position;
    struct { 
        /* Warning: Unrecognized filer type: '}' using 'void*' */ void*vector; 
    }  _quaternion;
    int  _type;
}

@property (nonatomic) void position;
@property (nonatomic) struct { } quaternion;
@property (nonatomic) int type;

- (void)position;
- (struct { })quaternion;
- (void)setPosition;
- (void)setQuaternion:(struct { })arg1;
- (void)setType:(int)arg1;
- (int)type;

@end
