
@protocol _UINavigationBarDelegatePrivate <UINavigationBarDelegate>

@optional

- (double)_customNavigationTransitionDuration;
- (bool)_hasInterruptibleNavigationTransition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_incomingNavigationBarFrame;
- (bool)_isInteractiveCustomNavigationTransition;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })_layoutMarginsforNavigationBar:(UINavigationBar *)arg1;
- (bool)_navigationBar:(UINavigationBar *)arg1 getContentOffsetOfObservedScrollViewIfApplicable:(struct CGPoint { double x1; double x2; }*)arg2;
- (void)_navigationBar:(UINavigationBar *)arg1 itemBackButtonUpdated:(UINavigationItem *)arg2;
- (void)_navigationBar:(UINavigationBar *)arg1 itemEnabledAutoScrollTransition:(UINavigationItem *)arg2;
- (double)_navigationBar:(UINavigationBar *)arg1 preferredHeightForTransitionToHeightRange:(struct { double x1; double x2; double x3; })arg2;
- (void)_navigationBar:(UINavigationBar *)arg1 requestPopToItem:(UINavigationItem *)arg2;
- (void)_navigationBar:(UINavigationBar *)arg1 topItemUpdatedContentLayout:(UINavigationItem *)arg2;
- (void)_navigationBar:(UINavigationBar *)arg1 topItemUpdatedLargeTitleDisplayMode:(UINavigationItem *)arg2;
- (NSArray *)_navigationBarAdditionalActionsForBackButtonMenu:(UINavigationBar *)arg1;
- (void)_navigationBarChangedSize:(UINavigationBar *)arg1;
- (void)_navigationBarDidChangeStyle:(UINavigationBar *)arg1;
- (void)_navigationBarDidEndAnimation:(UINavigationBar *)arg1;
- (void)_navigationBarDidUpdateStack:(UINavigationBar *)arg1;
- (bool)_navigationBarLayoutIsInInteractiveScroll;
- (void)_navigationBarPrepareToAnimateTransition:(UINavigationBar *)arg1;
- (bool)_navigationBarShouldShowSidebarToggleInNSToolbar:(UINavigationBar *)arg1;
- (bool)_navigationBarShouldUpdateProgress;
- (bool)_navigationBarTopItemIsNestedNavigationController:(UINavigationBar *)arg1;
- (void)_navigationBarWillBeginCoordinatedTransitionAnimations:(UINavigationBar *)arg1;
- (void)_navigationBarWillChangeHeightForManualShowOrHideOfSearchScopeBar:(UINavigationBar *)arg1;
- (void)_navigationBarWillRunAutomaticDeferredShowsScopeBar:(UINavigationBar *)arg1;
- (UIWindow *)_navigationBarWindowForInterfaceOrientation:(UINavigationBar *)arg1;
- (void)_navigationItemDidUpdateSearchController:(UINavigationItem *)arg1 oldSearchController:(UISearchController *)arg2;
- (bool)_navigationItemShouldDeferSearchPresentationOrDismissalForScrollViewAnimation:(UINavigationItem *)arg1;
- (void)_popNavigationBar:(UINavigationBar *)arg1 item:(UINavigationItem *)arg2;
- (bool)_shouldCrossFadeNavigationBar;
- (<UIViewControllerTransitionCoordinator> *)_transitionCoordinator;
- (void)_updatePaletteConstraints;
- (void)_updatePalettesWithBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _UINavigationControllerPalette *, void*
- (bool)_willPerformCustomNavigationTransitionForPop;
- (bool)_willPerformCustomNavigationTransitionForPush;
- (bool)enableBackButtonDuringTransition;
- (bool)isNavigationBarHidden;
- (void)navigationBarDidChangeOpacity:(UINavigationBar *)arg1;
- (void)navigationBarDidResizeForPrompt:(UINavigationBar *)arg1;

@end
