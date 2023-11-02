
@interface EQKitHBox : EQKitCompoundBox

- (bool)appendOpticalAlignToSpec:(void*)arg1 offset:(struct CGPoint { double x1; double x2; })arg2;
- (void)p_cacheDimensionsForHeight:(double*)arg1 depth:(double*)arg2 width:(double*)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_cacheErasableBounds;
- (bool)p_getTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg1 fromDescendant:(id)arg2;
- (void)renderIntoContext:(struct CGContext { }*)arg1 offset:(struct CGPoint { double x1; double x2; })arg2;

@end
