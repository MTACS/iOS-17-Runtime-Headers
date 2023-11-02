
@protocol SBSwitcherShelfViewControllerDelegate <NSObject>

@required

- (void)switcherShelfViewController:(SBSwitcherShelfViewController *)arg1 didFinishPresentation:(bool)arg2;
- (bool)switcherShelfViewController:(SBSwitcherShelfViewController *)arg1 hitTestedToTopAffordance:(struct CGPoint { double x1; double x2; })arg2 window:(UIWindow *)arg3;
- (UIView *)switcherShelfViewController:(SBSwitcherShelfViewController *)arg1 liveViewForAppLayout:(SBAppLayout *)arg2;

@end
