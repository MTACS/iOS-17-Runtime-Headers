
@interface LAPSPasscodePersistenceMKBAdapter : NSObject

- (id)_deviceLockStateValueForKey:(id)arg1;
- (id)_mementoStateValueForKey:(id)arg1;
- (id)_persistenceErrorWithPasscodeVerificationStatus:(int)arg1;
- (id)_verifyPasscode:(id)arg1 options:(id)arg2;
- (id)backoffTimeout;
- (id)failedPasscodeAttempts;
- (id)failedPasscodeRecoveryAttempts;
- (bool)isPasscodeLockedOut;
- (id)maxPasscodeRecoveryAttempts;
- (id)verifyPasscode:(id)arg1;
- (id)verifyRecoveryPasscode:(id)arg1;

@end
