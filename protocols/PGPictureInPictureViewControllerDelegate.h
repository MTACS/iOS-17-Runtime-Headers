
@protocol PGPictureInPictureViewControllerDelegate <NSObject>

@required

- (void)pictureInPictureViewController:(PGPictureInPictureViewController *)arg1 didReceiveCommand:(PGCommand *)arg2;
- (void)pictureInPictureViewController:(PGPictureInPictureViewController *)arg1 didTransitionToStashed:(bool)arg2;
- (void)pictureInPictureViewController:(PGPictureInPictureViewController *)arg1 updateHostedWindowSize:(struct CGSize { double x1; double x2; })arg2 animationType:(long long)arg3 initialSpringVelocity:(double)arg4;
- (void)pictureInPictureViewControllerHostedWindowSizeChangeBegan:(PGPictureInPictureViewController *)arg1;
- (void)pictureInPictureViewControllerHostedWindowSizeChangeEnded:(PGPictureInPictureViewController *)arg1;
- (bool)pictureInPictureViewControllerShouldHideTetheredViewControllerAlongsideControls:(PGPictureInPictureViewController *)arg1;
- (bool)pictureInPictureViewControllerWantsStashTabSuppression:(PGPictureInPictureViewController *)arg1;

@end
