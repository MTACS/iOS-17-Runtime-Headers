
@protocol KeychainSyncPasscodeFieldDelegate <NSObject>

@required

- (void)passcodeField:(PasscodeFieldCell *)arg1 didUpdateEnteredPasscode:(NSString *)arg2;

@end
