
@interface PKSubcredentialProvisioningSendInvitationOperation : PKSubcredentialProvisioningSharingSessionOperation {
    PKAppletSubcredential * _credential;
    bool  _hasFinished;
    PKAppletSubcredentialSharingInvitation * _invitation;
    PKPassCredentialShare * _invitationReceipt;
    PKPaymentWebService * _localDeviceWebService;
    PKPaymentWebService * _remoteDeviceWebService;
    PKAppletSubcredentialSharingRequest * _sharingRequest;
}

- (void).cxx_destruct;
- (void)canAcceptInvitationWithCompletion:(id /* block */)arg1;
- (id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3;
- (void)initializeAccountAttestationIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)performOperation;
- (void)sendInvitation;
- (void)sendInvitationWithAuth:(id)arg1 completion:(id /* block */)arg2;
- (void)session:(id)arg1 didChangeState:(unsigned long long)arg2;
- (id)userAuthDelegate;

@end
