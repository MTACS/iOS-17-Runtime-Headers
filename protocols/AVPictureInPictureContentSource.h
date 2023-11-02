
@protocol AVPictureInPictureContentSource <NSObject>

@required

- (void)avkit_beginReducingResourcesForPictureInPictureViewController:(AVPictureInPictureViewController *)arg1 playerController:(AVPlayerController *)arg2;
- (long long)avkit_contentSourceType;
- (void)avkit_endReducingResourcesForPictureInPictureViewController:(AVPictureInPictureViewController *)arg1 playerController:(AVPlayerController *)arg2;
- (bool)avkit_isVisible;
- (AVPlayerController *)avkit_makePlayerControllerIfNeeded:(AVPlayerController *)arg1;
- (AVPictureInPictureViewController *)avkit_pictureInPictureViewController;
- (void)avkit_startRoutingVideoToPictureInPictureViewController:(AVPictureInPictureViewController *)arg1;
- (void)avkit_stopRoutingVideoToPictureInPictureViewController:(AVPictureInPictureViewController *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })avkit_videoRectInWindow;
- (bool)avkit_wantsManagedSecondScreenPlayback;
- (void)avkit_willBeginStoppingPictureInPictureForPictureInPictureViewController:(AVPictureInPictureViewController *)arg1;
- (UIWindow *)avkit_window;

@optional

- (bool)avkit_isFullScreen;

@end
