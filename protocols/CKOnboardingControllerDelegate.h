
@protocol CKOnboardingControllerDelegate <NSObject>

@required

- (void)onboardingControllerDidFinish:(CKOnboardingController *)arg1;
- (UIViewController *)presentingViewControllerForOnboardingController:(CKOnboardingController *)arg1;

@end
