
@protocol SBHShadowViewFrameProviding

@required

+ (bool)supportsMaterialsBasedShadow;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameWithContentWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setUseMaterialBasedShadow:(bool)arg1;
- (bool)useMaterialBasedShadow;

@end
