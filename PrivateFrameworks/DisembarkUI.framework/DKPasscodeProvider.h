
@interface DKPasscodeProvider : NSObject <DKPasscodeProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)isDevicePasscodeSet;
- (bool)isScreenTimePasscodeSet;
- (int)simplePasscodeType;
- (int)unlockType;
- (bool)verifyPasscode:(id)arg1;
- (bool)verifyScreenTimePasscode:(id)arg1;

@end
