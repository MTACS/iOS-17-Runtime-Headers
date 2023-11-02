
@interface CSDevicePasscodeRecoveryService : NSObject {
    LAPasscodeRecoveryService * _service;
}

- (void).cxx_destruct;
- (bool)canStartRecovery;
- (id)init;
- (id)initWithService:(id)arg1;
- (void)startRecoveryInParentVC:(id)arg1 completion:(id /* block */)arg2;

@end
