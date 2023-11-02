
@interface DCCredentialStoreClient : NSObject <DCCredentialStoreXPCProtocol> {
    DCXPCDisconnectHandler * _disconnectionHandler;
    <DCCredentialStoreXPCProtocol> * _remoteObjectProxy;
    NSXPCConnection * _serverConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) DCXPCDisconnectHandler *disconnectionHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <DCCredentialStoreXPCProtocol> *remoteObjectProxy;
@property (nonatomic, retain) NSXPCConnection *serverConnection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)allElementsOfCredential:(id)arg1 authData:(id)arg2 completion:(id /* block */)arg3;
- (void)associateExternalPresentmentKeyWithCredential:(id)arg1 publicKeyIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)authorizeRemoteKeySigningKeyWithCredential:(id)arg1 remoteKey:(id)arg2 completion:(id /* block */)arg3;
- (void)checkCompletenessOfCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)clearPresentmentKeyUsageForCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)configureWithPartitions:(id)arg1 completion:(id /* block */)arg2;
- (void)createCredentialInPartition:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)credentialIdentifierForPublicKeyIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)credentialIdentifiersInPartitions:(id)arg1 completion:(id /* block */)arg2;
- (void)credentialIdentifiersInPartitions:(id)arg1 docType:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (void)deleteCredential:(id)arg1 completion:(id /* block */)arg2;
- (id)disconnectionHandler;
- (void)elementsOfCredential:(id)arg1 elementIdentifiers:(id)arg2 authData:(id)arg3 completion:(id /* block */)arg4;
- (void)eraseLegacySEKeySlot:(long long)arg1 completion:(id /* block */)arg2;
- (void)generateDeviceEncryptionKeyForCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)generateKeySigningKeyForCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)generatePresentmentKeyForCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)generatePresentmentKeysForCredential:(id)arg1 numKeys:(long long)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)invalidate;
- (void)occupiedLegacySEKeySlotsWithCompletion:(id /* block */)arg1;
- (void)payloadAuthACLForCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)payloadsOfCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)propertiesOfCredential:(id)arg1 completion:(id /* block */)arg2;
- (id)remoteObjectProxy;
- (void)replacePayloadOfCredential:(id)arg1 withPayload:(id)arg2 format:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (id)serverConnection;
- (void)setDisconnectionHandler:(id)arg1;
- (void)setRemoteObjectProxy:(id)arg1;
- (void)setServerConnection:(id)arg1;
- (void)setStateOfCredential:(id)arg1 to:(unsigned long long)arg2 completion:(id /* block */)arg3;

@end
