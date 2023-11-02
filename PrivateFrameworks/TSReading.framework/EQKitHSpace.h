
@interface EQKitHSpace : EQKitBox {
    double  mWidth;
}

@property (nonatomic, readonly) double width;

- (bool)appendOpticalAlignToSpec:(void*)arg1 offset:(struct CGPoint { double x1; double x2; })arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithWidth:(double)arg1;
- (bool)isEqual:(id)arg1;
- (double)width;

@end
