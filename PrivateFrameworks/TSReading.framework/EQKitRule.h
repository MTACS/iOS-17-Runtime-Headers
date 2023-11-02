
@interface EQKitRule : EQKitBox {
    struct CGColor { } * mCGColor;
    double  mDepth;
    double  mHeight;
    double  mWidth;
}

@property (nonatomic, readonly) struct CGColor { }*color;
@property (nonatomic, readonly) double depth;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) double width;

- (bool)appendOpticalAlignToSpec:(void*)arg1 offset:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGColor { }*)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)depth;
- (id)description;
- (double)height;
- (id)init;
- (id)initWithHeight:(double)arg1 depth:(double)arg2 width:(double)arg3 cgColor:(struct CGColor { }*)arg4;
- (bool)isEqual:(id)arg1;
- (void)renderIntoContext:(struct CGContext { }*)arg1 offset:(struct CGPoint { double x1; double x2; })arg2;
- (double)width;

@end
