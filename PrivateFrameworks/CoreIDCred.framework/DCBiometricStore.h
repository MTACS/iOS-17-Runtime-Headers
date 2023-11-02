
@interface DCBiometricStore : NSObject <DCBioBindingProtocol> {
    DCBiometricStoreClient * _client;
}

@property (nonatomic, retain) DCBiometricStoreClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)bioBindingUnboundACL:(id /* block */)arg1;
- (id)client;
- (void)credentialAuthenticationTokenStatus:(id /* block */)arg1;
- (void)deleteGlobalAuthACLWithCompletion:(id /* block */)arg1;
- (void)deleteGlobalAuthACLWithOutcomeCompletion:(id /* block */)arg1;
- (void)establishPrearmTrustV2:(id)arg1 completion:(id /* block */)arg2;
- (void)generatePhoneTokenWithNonce:(id)arg1 keyBlob:(id)arg2 pairingID:(id)arg3 completion:(id /* block */)arg4;
- (void)generatePrearmTrustCertificateWithNonce:(id)arg1 pairingID:(id)arg2 completion:(id /* block */)arg3;
- (void)getCASDCertificate:(id /* block */)arg1;
- (void)getProgenitorKeyAttestation:(id /* block */)arg1;
- (void)globalAuthACLTemplateUUIDsWithCompletion:(id /* block */)arg1;
- (void)globalAuthACLWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)migratePrearmTrustBlob:(id)arg1 completion:(id /* block */)arg2;
- (void)nonceForAuthorizationTokenWithCompletion:(id /* block */)arg1;
- (void)passcodeBindingUnboundACL:(id /* block */)arg1;
- (void)prearmCredentialWithAuthorizationToken:(id)arg1 completion:(id /* block */)arg2;
- (void)revokeCredentialAuthorizationToken:(id /* block */)arg1;
- (void)setClient:(id)arg1;
- (void)setGlobalAuthACL:(id)arg1 ofType:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)setModifiedGlobalAuthACL:(id)arg1 externalizedLAContext:(id)arg2 completion:(id /* block */)arg3;

@end
