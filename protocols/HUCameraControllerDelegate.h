
@protocol HUCameraControllerDelegate <NSObject>

@required

- (UIViewController<HUPresentationDelegateHost> *)detailsViewControllerForCameraItem:(HFCameraItem *)arg1;
- (void)didDismissCameraController:(HUCameraController *)arg1 forProfile:(HMCameraProfile *)arg2;
- (UIView *)targetViewForDismissingCameraProfile:(HMCameraProfile *)arg1;

@end
