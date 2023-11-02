
@protocol AVPlayerViewControllerDelegate <NSObject>

@optional

- (UIViewController *)nextChannelInterstitialViewControllerForPlayerViewController:(AVPlayerViewController *)arg1;
- (void)playerViewController:(AVPlayerViewController *)arg1 didAcceptContentProposal:(AVContentProposal *)arg2;
- (void)playerViewController:(AVPlayerViewController *)arg1 didPresentInterstitialTimeRange:(AVInterstitialTimeRange *)arg2;
- (void)playerViewController:(AVPlayerViewController *)arg1 didRejectContentProposal:(AVContentProposal *)arg2;
- (void)playerViewController:(AVPlayerViewController *)arg1 didSelectExternalSubtitleOptionLanguage:(NSString *)arg2;
- (void)playerViewController:(AVPlayerViewController *)arg1 didSelectMediaSelectionOption:(AVMediaSelectionOption *)arg2 inMediaSelectionGroup:(AVMediaSelectionGroup *)arg3;
- (void)playerViewController:(AVPlayerViewController *)arg1 failedToStartPictureInPictureWithError:(NSError *)arg2;
- (void)playerViewController:(void *)arg1 restoreUserInterfaceForFullScreenExitWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: AVPlayerViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)playerViewController:(void *)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: AVPlayerViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)playerViewController:(AVPlayerViewController *)arg1 shouldPresentContentProposal:(AVContentProposal *)arg2;
- (void)playerViewController:(void *)arg1 skipToNextChannel:(void *)arg2; // needs 2 arg types, found 7: AVPlayerViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)playerViewController:(void *)arg1 skipToPreviousChannel:(void *)arg2; // needs 2 arg types, found 7: AVPlayerViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (struct { long long x1; int x2; unsigned int x3; long long x4; })playerViewController:(AVPlayerViewController *)arg1 timeToSeekAfterUserNavigatedFromTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)playerViewController:(AVPlayerViewController *)arg1 willBeginFullScreenPresentationWithAnimationCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
- (void)playerViewController:(AVPlayerViewController *)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
- (void)playerViewController:(AVPlayerViewController *)arg1 willPresentInterstitialTimeRange:(AVInterstitialTimeRange *)arg2;
- (void)playerViewController:(AVPlayerViewController *)arg1 willResumePlaybackAfterUserNavigatedFromTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)playerViewController:(AVPlayerViewController *)arg1 willTransitionToVisibilityOfTransportBar:(bool)arg2 withAnimationCoordinator:(id <AVPlayerViewControllerAnimationCoordinator>)arg3;
- (void)playerViewControllerDidEndDismissalTransition:(AVPlayerViewController *)arg1;
- (void)playerViewControllerDidStartPictureInPicture:(AVPlayerViewController *)arg1;
- (void)playerViewControllerDidStopPictureInPicture:(AVPlayerViewController *)arg1;
- (bool)playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:(AVPlayerViewController *)arg1;
- (bool)playerViewControllerShouldDismiss:(AVPlayerViewController *)arg1;
- (void)playerViewControllerWillBeginDismissalTransition:(AVPlayerViewController *)arg1;
- (void)playerViewControllerWillStartPictureInPicture:(AVPlayerViewController *)arg1;
- (void)playerViewControllerWillStopPictureInPicture:(AVPlayerViewController *)arg1;
- (UIViewController *)previousChannelInterstitialViewControllerForPlayerViewController:(AVPlayerViewController *)arg1;
- (void)skipToNextItemForPlayerViewController:(AVPlayerViewController *)arg1;
- (void)skipToPreviousItemForPlayerViewController:(AVPlayerViewController *)arg1;

@end
