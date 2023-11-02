
@interface CDPRecoveryKeySecretValidatorProxyImpl : NSObject <CDPRemoteDeviceSecretValidatorProtocol> {
    <CDPRemoteDeviceSecretValidatorProtocol> * _validator;
    unsigned long long  supportedEscapeOfferMask;
}

@property (nonatomic) unsigned long long supportedEscapeOfferMask;

- (void).cxx_destruct;
- (void)approveFromAnotherDeviceWithCompletion:(id /* block */)arg1;
- (void)cancelApproveFromAnotherDevice;
- (void)cancelValidationWithError:(id)arg1;
- (id)initWithRemoteObject:(id)arg1;
- (void)resetAccountCDPState;
- (void)resetAccountCDPStateAndSetSecret:(id)arg1;
- (void)setSupportedEscapeOfferMask:(unsigned long long)arg1;
- (unsigned long long)supportedEscapeOfferMask;
- (void)supportedEscapeOfferMaskCompletion:(id /* block */)arg1;
- (void)validateCustodianRecoveryInfo:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)validateRecoveryKey:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)validateSecret:(id)arg1 devices:(id)arg2 type:(unsigned long long)arg3 withCompletion:(id /* block */)arg4;

@end
