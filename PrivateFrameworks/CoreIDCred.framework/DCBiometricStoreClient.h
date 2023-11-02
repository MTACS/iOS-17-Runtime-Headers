
@interface DCBiometricStoreClient : NSObject <DCBiometricStoreXPCProtocol> {
    DCXPCDisconnectHandler * _disconnectionHandler;
    <DCBiometricStoreXPCProtocol> * _remoteObjectProxy;
    NSXPCConnection * _serverConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) DCXPCDisconnectHandler *disconnectionHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <DCBiometricStoreXPCProtocol> *remoteObjectProxy;
@property (nonatomic, retain) NSXPCConnection *serverConnection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)bioBindingUnboundACL:(id /* block */)arg1;
- (void)credentialAuthenticationTokenStatus:(id /* block */)arg1;
- (void)dealloc;
- (void)deleteGlobalAuthACLWithCompletion:(id /* block */)arg1;
- (id)disconnectionHandler;
- (void)establishPrearmTrustV2:(id)arg1 completion:(id /* block */)arg2;
- (void)generatePhoneTokenWithNonce:(id)arg1 keyBlob:(id)arg2 pairingID:(id)arg3 completion:(id /* block */)arg4;
- (void)generatePrearmTrustCertificateWithNonce:(id)arg1 pairingID:(id)arg2 completion:(id /* block */)arg3;
- (void)getCASDCertificate:(id /* block */)arg1;
- (void)getProgenitorKeyAttestation:(id /* block */)arg1;
- (void)globalAuthACLTemplateUUIDsWithCompletion:(id /* block */)arg1;
- (void)globalAuthACLWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)invalidate;
- (void)migratePrearmTrustBlob:(id)arg1 completion:(id /* block */)arg2;
- (void)nonceForAuthorizationTokenWithCompletion:(id /* block */)arg1;
- (void)passcodeBindingUnboundACL:(id /* block */)arg1;
- (void)prearmCredentialWithAuthorizationToken:(id)arg1 completion:(id /* block */)arg2;
- (id)remoteObjectProxy;
- (void)revokeCredentialAuthorizationToken:(id /* block */)arg1;
- (id)serverConnection;
- (void)setDisconnectionHandler:(id)arg1;
- (void)setGlobalAuthACL:(id)arg1 ofType:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)setModifiedGlobalAuthACL:(id)arg1 externalizedLAContext:(id)arg2 completion:(id /* block */)arg3;
- (void)setRemoteObjectProxy:(id)arg1;
- (void)setServerConnection:(id)arg1;

@end
