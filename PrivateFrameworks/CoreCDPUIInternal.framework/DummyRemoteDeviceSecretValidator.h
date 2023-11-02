
@interface DummyRemoteDeviceSecretValidator : CDPRemoteDeviceSecretValidator {
    NSString * _expectedString;
    unsigned long long  _failedAttempts;
}

- (void).cxx_destruct;
- (void)approveFromAnotherDeviceWithCompletion:(id /* block */)arg1;
- (id)initWithExpectedSecret:(id)arg1;
- (unsigned long long)supportedEscapeOfferMask;
- (void)supportedEscapeOfferMaskCompletion:(id /* block */)arg1;
- (void)validateRecoveryKey:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)validateSecret:(id)arg1 devices:(id)arg2 type:(unsigned long long)arg3 withCompletion:(id /* block */)arg4;

@end