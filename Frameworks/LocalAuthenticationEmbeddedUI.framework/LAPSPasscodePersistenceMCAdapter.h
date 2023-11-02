
@interface LAPSPasscodePersistenceMCAdapter : NSObject

- (id)_mcProfileConnection;
- (id)_passcodeTypeForQuery:(id /* block */)arg1;
- (bool)canChangePasscode;
- (bool)changePasscode:(id)arg1 to:(id)arg2 enableRecovery:(bool)arg3 error:(id*)arg4;
- (id)clearRecoveryPasscode;
- (id)defaultNewPasscodeType;
- (bool)hasPasscode;
- (bool)isPasscodeRecoveryAvailable;
- (bool)isPasscodeRecoveryEnabled;
- (bool)isPasscodeRecoveryRestricted;
- (bool)isPasscodeRecoverySupported;
- (id)localizedPasscodeRequirements;
- (id)passcodeCreationDate;
- (id)passcodeType;
- (bool)performRecovery:(id)arg1 newPasscode:(id)arg2 enableRecovery:(bool)arg3 error:(id*)arg4;
- (id)recoveryPasscodeType;
- (id)setPasscodeRecoveryEnabled:(bool)arg1;
- (id)simplestAllowedNewPasscodeType;
- (bool)verifyNewPasscodeMeetsPlatformRequirements:(id)arg1 error:(id*)arg2;

@end
