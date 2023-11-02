
@protocol PKPaymentCameraCaptureViewControllerDelegate <NSObject>

@required

- (void)cameraCaptureViewController:(UIViewController *)arg1 didRecognizeObjects:(NSArray *)arg2;
- (void)cameraCaptureViewControllerDidFail:(UIViewController *)arg1;
- (void)cameraCaptureViewControllerDidSelectManualEntry:(UIViewController *)arg1;
- (void)cameraCaptureViewControllerDidSelectSetupLater:(UIViewController *)arg1;

@end
