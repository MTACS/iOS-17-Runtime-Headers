
@protocol SBAppSwitcherPageViewDelegate <NSObject>

@required

- (void)appSwitcherPageView:(SBAppSwitcherPageView *)arg1 pointerIsHoveringOverEdge:(unsigned long long)arg2;
- (bool)appSwitcherPageView:(SBAppSwitcherPageView *)arg1 shouldBeginPointerInteractionAtLocation:(struct CGPoint { double x1; double x2; })arg2 window:(UIWindow *)arg3;
- (double)currentStatusBarHeight;

@end
