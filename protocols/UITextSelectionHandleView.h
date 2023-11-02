
@protocol UITextSelectionHandleView <UICoordinateSpace>

@required

- (UIBezierPath *)customShape;
- (unsigned long long)direction;
- (bool)isVertical;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })preferredFrameForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCustomShape:(UIBezierPath *)arg1;
- (void)setDirection:(unsigned long long)arg1;

@end
