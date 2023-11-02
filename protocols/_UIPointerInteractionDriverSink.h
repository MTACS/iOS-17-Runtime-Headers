
@protocol _UIPointerInteractionDriverSink <NSObject>

@required

- (void)driver:(id <_UIPointerInteractionDriver>)arg1 didIssueUpdate:(struct { struct CAPoint3D { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2; long long x3; long long x4; long long x5; bool x6; })arg2;
- (void)driver:(id <_UIPointerInteractionDriver>)arg1 willAttachHoverGestureRecognizer:(UIHoverGestureRecognizer *)arg2 toView:(UIView *)arg3;
- (void)driverDidExit:(id <_UIPointerInteractionDriver>)arg1;

@end
