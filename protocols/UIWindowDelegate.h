
@protocol UIWindowDelegate <NSObject>

@optional

- (void)getRotationContentSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; double x6; int x7; }*)arg1 forWindow:(UIWindow *)arg2;
- (UIView *)rotatingContentViewForWindow:(UIWindow *)arg1;
- (UIView *)rotatingFooterViewForWindow:(UIWindow *)arg1;
- (UIView *)rotatingHeaderViewForWindow:(UIWindow *)arg1;
- (UIView *)rotatingSnapshotViewForWindow:(UIWindow *)arg1;
- (bool)shouldWindowUseOnePartInterfaceRotationAnimation:(UIWindow *)arg1;
- (void)window:(UIWindow *)arg1 didAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg2;
- (void)window:(UIWindow *)arg1 didRotateFromInterfaceOrientation:(long long)arg2;
- (bool)window:(UIWindow *)arg1 shouldAutorotateToInterfaceOrientation:(long long)arg2;
- (void)window:(UIWindow *)arg1 willAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (void)window:(UIWindow *)arg1 willAnimateFromContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)window:(UIWindow *)arg1 willAnimateRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (void)window:(UIWindow *)arg1 willAnimateSecondHalfOfRotationFromInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (void)window:(UIWindow *)arg1 willRotateToInterfaceOrientation:(long long)arg2 duration:(double)arg3;

@end
