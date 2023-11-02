
@interface ADAnchoredVector : NSObject {
    void _direction;
    void _origin;
}

@property (nonatomic) void direction;
@property (nonatomic) void origin;

+ (id)vectorWithOrigindirection;
+ (id)vectorWithTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;

- (id)description;
- (void)direction;
- (void)intersectWithPlanenormal;
- (void)origin;
- (void)setDirection;
- (void)setOrigin;
- (id)vectorByChangingPOV:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;

@end
