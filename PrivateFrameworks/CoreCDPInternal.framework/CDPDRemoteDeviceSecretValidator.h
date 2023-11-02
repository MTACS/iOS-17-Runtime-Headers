
@interface CDPDRemoteDeviceSecretValidator : CDPDDeviceSecretValidator {
    bool  _isWaitingForRemoteApproval;
    id /* block */  _requestToJoinCompletion;
}

- (void).cxx_destruct;
- (id)_decoratedDelegate;
- (void)approveFromAnotherDeviceWithCompletion:(id /* block */)arg1;
- (void)cancelApproveFromAnotherDevice;
- (void)resetAccountCDPState;
- (void)resetAccountCDPStateAndSetSecret:(id)arg1;
- (void)setValidSecretHandler:(id /* block */)arg1;
- (void)supportedEscapeOfferMaskCompletion:(id /* block */)arg1;
- (void)validateCustodianRecoveryInfo:(id)arg1 withCompletion:(id /* block */)arg2;

@end
