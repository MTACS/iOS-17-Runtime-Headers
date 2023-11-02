
@protocol FramingSpaceManager

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustDisplayRectToFitInFramingSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })framingSpaceBounds;
- (float)getHeightDerivativeForWidth:(float)arg1 widthDerivative:(float)arg2;
- (float)getHeightForWidth:(float)arg1;
- (float)getWidthForHeight:(float)arg1;
- (bool)isFrontCamera;
- (float)maxAllowedViewportWidth;
- (void)setIsFrontCamera:(bool)arg1;

@end
