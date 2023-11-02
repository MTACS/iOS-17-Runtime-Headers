
@protocol CKBrowserTransitionCoordinatorDelegate <NSObject>

@optional

- (CKAppGrabberView *)appGrabberForBrowserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1;
- (UIImage *)appIconOverride;
- (NSString *)appTitleOverride;
- (void)browserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1 browserWillBecomeInactive:(UIViewController<CKBrowserViewControllerProtocol> *)arg2;
- (void)browserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1 didSwitchToPlugin:(IMBalloonPlugin *)arg2;
- (void)browserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1 didTransitionFromOrientation:(long long)arg2 toOrientation:(long long)arg3;
- (void)browserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1 expandedStateDidChange:(bool)arg2 withReason:(long long)arg3;
- (void)browserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1 hasUpdatedLastTouchDate:(NSDate *)arg2;
- (struct CGSize { double x1; double x2; })browserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1 preferredSizeForBrowser:(UIViewController<CKBrowserViewControllerProtocol> *)arg2;
- (double)browserTransitionCoordinatorCollapsedContentHeight:(CKBrowserTransitionCoordinator *)arg1;
- (void)browserTransitionCoordinatorDidCollapseOrDismiss:(CKBrowserTransitionCoordinator *)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorDidTransitionOrPresentToFullscreen:(CKBrowserTransitionCoordinator *)arg1 withReason:(long long)arg2;
- (bool)browserTransitionCoordinatorShouldDismissOnDragSuccess:(CKBrowserTransitionCoordinator *)arg1;
- (void)browserTransitionCoordinatorWantsPresentationOfAppManager:(CKBrowserTransitionCoordinator *)arg1;
- (void)browserTransitionCoordinatorWantsPresentationOfAppStore:(CKBrowserTransitionCoordinator *)arg1;
- (void)browserTransitionCoordinatorWillCollapseOrDismiss:(CKBrowserTransitionCoordinator *)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorWillTransitionOrPresentToFullscreen:(CKBrowserTransitionCoordinator *)arg1 withReason:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cachedCompactFrameInWindowCoordsForBrowserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1;
- (void)reinsertAppGrabberViewForBrowserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1;
- (bool)shouldAlwaysShowAppTitle;
- (UIViewController *)transitionsPresentationViewController;

@end
