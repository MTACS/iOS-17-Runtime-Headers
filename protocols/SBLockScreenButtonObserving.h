
@protocol SBLockScreenButtonObserving <NSObject>

@required

- (<SBHomeButtonShowPasscodeRecognizer> *)createHomeButtonShowPasscodeRecognizerForHomeButtonPress;
- (<SBHomeButtonSuppressAfterUnlockRecognizer> *)createHomeButtonSuppressAfterUnlockRecognizerForUnlockSource:(int)arg1;
- (void)noteMenuButtonDown;
- (void)noteMenuButtonUp;

@end
