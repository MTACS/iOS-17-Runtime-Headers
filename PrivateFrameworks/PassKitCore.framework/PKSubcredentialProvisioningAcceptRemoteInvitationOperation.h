
@interface PKSubcredentialProvisioningAcceptRemoteInvitationOperation : PKSubcredentialProvisioningOperation {
    PKAppletSubcredentialSharingInvitation * _invitation;
    PKPaymentWebService * _localDeviceWebService;
    <PKPaymentWebServiceTargetDeviceProtocol> * _localTargetDevice;
    PKPaymentWebService * _remoteDeviceWebService;
    <PKPaymentWebServiceTargetDeviceProtocol> * _remoteTargetDevice;
}

+ (bool)canDeviceAcceptInvitation:(id)arg1;

- (void).cxx_destruct;
- (void)_handleAcceptInviteResponseWithPass:(id)arg1 error:(id)arg2;
- (void)acceptCrossPlatformInvitation;
- (void)acceptIDSInvitation;
- (void)acceptInvitation:(id)arg1 withMetadata:(id)arg2;
- (void)canAcceptInvitation:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getMatchingInvitation:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3;
- (void)metadataForInvitation:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)performOperation;

@end
