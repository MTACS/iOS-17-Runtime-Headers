
@interface NPKNanoPassDaemonConnection : NSObject <PKXPCServiceDelegate> {
    PKXPCService * _remoteService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKXPCService *remoteService;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)_errorHandlerWithCompletion:(id /* block */)arg1;
- (id)_remoteObjectProxySynchronous:(bool)arg1 withFailureHandler:(id /* block */)arg2;
- (void)addUserNotificationOfType:(unsigned long long)arg1 passUniqueID:(id)arg2 completion:(id /* block */)arg3;
- (void)canAcceptInvitationOnRemoteDeviceForInvitation:(id)arg1 completion:(id /* block */)arg2;
- (void)canNotifyAboutExpressModeWithCompletion:(id /* block */)arg1;
- (void)fetchRelevantPassTuplesWithCompletion:(id /* block */)arg1;
- (void)handleApplicationRedirectRequestOnPairedDeviceForPaymentPass:(id)arg1 transaction:(id)arg2;
- (void)handleMetadataRequestOnPairedDevice:(id)arg1 withAssociatedApplicationIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (void)identityPassPrearmStatusSynchronous:(bool)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)noteWillDeleteAccountsSynchronous:(bool)arg1 completion:(id /* block */)arg2;
- (id)remoteService;
- (void)remoteService:(id)arg1 didEstablishConnection:(id)arg2;
- (void)remoteService:(id)arg1 didInterruptConnection:(id)arg2;
- (void)remoteServiceDidResume:(id)arg1;
- (void)remoteServiceDidSuspend:(id)arg1;
- (void)setRemoteService:(id)arg1;
- (void)startSubcredentialProvisioningOnLocalDeviceMatchingInvitation:(id)arg1 shouldFetchAnonymizationSaltFromRemoteDevice:(bool)arg2 completion:(id /* block */)arg3;
- (void)startSubcredentialProvisioningOnRemoteDeviceForInvitation:(id)arg1;
- (void)startSubcredentialProvisioningOnRemoteDeviceForMailboxAddress:(id)arg1 activationCode:(id)arg2;

@end
