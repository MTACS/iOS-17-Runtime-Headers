
@protocol DKPasscodeProvider <NSObject>

@required

- (bool)isDevicePasscodeSet;
- (bool)isScreenTimePasscodeSet;
- (int)simplePasscodeType;
- (int)unlockType;
- (bool)verifyPasscode:(NSString *)arg1;
- (bool)verifyScreenTimePasscode:(NSString *)arg1;

@end
