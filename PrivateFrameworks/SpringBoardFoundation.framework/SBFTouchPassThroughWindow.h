
@interface SBFTouchPassThroughWindow : UIWindow

+ (Class)touchPassThroughRootViewControllerClass;

- (id)description;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithWindowScene:(id)arg1 role:(id)arg2 debugName:(id)arg3;

@end
