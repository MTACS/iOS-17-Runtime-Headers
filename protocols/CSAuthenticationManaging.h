
@protocol CSAuthenticationManaging <NSObject>

@required

- (void)attemptUnlockWithPasscode:(void *)arg1 finishUIUnlock:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, void*
- (void)setBiometricAutoUnlockingDisabled:(bool)arg1 forReason:(NSString *)arg2;
- (void)setPasscodeVisible:(bool)arg1 animated:(bool)arg2;

@end
