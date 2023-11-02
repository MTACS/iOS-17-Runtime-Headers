
@protocol CSPasscodeViewControllerDelegate

@required

- (void)passcodeViewController:(CSPasscodeViewController *)arg1 didCompletePasscodeEntry:(bool)arg2;
- (void)passcodeViewControllerDidBeginPasscodeEntry:(CSPasscodeViewController *)arg1;
- (void)passcodeViewControllerDidCancelPasscodeEntry:(CSPasscodeViewController *)arg1;
- (bool)passcodeViewControllerShouldHideStatusBar:(CSPasscodeViewController *)arg1;

@end
