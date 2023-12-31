
@interface EQKitVShift : EQKitBox {
    EQKitBox * mBox;
    double  mOffset;
}

@property (nonatomic, readonly) EQKitBox *box;
@property (nonatomic, readonly) double offset;

- (bool)appendOpticalAlignToSpec:(void*)arg1 offset:(struct CGPoint { double x1; double x2; })arg2;
- (id)box;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)depth;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })erasableBounds;
- (double)height;
- (id)init;
- (id)initWithBox:(id)arg1 offset:(double)arg2;
- (bool)isEqual:(id)arg1;
- (double)offset;
- (bool)p_getTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg1 fromDescendant:(id)arg2;
- (void)renderIntoContext:(struct CGContext { }*)arg1 offset:(struct CGPoint { double x1; double x2; })arg2;
- (double)width;

@end
