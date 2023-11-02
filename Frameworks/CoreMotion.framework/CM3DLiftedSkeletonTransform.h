
@interface CM3DLiftedSkeletonTransform : NSObject {
    void _position;
    int  _type;
}

@property (nonatomic) void position;
@property (nonatomic) int type;

- (void)position;
- (void)setPosition;
- (void)setType:(int)arg1;
- (int)type;

@end
