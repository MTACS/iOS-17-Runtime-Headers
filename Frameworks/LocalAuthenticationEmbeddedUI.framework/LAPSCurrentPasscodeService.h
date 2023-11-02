
@interface LAPSCurrentPasscodeService : NSObject {
    <LAPSPasscodePersistence> * _persistence;
}

@property (nonatomic, readonly) <LAPSPasscodePersistence> *persistence;

- (void).cxx_destruct;
- (long long)backoffTimeout;
- (bool)canChangePasscodeWithError:(id*)arg1;
- (void)changePasscode:(id)arg1 to:(id)arg2 enableRecovery:(bool)arg3 completion:(id /* block */)arg4;
- (long long)failedPasscodeAttempts;
- (bool)hasPasscode;
- (id)initWithPersistence:(id)arg1;
- (id)passcodeCreationDate;
- (id)passcodeType;
- (id)persistence;
- (void)verifyPasscode:(id)arg1 completion:(id /* block */)arg2;

@end
