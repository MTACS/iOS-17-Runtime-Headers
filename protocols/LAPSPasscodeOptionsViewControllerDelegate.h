
@protocol LAPSPasscodeOptionsViewControllerDelegate <NSObject>

@required

- (void)passcodeOptionsViewController:(id <LAPSPasscodeOptionsViewController>)arg1 didSelectPasscodeType:(LAPSPasscodeType *)arg2;
- (void)passcodeOptionsViewController:(id <LAPSPasscodeOptionsViewController>)arg1 didSetPasscodeRecoveryEnabled:(bool)arg2;
- (void)passcodeOptionsViewControllerDidDisappear:(id <LAPSPasscodeOptionsViewController>)arg1;

@end
