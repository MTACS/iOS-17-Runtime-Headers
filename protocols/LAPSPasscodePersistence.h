
@protocol LAPSPasscodePersistence <NSObject>

@required

- (NSNumber *)backoffTimeout;
- (bool)canChangePasscode;
- (bool)changePasscode:(LAPSPasscode *)arg1 to:(LAPSPasscode *)arg2 enableRecovery:(bool)arg3 error:(id*)arg4;
- (NSError *)clearRecoveryPasscode;
- (LAPSPasscodeType *)defaultNewPasscodeType;
- (NSNumber *)failedPasscodeAttempts;
- (NSNumber *)failedPasscodeRecoveryAttempts;
- (bool)hasPasscode;
- (bool)isPasscodeLockedOut;
- (bool)isPasscodeRecoveryAvailable;
- (bool)isPasscodeRecoveryEnabled;
- (bool)isPasscodeRecoveryRestricted;
- (bool)isPasscodeRecoverySupported;
- (NSString *)localizedPasscodeRequirements;
- (NSNumber *)maxPasscodeRecoveryAttempts;
- (NSDate *)passcodeCreationDate;
- (LAPSPasscodeType *)passcodeType;
- (bool)performRecovery:(LAPSPasscode *)arg1 newPasscode:(LAPSPasscode *)arg2 enableRecovery:(bool)arg3 error:(id*)arg4;
- (LAPSPasscodeType *)recoveryPasscodeType;
- (void)reportPasscodeDidChangeTo:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: LAPSPasscode *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSError *)setPasscodeRecoveryEnabled:(bool)arg1;
- (LAPSPasscodeType *)simplestAllowedNewPasscodeType;
- (bool)verifyFixedLengthNumericPasscodeIsStrong:(LAPSPasscode *)arg1;
- (bool)verifyNewPasscodeMeetsPlatformRequirements:(LAPSPasscode *)arg1 error:(id*)arg2;
- (NSError *)verifyPasscode:(LAPSPasscode *)arg1;
- (NSError *)verifyRecoveryPasscode:(LAPSPasscode *)arg1;
- (bool)verifyVariableLengthAlphanumericPasscodeIsStrong:(LAPSPasscode *)arg1;

@end
