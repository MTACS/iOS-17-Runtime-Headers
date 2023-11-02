
@interface PKSubcredentialProvisioningRequestRemoteInvitationOperation : PKSubcredentialProvisioningOperation {
    PKAppletSubcredentialSharingInvitation * _invitation;
    PKPaymentWebService * _remoteDeviceWebService;
    <PKPaymentWebServiceTargetDeviceProtocol> * _remoteTargetDevice;
}

+ (bool)canRequestInvitation:(id)arg1;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3;
- (void)performOperation;

@end
