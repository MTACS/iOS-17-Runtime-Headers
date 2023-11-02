
@interface NPKWatchSubcredentialProvisioningService : NPKSubcredentialProvisioningService

- (void)canAcceptInvitationOnRemoteDeviceResponse:(id)arg1;
- (void)fetchAccountAttestationAnonymizationSaltOnRemoteDeviceWithCompletion:(id /* block */)arg1;
- (void)fetchAccountAttestationAnonymizationSaltResponse:(id)arg1;
- (id)init;
- (void)registerProtobufActionsForService:(id)arg1;
- (void)sendAcceptSubcredentialProvisioningRequestForInvitation:(id)arg1 metadata:(id)arg2;
- (void)sendAcceptSubcredentialProvisioningRequestForMailboxAddress:(id)arg1 activationCode:(id)arg2;
- (void)sendCanAcceptInvitationOnRemoteDeviceRequestForInvitation:(id)arg1 completion:(id /* block */)arg2;

@end
