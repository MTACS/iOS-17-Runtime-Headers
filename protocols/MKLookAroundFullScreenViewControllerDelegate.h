
@protocol MKLookAroundFullScreenViewControllerDelegate <NSObject>

@required

- (void)fullScreenViewController:(MKLookAroundFullScreenViewController *)arg1 viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg2 coordinator:(id <UIViewControllerTransitionCoordinator>)arg3;
- (void)fullScreenViewControllerDidDismiss:(MKLookAroundFullScreenViewController *)arg1;
- (void)fullScreenViewControllerDidPresent:(MKLookAroundFullScreenViewController *)arg1;
- (void)fullScreenViewControllerWillDismiss:(MKLookAroundFullScreenViewController *)arg1;
- (void)fullScreenViewControllerWillPresent:(MKLookAroundFullScreenViewController *)arg1;
- (UIView *)viewForFullScreenViewController:(MKLookAroundFullScreenViewController *)arg1;

@end
