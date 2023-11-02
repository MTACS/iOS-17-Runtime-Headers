
@interface EQKitVSpace : EQKitBox {
    double  mDepth;
    double  mHeight;
}

@property (nonatomic, readonly) double depth;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) double layoutDepth;
@property (nonatomic, readonly) double layoutHeight;

- (bool)appendOpticalAlignToSpec:(void*)arg1 offset:(struct CGPoint { double x1; double x2; })arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)depth;
- (id)description;
- (double)height;
- (id)init;
- (id)initWithHeight:(double)arg1 depth:(double)arg2;
- (bool)isEqual:(id)arg1;
- (double)layoutDepth;
- (double)layoutHeight;

@end
