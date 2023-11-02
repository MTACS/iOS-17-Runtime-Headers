
@protocol VUIMultiPlayerViewControllerDelegate <NSObject>

@required

- (UIViewController<VUIMultiPlayerDetailsViewController> *)detailsViewControllerForMultiPlayerViewController:(id <VUIMultiPlayerViewController>)arg1;
- (double)detailsViewHeightForMultiPlayerViewController:(id <VUIMultiPlayerViewController>)arg1;
- (void)multiPlayerViewController:(id <VUIMultiPlayerViewController>)arg1 detailsViewControllerDidAppear:(UIViewController<VUIMultiPlayerDetailsViewController> *)arg2;
- (void)multiPlayerViewController:(id <VUIMultiPlayerViewController>)arg1 detailsViewControllerDidDisappear:(UIViewController<VUIMultiPlayerDetailsViewController> *)arg2;
- (void)multiPlayerViewController:(id <VUIMultiPlayerViewController>)arg1 detailsViewControllerWillAppear:(UIViewController<VUIMultiPlayerDetailsViewController> *)arg2;
- (void)multiPlayerViewController:(id <VUIMultiPlayerViewController>)arg1 detailsViewControllerWillDisappear:(UIViewController<VUIMultiPlayerDetailsViewController> *)arg2;
- (void)multiPlayerViewController:(id <VUIMultiPlayerViewController>)arg1 didBeginDropWithMediaInfo:(VUIMediaInfo *)arg2;
- (void)multiPlayerViewController:(id <VUIMultiPlayerViewController>)arg1 didCrossSupportedScreenSizeBoundary:(bool)arg2;
- (void)multiPlayerViewController:(id <VUIMultiPlayerViewController>)arg1 didDismissWithPlayerViewController:(AVPlayerViewController *)arg2 withReason:(unsigned long long)arg3;
- (void)multiPlayerViewController:(id <VUIMultiPlayerViewController>)arg1 didDropWithMediaInfo:(VUIMediaInfo *)arg2 overPlayerAtIndex:(long long)arg3;
- (void)multiPlayerViewController:(id <VUIMultiPlayerViewController>)arg1 didEndDropWithMediaInfo:(VUIMediaInfo *)arg2;
- (void)multiPlayerViewController:(id <VUIMultiPlayerViewController>)arg1 didEnterFullscreenWithPlayerViewController:(AVPlayerViewController *)arg2;
- (void)multiPlayerViewController:(id <VUIMultiPlayerViewController>)arg1 didExitFullscreenWithPlayerViewController:(AVPlayerViewController *)arg2;
- (void)multiPlayerViewController:(id <VUIMultiPlayerViewController>)arg1 didPinchPlayerToDismiss:(AVPlayerViewController *)arg2;
- (void)multiPlayerViewController:(id <VUIMultiPlayerViewController>)arg1 didRemovePlayer:(AVPlayerViewController *)arg2 atIndex:(long long)arg3;
- (void)multiPlayerViewController:(id <VUIMultiPlayerViewController>)arg1 didSelectPlayerViewController:(AVPlayerViewController *)arg2;
- (void)multiPlayerViewController:(id <VUIMultiPlayerViewController>)arg1 didSwapPlayerViewControllerAtIndex:(long long)arg2 withPlayerAtIndex:(long long)arg3;
- (void)multiPlayerViewController:(id <VUIMultiPlayerViewController>)arg1 willDismissWithPlayerViewController:(AVPlayerViewController *)arg2 withReason:(unsigned long long)arg3;

@end
