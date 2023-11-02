
@protocol _UITextSelectionWidgetAnimating <NSObject>

@required

- (bool)crossfadeOnDismissal;
- (bool)hiddenForLoupeAnimation;
- (struct { id x1; double x2; double x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; })originShadow;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; double x3; id x4; })originShape;
- (UIView *)originView;
- (void)setHiddenForLoupeAnimation:(bool)arg1;

@end
