
@interface NPKIDVRemoteDeviceConnectionCoordinator : NSObject <IDSServiceDelegate, NPKIDVRemoteDeviceCredentialStorageCoordinatorProtocol, NPKIDVRemoteDeviceNotificationManager> {
    NSObject<OS_dispatch_queue> * _IDSMessagesQueue;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
    NSMutableDictionary * _outstandingRequestItems;
    IDSService * _remoteDeviceIDSService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_inQueue_teardownCurrentRemoteDeviceConnection;
- (id)_outstandingRequestItemWithCompletion:(id)arg1 errorHandler:(id)arg2;
- (id)_safeQueue_outstandingRequestItemForIDSProtobuf:(id)arg1;
- (id)_safeQueue_outstandingRequestItemForIDSProtobuf:(id)arg1 remove:(bool)arg2;
- (id)_safeQueue_outstandingRequestItemWithMessageIdentifier:(id)arg1 remove:(bool)arg2;
- (void)_safeQueue_resetCleanupTimerForOutstandingRequestItemWithMessageIdentifier:(id)arg1;
- (void)_sendEstablishPrearmTrustRequest:(id)arg1 item:(id)arg2;
- (void)_sendRequest:(id)arg1 withType:(unsigned short)arg2 priority:(long long)arg3 queueIdentifier:(id)arg4 requestItem:(id)arg5;
- (void)_sendRequest:(id)arg1 withType:(unsigned short)arg2 queueIdentifier:(id)arg3 requestItem:(id)arg4;
- (void)addNotificationResponse:(id)arg1;
- (void)addNotificationWithType:(unsigned long long)arg1 documentType:(unsigned long long)arg2 issuerName:(id)arg3 completion:(id /* block */)arg4;
- (void)addObserver:(id)arg1;
- (void)createCredentialInPartition:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)createCredentialResponse:(id)arg1;
- (void)credentialIdentifiersInPartitions:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteCredential:(id)arg1 withConfiguredPartitions:(id)arg2 completion:(id /* block */)arg3;
- (void)deleteCredentialResponse:(id)arg1;
- (void)deleteGlobalAuthACLResponse:(id)arg1;
- (void)deleteGlobalAuthACLWithCompletion:(id /* block */)arg1;
- (void)establishPrearmTrustResponse:(id)arg1;
- (void)establishPrearmTrustV2:(id)arg1 completion:(id /* block */)arg2;
- (void)establishPrearmTrustV2Response:(id)arg1;
- (void)fetchPartitionsCredentialIdentifiersResponse:(id)arg1;
- (void)fetchPropertiesOfCredentialResponse:(id)arg1;
- (void)generateCredentialSigningKeyResponse:(id)arg1;
- (void)generateKeyWithType:(unsigned long long)arg1 credentialIdentifier:(id)arg2 withConfiguredPartitions:(id)arg3 completion:(id /* block */)arg4;
- (void)generatePresentmentKeysForCredential:(id)arg1 numKeys:(long long)arg2 withConfiguredPartitions:(id)arg3 completion:(id /* block */)arg4;
- (void)generatePresentmentKeysForCredentialResponse:(id)arg1;
- (void)getCASDCertificateResponse:(id)arg1;
- (void)getCASDCertificateWithCompletion:(id /* block */)arg1;
- (void)handleHeartbeats:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handlePrearmStatusUpdate:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (id)init;
- (void)nonceForAuthorizationTokenResponse:(id)arg1;
- (void)nonceForAuthorizationTokenWithCompletion:(id /* block */)arg1;
- (void)prearmCredentialWithAuthorizationToken:(id)arg1 completion:(id /* block */)arg2;
- (void)prearmCredentialWithAuthorizationTokenResponse:(id)arg1;
- (void)propertiesOfCredential:(id)arg1 withConfiguredPartitions:(id)arg2 completion:(id /* block */)arg3;
- (void)provisionCredentialResponse:(id)arg1;
- (void)provisionCredentialWithType:(unsigned long long)arg1 metadata:(id)arg2 policyIdentifier:(id)arg3 credentialIdentifier:(id)arg4 attestations:(id)arg5 completion:(id /* block */)arg6;
- (void)removeObserver:(id)arg1;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)startCurrentRemoteDeviceConnection;
- (void)teardownCurrentRemoteDeviceConnection;

@end
