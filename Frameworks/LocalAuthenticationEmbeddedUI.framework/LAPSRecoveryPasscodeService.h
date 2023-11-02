
@interface LAPSRecoveryPasscodeService : NSObject {
    <LAPSPasscodePersistence> * _persistence;
}

@property (nonatomic, readonly) <LAPSPasscodePersistence> *persistence;

- (void).cxx_destruct;
- (void)_clearRecoveryPasscode;
- (long long)_failedPasscodeAttempts;
- (long long)_failedPasscodeRecoveryAttempts;
- (bool)_hasAttemptedPasscodeEnoughTimes;
- (bool)_hasPasscodeRecoveryAttemptsLeft;
- (long long)_maxPasscodeRecoveryAttempts;
- (long long)_minRequiredPasscodeFailures;
- (void)_reportPasscodeChangedTo:(id)arg1;
- (void)_setPasscodeRecoveryEnabled:(bool)arg1;
- (void)changePasscode:(id)arg1 to:(id)arg2 enableRecovery:(bool)arg3 completion:(id /* block */)arg4;
- (long long)failedPasscodeAttempts;
- (id)initWithPersistence:(id)arg1;
- (bool)isPasscodeRecoveryAvailableWithError:(id*)arg1;
- (bool)isPasscodeRecoveryEnabled;
- (bool)isPasscodeRecoveryRestricted;
- (bool)isPasscodeRecoverySupported;
- (id)passcodeType;
- (id)persistence;
- (void)verifyPasscode:(id)arg1 completion:(id /* block */)arg2;

@end
