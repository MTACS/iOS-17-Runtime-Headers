
@protocol UISplitViewControllerDelegate

@optional

- (UIViewController *)primaryViewControllerForCollapsingSplitViewController:(UISplitViewController *)arg1;
- (UIViewController *)primaryViewControllerForExpandingSplitViewController:(UISplitViewController *)arg1;
- (bool)splitViewController:(UISplitViewController *)arg1 collapseSecondaryViewController:(UIViewController *)arg2 ontoPrimaryViewController:(UIViewController *)arg3;
- (long long)splitViewController:(UISplitViewController *)arg1 displayModeForExpandingToProposedDisplayMode:(long long)arg2;
- (void)splitViewController:(UISplitViewController *)arg1 popoverController:(UIPopoverController *)arg2 willPresentViewController:(UIViewController *)arg3;
- (UIViewController *)splitViewController:(UISplitViewController *)arg1 separateSecondaryViewControllerFromPrimaryViewController:(UIViewController *)arg2;
- (bool)splitViewController:(UISplitViewController *)arg1 shouldHideViewController:(UIViewController *)arg2 inOrientation:(long long)arg3;
- (bool)splitViewController:(UISplitViewController *)arg1 showDetailViewController:(UIViewController *)arg2 sender:(id)arg3;
- (bool)splitViewController:(UISplitViewController *)arg1 showViewController:(UIViewController *)arg2 sender:(id)arg3;
- (long long)splitViewController:(UISplitViewController *)arg1 topColumnForCollapsingToProposedTopColumn:(long long)arg2;
- (void)splitViewController:(UISplitViewController *)arg1 willChangeToDisplayMode:(long long)arg2;
- (void)splitViewController:(UISplitViewController *)arg1 willHideColumn:(long long)arg2;
- (void)splitViewController:(UISplitViewController *)arg1 willHideViewController:(UIViewController *)arg2 withBarButtonItem:(UIBarButtonItem *)arg3 forPopoverController:(UIPopoverController *)arg4;
- (void)splitViewController:(UISplitViewController *)arg1 willShowColumn:(long long)arg2;
- (void)splitViewController:(UISplitViewController *)arg1 willShowViewController:(UIViewController *)arg2 invalidatingBarButtonItem:(UIBarButtonItem *)arg3;
- (void)splitViewControllerDidCollapse:(UISplitViewController *)arg1;
- (void)splitViewControllerDidExpand:(UISplitViewController *)arg1;
- (void)splitViewControllerInteractivePresentationGestureDidEnd:(UISplitViewController *)arg1;
- (void)splitViewControllerInteractivePresentationGestureWillBegin:(UISplitViewController *)arg1;
- (long long)splitViewControllerPreferredInterfaceOrientationForPresentation:(UISplitViewController *)arg1;
- (unsigned long long)splitViewControllerSupportedInterfaceOrientations:(UISplitViewController *)arg1;
- (long long)targetDisplayModeForActionInSplitViewController:(UISplitViewController *)arg1;

@end
