
@protocol SBFluidSwitcherGestureExclusionShape <NSObject>

@required

- (UIView *)debugView;
- (bool)shouldBeginGestureAtStartingPoint:(struct CGPoint { double x1; double x2; })arg1 velocity:(struct CGPoint { double x1; double x2; })arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;

@end