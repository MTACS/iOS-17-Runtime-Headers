
@protocol AVPlayerViewControllerDelegate_WebKitOnly <AVPlayerViewControllerDelegate>

@optional

- (bool)playerViewController:(AVPlayerViewController *)arg1 shouldExitFullScreenWithReason:(long long)arg2;
- (void)playerViewControllerBeginReducingResourcesForPictureInPicture:(AVPlayerViewController *)arg1;
- (void)playerViewControllerEndReducingResourcesForPictureInPicture:(AVPlayerViewController *)arg1;
- (bool)playerViewControllerShouldStartPictureInPictureFromInlineWhenEnteringBackground:(AVPlayerViewController *)arg1;

@end
