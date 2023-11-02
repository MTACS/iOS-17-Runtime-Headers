
@interface IPAMutableRegion : IPARegion

- (void)addRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)addRectArray:(id)arg1;
- (void)addRegion:(id)arg1;
- (void)applyAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)applyOrientation:(long long)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
- (void)clear;
- (void)clipToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)clipToRectArray:(id)arg1;
- (void)clipToRegion:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)diffWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)diffWithRegion:(id)arg1;
- (void)flipInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)growBy:(struct CGPoint { double x1; double x2; })arg1;
- (void)growBy:(struct CGPoint { double x1; double x2; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)removeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)removeRectArray:(id)arg1;
- (void)removeRegion:(id)arg1;
- (void)roundDown;
- (void)roundUp;
- (void)scaleBy:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRegion:(id)arg1;
- (void)shrinkBy:(struct CGPoint { double x1; double x2; })arg1;
- (void)shrinkBy:(struct CGPoint { double x1; double x2; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)translateBy:(struct CGPoint { double x1; double x2; })arg1;

@end
