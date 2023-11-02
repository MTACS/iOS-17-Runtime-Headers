
@protocol LAPasscodeFieldDelegate

@required

- (void)passcodeField:(LAPasscodeField *)arg1 didChangePasscodeLength:(unsigned long long)arg2;
- (void)passcodeField:(LAPasscodeField *)arg1 didSubmitPasscode:(NSString *)arg2;

@end
