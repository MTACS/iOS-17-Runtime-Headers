
@interface LAPSPasscodePersistenceAdapter : NSObject <LAPSPasscodePersistence> {
    LAPSPasscodePersistenceCDPAdapter * _cdpAdapter;
    LAPSPasscodePersistenceMCAdapter * _mcAdapter;
    LAPSPasscodePersistenceMKBAdapter * _mkbAdapter;
    LAPSPasscodePersistenceSecAdapter * _secAdapter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)backoffTimeout;
- (bool)canChangePasscode;
- (bool)changePasscode:(id)arg1 to:(id)arg2 enableRecovery:(bool)arg3 error:(id*)arg4;
- (id)clearRecoveryPasscode;
- (id)defaultNewPasscodeType;
- (id)failedPasscodeAttempts;
- (id)failedPasscodeRecoveryAttempts;
- (bool)hasPasscode;
- (id)init;
- (bool)isPasscodeLockedOut;
- (bool)isPasscodeRecoveryAvailable;
- (bool)isPasscodeRecoveryEnabled;
- (bool)isPasscodeRecoveryRestricted;
- (bool)isPasscodeRecoverySupported;
- (id)localizedPasscodeRequirements;
- (id)maxPasscodeRecoveryAttempts;
- (id)passcodeCreationDate;
- (id)passcodeType;
- (bool)performRecovery:(id)arg1 newPasscode:(id)arg2 enableRecovery:(bool)arg3 error:(id*)arg4;
- (id)recoveryPasscodeType;
- (void)reportPasscodeDidChangeTo:(id)arg1 completion:(id /* block */)arg2;
- (id)setPasscodeRecoveryEnabled:(bool)arg1;
- (id)simplestAllowedNewPasscodeType;
- (bool)verifyFixedLengthNumericPasscodeIsStrong:(id)arg1;
- (bool)verifyNewPasscodeMeetsPlatformRequirements:(id)arg1 error:(id*)arg2;
- (id)verifyPasscode:(id)arg1;
- (id)verifyRecoveryPasscode:(id)arg1;
- (bool)verifyVariableLengthAlphanumericPasscodeIsStrong:(id)arg1;

@end
