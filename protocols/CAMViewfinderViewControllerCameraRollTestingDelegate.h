
@protocol CAMViewfinderViewControllerCameraRollTestingDelegate <NSObject>

@required

- (void)viewfinderViewController:(CAMViewfinderViewController *)arg1 didDismissPresentedCameraRoll:(CAMCameraRollController *)arg2;
- (void)viewfinderViewController:(CAMViewfinderViewController *)arg1 didPresentCameraRoll:(CAMCameraRollController *)arg2;
- (void)viewfinderViewController:(CAMViewfinderViewController *)arg1 willPresentCameraRoll:(CAMCameraRollController *)arg2 withOneUpController:(PUOneUpViewController *)arg3;

@end
