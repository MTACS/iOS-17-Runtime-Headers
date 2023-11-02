
@interface NPKIDVRemoteDeviceSessionServer : PDXPCService <NPKIDVRemoteDeviceServiceSessionServerProtocol> {
    NPKIDVRemoteDeviceConnectionCoordinator * _connectionCoordinator;
    NPKIDVRemoteDeviceServiceEventsCoordinator * _eventsCoordinator;
    NSSet * _partitions;
    NPKBiometricPassPreflightManager * _preflightManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_checkCredentialProvisioningEntitlement;
- (id)_checkCredentialStoreBiometricsEntitlement;
- (id)_checkCredentialStoreEntitlementWithPartition:(id)arg1;
- (void)addNotificationWithType:(unsigned long long)arg1 documentType:(unsigned long long)arg2 issuerName:(id)arg3 completion:(id /* block */)arg4;
- (void)configureWithPartition:(id)arg1 ackHandler:(id /* block */)arg2;
- (void)confirmRemoteDeviceID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)createCredentialInPartition:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)credentialIdentifiersInPartitions:(id)arg1 completion:(id /* block */)arg2;
- (void)credentialPreflightStatusForType:(unsigned long long)arg1 minOSVersion:(id)arg2 completion:(id /* block */)arg3;
- (void)deleteCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteGlobalAuthACLWithCompletion:(id /* block */)arg1;
- (void)establishPrearmTrustV2:(id)arg1 completion:(id /* block */)arg2;
- (void)generateKeyWithType:(unsigned long long)arg1 credentialIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)generatePresentmentKeysForCredential:(id)arg1 numKeys:(long long)arg2 completion:(id /* block */)arg3;
- (void)getCASDCertificateWithCompletion:(id /* block */)arg1;
- (id)initWithConnection:(id)arg1 eventsCoordinator:(id)arg2 connectionCoordinator:(id)arg3 preflightManager:(id)arg4;
- (void)nonceForAuthorizationTokenWithCompletion:(id /* block */)arg1;
- (void)pairedWatchSEIDWithCompletion:(id /* block */)arg1;
- (void)prearmCredentialWithAuthorizationToken:(id)arg1 completion:(id /* block */)arg2;
- (void)propertiesOfCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)provisionCredentialWithType:(unsigned long long)arg1 metadata:(id)arg2 policyIdentifier:(id)arg3 credentialIdentifier:(id)arg4 attestations:(id)arg5 completion:(id /* block */)arg6;
- (void)registerForEvents:(unsigned long long)arg1 withRemoteProcessServiceName:(id)arg2 completion:(id /* block */)arg3;
- (void)unregisterFromEvents:(unsigned long long)arg1 withRemoteProcessServiceName:(id)arg2 completion:(id /* block */)arg3;

@end
