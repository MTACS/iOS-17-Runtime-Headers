
@protocol VUIPlaybackContainerViewControllerDelegate <NSObject>

@required

- (void)playbackContainerViewControllerBackgroundPlaybackWillBegin:(UIViewController<VUIPlaybackContainerViewController> *)arg1;
- (void)playbackContainerViewControllerDidAutoPlay:(UIViewController<VUIPlaybackContainerViewController> *)arg1;
- (void)playbackContainerViewControllerDidDisappear:(UIViewController<VUIPlaybackContainerViewController> *)arg1;
- (void)playbackContainerViewControllerDidFinishLoadingPostPlay:(UIViewController<VUIPlaybackContainerViewController> *)arg1;
- (void)playbackContainerViewControllerExitPictureInPicturePressed:(UIViewController<VUIPlaybackContainerViewController> *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })playbackContainerViewControllerPiPFrameForCurrentPlayback:(UIViewController<VUIPlaybackContainerViewController> *)arg1;

@end
