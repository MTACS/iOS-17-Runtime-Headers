
@protocol LAPSPasscodeViewControllerDelegate <NSObject>

@required

- (void)passcodeViewController:(LAPSPasscodeViewController *)arg1 didCancelWithError:(NSError *)arg2;
- (void)passcodeViewController:(LAPSPasscodeViewController *)arg1 verifyPasscode:(LAPSPasscode *)arg2;

@optional

- (void)passcodeViewController:(LAPSPasscodeViewController *)arg1 didSelectPasscodeType:(LAPSPasscodeType *)arg2;
- (void)passcodeViewController:(LAPSPasscodeViewController *)arg1 didSetPasscodeRecoveryEnabled:(bool)arg2;

@end
