
@protocol UIPanelControllerDelegate <NSObject>

@optional

- (void)panelController:(UIPanelController *)arg1 adjustLeadingViewController:(UIViewController *)arg2 forKeyboardInfo:(NSDictionary *)arg3;
- (void)panelController:(UIPanelController *)arg1 adjustTrailingViewController:(UIViewController *)arg2 forKeyboardInfo:(NSDictionary *)arg3;
- (void)panelController:(UIPanelController *)arg1 animateTransitionToStateRequest:(UISlidingBarStateRequest *)arg2 predictedEndState:(UISlidingBarState *)arg3 predictedDuration:(double)arg4;
- (bool)panelController:(UIPanelController *)arg1 collapseOntoPrimaryViewController:(UIViewController *)arg2;
- (bool)panelController:(UIPanelController *)arg1 collapsePrimaryViewController:(UIViewController *)arg2 withFallbackSecondaryViewController:(UIViewController *)arg3 onTopOfSupplementaryViewController:(UIViewController *)arg4 transitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg5;
- (void)panelController:(UIPanelController *)arg1 collapsePrimaryViewController:(UIViewController *)arg2 withFallbackSecondaryViewController:(UIViewController *)arg3 transitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg4;
- (void)panelController:(UIPanelController *)arg1 didChangeToState:(UISlidingBarState *)arg2 withSize:(struct CGSize { double x1; double x2; })arg3;
- (void)panelController:(UIPanelController *)arg1 didEndAnimatedTransitionToStateRequest:(UISlidingBarStateRequest *)arg2;
- (double)panelController:(UIPanelController *)arg1 expectedWidthForColumnForViewController:(UIViewController *)arg2;
- (UINavigationBar *)panelController:(UIPanelController *)arg1 navigationBarForViewController:(UIViewController *)arg2;
- (UIViewController *)panelController:(UIPanelController *)arg1 separateSecondaryViewControllerFromPrimaryViewController:(UIViewController *)arg2;
- (UIViewController *)panelController:(UIPanelController *)arg1 separateSupplementaryViewControllerFromPrimaryViewController:(UIViewController *)arg2;
- (<UIViewControllerAnimatedTransitioning> *)panelController:(UIPanelController *)arg1 willBeginAnimatedTransitionToStateRequest:(UISlidingBarStateRequest *)arg2 predictedEndState:(UISlidingBarState *)arg3 predictedDuration:(double)arg4;
- (void)panelController:(UIPanelController *)arg1 willBeginAnimationToPrimarySize:(struct CGSize { double x1; double x2; })arg2 supplementarySize:(struct CGSize { double x1; double x2; })arg3 secondarySize:(struct CGSize { double x1; double x2; })arg4;
- (void)panelController:(UIPanelController *)arg1 willChangeToState:(UISlidingBarState *)arg2;
- (void)panelControllerDidCollapse:(UIPanelController *)arg1;
- (void)panelControllerDidExpand:(UIPanelController *)arg1;
- (id /* block */)panelControllerWillUpdate:(void *)arg1; // needs 1 arg types, found 7: id /* block */, NSArray *, bool*, void*, id, SEL, UIPanelController *
- (UIColor *)primaryBackgroundColor;
- (UIViewController *)primaryViewControllerForCollapsingPanelController:(UIPanelController *)arg1;
- (UIViewController *)primaryViewControllerForExpandingPanelController:(UIPanelController *)arg1;
- (long long)topColumnForCollapsingPanelController:(UIPanelController *)arg1;
- (Class)viewClassForPanelController:(UIPanelController *)arg1;

@end
