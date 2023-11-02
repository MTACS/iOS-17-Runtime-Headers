
@protocol AVPlayerViewControllerDelegatePrivate <AVPlayerViewControllerDelegate>

@optional

- (void)dismissPlayerViewController:(AVPlayerViewController *)arg1;
- (void)playerViewController:(AVPlayerViewController *)arg1 contentViewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg2 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg3;
- (NSString *)playerViewController:(AVPlayerViewController *)arg1 displayNameForMediaSelectionOption:(AVMediaSelectionOption *)arg2;
- (UIView *)playerViewController:(AVPlayerViewController *)arg1 targetViewForDismissalAnimationWithProposedTargetView:(UIView *)arg2;
- (void)playerViewController:(AVPlayerViewController *)arg1 willResumePlaybackAfterUserNavigatedFromDate:(NSDate *)arg2 toDate:(NSDate *)arg3;
- (void)playerViewController:(AVPlayerViewController *)arg1 willTransitionToVisibilityOfPlaybackControls:(bool)arg2 withAnimationCoordinator:(id <AVPlayerViewControllerAnimationCoordinator>)arg3;
- (bool)playerViewControllerShouldHandleDoneButtonTap:(AVPlayerViewController *)arg1;
- (bool)playerViewControllerShouldMuteVolumeForFullScreenDismissalTransition:(AVPlayerViewController *)arg1;
- (void)playerViewControllerWillPerformAnalysisCalloutAction:(AVPlayerViewController *)arg1;

@end
