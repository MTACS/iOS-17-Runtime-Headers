
@interface EQKitHVSpace : EQKitBox {
    double  mDepth;
    double  mHeight;
    double  mWidth;
}

@property (nonatomic, readonly) double depth;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) double layoutDepth;
@property (nonatomic, readonly) double layoutHeight;
@property (nonatomic, readonly) double width;

- (bool)appendOpticalAlignToSpec:(void*)arg1 offset:(struct CGPoint { double x1; double x2; })arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)depth;
- (id)description;
- (double)height;
- (id)init;
- (id)initWithWidth:(double)arg1 height:(double)arg2 depth:(double)arg3;
- (bool)isEqual:(id)arg1;
- (double)layoutDepth;
- (double)layoutHeight;
- (double)width;

@end
