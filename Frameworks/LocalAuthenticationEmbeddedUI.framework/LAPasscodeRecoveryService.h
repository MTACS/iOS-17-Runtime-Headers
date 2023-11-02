
@interface LAPasscodeRecoveryService : NSObject {
    <LAPasscodeRecoveryEnvironment> * _env;
    <LAPSPasscodeChangeController> * _recoveryController;
}

- (void).cxx_destruct;
- (void)cancelRecovery;
- (id)init;
- (id)initWithEnvironment:(id)arg1;
- (bool)isRecoveryAvailableWithError:(id*)arg1;
- (id)lastPasscodeChange;
- (void)startRecoveryInParentVC:(id)arg1 completion:(id /* block */)arg2;

@end
