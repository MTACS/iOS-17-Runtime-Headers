
@protocol _UINavigationPalette <NSObject>

@required

- (UIView *)_backgroundView;
- (bool)_paletteOverridesPinningBar;
- (void)_setBackgroundView:(UIView *)arg1;
- (void)_setLeftConstraintConstant:(double)arg1;
- (void)_setPaletteOverridesPinningBar:(bool)arg1;
- (void)_setTopConstraintConstant:(double)arg1;
- (unsigned long long)boundaryEdge;
- (bool)isAttached;
- (bool)isPinned;
- (bool)isVisibleWhenPinningBarIsHidden;
- (UINavigationController *)navController;
- (bool)paletteIsHidden;
- (bool)paletteShadowIsHidden;
- (bool)pinningBarShadowIsHidden;
- (bool)pinningBarShadowWasHidden;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })preferredContentInsets;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isAnimating:(bool)arg2;
- (void)setPaletteShadowIsHidden:(bool)arg1;
- (void)setPinned:(bool)arg1;
- (void)setPinningBarShadowIsHidden:(bool)arg1;
- (void)setPinningBarShadowWasHidden:(bool)arg1;
- (void)setPreferredContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setVisibleWhenPinningBarIsHidden:(bool)arg1;

@end
