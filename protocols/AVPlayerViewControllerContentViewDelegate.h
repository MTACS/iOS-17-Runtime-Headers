
@protocol AVPlayerViewControllerContentViewDelegate <NSObject>

@required

- (void)playerViewControllerContentView:(AVPlayerViewControllerContentView *)arg1 didMoveToWindow:(UIWindow *)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })playerViewControllerContentViewEdgeInsetsForLetterboxedVideo:(AVPlayerViewControllerContentView *)arg1;
- (bool)playerViewControllerContentViewIsPlayingOnSecondScreen:(AVPlayerViewControllerContentView *)arg1;

@end
