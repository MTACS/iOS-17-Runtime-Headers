
@protocol AVFullScreenViewControllerDelegate <NSObject>

@required

- (void)fullScreenViewController:(AVFullScreenViewController *)arg1 viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg2 coordinator:(id <UIViewControllerTransitionCoordinator>)arg3;
- (void)fullScreenViewControllerDidAttachContentView:(AVFullScreenViewController *)arg1;
- (void)fullScreenViewControllerWillAttachContentView:(AVFullScreenViewController *)arg1;
- (void)fullScreenViewControllerWillBeginFullScreenPresentation:(AVFullScreenViewController *)arg1;
- (void)fullScreenViewControllerWillEndFullScreenPresentation:(AVFullScreenViewController *)arg1;
- (UIResponder *)keyCommandResponderForFullScreenViewController:(AVFullScreenViewController *)arg1;
- (UIView *)playbackContainerViewForFullScreenViewController:(AVFullScreenViewController *)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (long long)preferredStatusStyleForFullScreenViewController:(AVFullScreenViewController *)arg1;
- (bool)prefersStatusBarHiddenForFullScreenViewController:(AVFullScreenViewController *)arg1;
- (bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (UIView *)viewForFullScreenViewController:(AVFullScreenViewController *)arg1;

@end
