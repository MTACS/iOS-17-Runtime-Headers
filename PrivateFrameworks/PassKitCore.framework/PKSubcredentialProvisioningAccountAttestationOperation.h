
@interface PKSubcredentialProvisioningAccountAttestationOperation : PKSubcredentialProvisioningSharingSessionOperation {
    PKAppletSubcredential * _credential;
    PKAppletSubcredentialSharingInvitationMetadata * _metadata;
    bool  _operationCompleted;
    PKPaymentWebService * _webService;
}

- (void).cxx_destruct;
- (void)_setAccountAttestationWithSession:(id)arg1;
- (void)accountAttesatationAnonymizationSaltWithCompletion:(id /* block */)arg1;
- (id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3;
- (void)performOperation;
- (void)performOperationWithSession:(id)arg1;
- (void)session:(id)arg1 didChangeState:(unsigned long long)arg2;

@end
