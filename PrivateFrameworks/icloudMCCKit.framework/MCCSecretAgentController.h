
@interface MCCSecretAgentController : NSObject <MCCSecretAgentProtocol> {
    MCCSecretAgentConnection * _agentConnection;
}

- (void).cxx_destruct;
- (void)fetchSigningAndEncryptingStatusForEmailAddress:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchSigningAndEncrytionMessagesStatusForEmailAddress:(id)arg1 completion:(id /* block */)arg2;
- (void)generateCertificateWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithAgentXPCEndpoint:(id)arg1;
- (void)listCertificatesForEmail:(id)arg1 completion:(id /* block */)arg2;
- (void)listCertificatesWithCompletion:(id /* block */)arg1;
- (void)refreshCertificateWithContext:(id)arg1 certId:(id)arg2 completion:(id /* block */)arg3;
- (void)setEncryptIsEnabled:(bool)arg1 forEmailAddress:(id)arg2 completion:(id /* block */)arg3;
- (void)setSignIsEnabled:(bool)arg1 forEmailAddress:(id)arg2 completion:(id /* block */)arg3;
- (void)setSigningAndEncrytingStatusTo:(bool)arg1 forEmailAddress:(id)arg2 completion:(id /* block */)arg3;
- (void)updateCertificateDefaultsForEmailAddress:(id)arg1 certInfo:(id)arg2 completion:(id /* block */)arg3;

@end
