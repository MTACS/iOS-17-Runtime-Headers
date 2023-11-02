
@protocol UISplitViewControllerDelegatePrivate

@optional

- (bool)_splitViewController:(UISplitViewController *)arg1 allowInteractivePresentationGesture:(UIGestureRecognizer *)arg2 inContentsOfColumn:(long long)arg3;
- (<UIViewControllerAnimatedTransitioning> *)_splitViewController:(UISplitViewController *)arg1 animationControllerForTransitionFromDisplayMode:(long long)arg2 toDisplayMode:(long long)arg3;
- (bool)_splitViewController:(UISplitViewController *)arg1 collapseSecondaryViewController:(UIViewController *)arg2 ontoPrimaryViewController:(UIViewController *)arg3 forRestorationOfCollapsedWhileSuspendedWithPrimaryVisible:(bool)arg4;
- (double)_splitViewController:(UISplitViewController *)arg1 constrainPrimaryColumnWidthForResizeWidth:(double)arg2;
- (double)_splitViewController:(UISplitViewController *)arg1 constrainSupplementaryColumnWidthForResizeWidth:(double)arg2;
- (void)_splitViewController:(UISplitViewController *)arg1 didChangeFromDisplayMode:(long long)arg2 toDisplayMode:(long long)arg3;
- (void)_splitViewController:(UISplitViewController *)arg1 didEndResizingColumn:(long long)arg2;
- (void)_splitViewController:(UISplitViewController *)arg1 didFinishExpandToDisplayMode:(long long)arg2;
- (bool)_splitViewController:(UISplitViewController *)arg1 shouldDisplaySidebarWithReason:(long long)arg2 withHeading:(unsigned long long)arg3;
- (void)_splitViewController:(UISplitViewController *)arg1 willBeginResizingColumn:(long long)arg2;
- (void)_splitViewControllerInteractiveSidebarGestureDidEnd:(UISplitViewController *)arg1;
- (void)_splitViewControllerInteractiveSidebarGestureWillBegin:(UISplitViewController *)arg1;
- (bool)_splitViewControllerIsPrimaryVisible:(UISplitViewController *)arg1;
- (bool)_splitViewControllerShouldRestoreResponderAfterTraitCollectionTransition:(UISplitViewController *)arg1;

@end
