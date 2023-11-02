
@interface LAPSPasscodeChangeSystemRecoveryAdapter : NSObject <LAPSPasscodeChangeSystem> {
    LAPSCurrentPasscodeService * _currentPasscodeService;
    LAPSNewPasscodeService * _newPasscodeService;
    LAPSRecoveryPasscodeService * _passcodeRecoveryService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canChangePasscodeWithError:(id*)arg1;
- (void)changePasscode:(id)arg1 to:(id)arg2 completion:(id /* block */)arg3;
- (bool)hasPasscode;
- (id)initWithPersistence:(id)arg1;
- (id)lastPasscodeChange;
- (id)newPasscodeRequest;
- (id)oldPasscodeRequest;
- (void)verifyNewPasscode:(id)arg1 completion:(id /* block */)arg2;
- (void)verifyPasscode:(id)arg1 completion:(id /* block */)arg2;

@end
