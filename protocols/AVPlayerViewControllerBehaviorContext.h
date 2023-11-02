
@protocol AVPlayerViewControllerBehaviorContext <NSObject>

@optional

- (void)contentViewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
- (void)didStopPictureInPicture;
- (UIView<AVPlaybackContentContainer> *)makePlaybackContentContainerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 activeContentView:(AVPlaybackContentContainerView *)arg2;
- (void)playerControllerDidChange;
- (void)viewDidLoad;
- (void)willEnterFullScreen;
- (void)willExitFullScreen;
- (void)willStartPictureInPictureWithViewController:(UIViewController *)arg1;

@end
