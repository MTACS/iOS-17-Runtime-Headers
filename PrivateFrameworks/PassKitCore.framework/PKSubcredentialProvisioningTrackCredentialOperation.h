
@interface PKSubcredentialProvisioningTrackCredentialOperation : PKSubcredentialProvisioningPairingSessionOperation {
    id /* block */  _completionHandler;
    bool  _firstTransactionCompleted;
    bool  _hasTrackedCredential;
    bool  _performingOperation;
    PKAppletSubcredential * _subcredential;
    NSData * _trackingAttestation;
}

- (void).cxx_destruct;
- (void)appletSubcredentialPairingSessionDidFirstTransaction:(id)arg1 withError:(id)arg2;
- (id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3;
- (void)performOperation;
- (void)performOperationWithCompletion:(id /* block */)arg1;
- (void)session:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)trackCredentialWithAttestation;

@end
