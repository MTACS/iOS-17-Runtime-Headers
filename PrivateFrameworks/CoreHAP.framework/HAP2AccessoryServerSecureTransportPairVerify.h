
@interface HAP2AccessoryServerSecureTransportPairVerify : HAP2AccessoryServerSecureTransportBase <HAP2AccessoryServerTransportDelegate, HAPSecuritySessionDelegate> {
    HAPSecuritySession * _securitySession;
    HAP2AccessorySessionInfo * _sessionInfo;
    id /* block */  _stateChangeCompletion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HAPSecuritySession *securitySession;
@property (nonatomic, retain) HAP2AccessorySessionInfo *sessionInfo;
@property (nonatomic, copy) id /* block */ stateChangeCompletion;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_closeWithError:(id)arg1;
- (void)_openTransport;
- (void)_secureTransport;
- (void)_sendSetupExchangeData:(id)arg1;
- (void)doCloseWithError:(id)arg1 completion:(id /* block */)arg2;
- (void)doOpenWithCompletion:(id /* block */)arg1;
- (id)initWithTransport:(id)arg1 operationQueue:(id)arg2;
- (id)securitySession;
- (void)securitySession:(id)arg1 didCloseWithError:(id)arg2;
- (id)securitySession:(id)arg1 didReceiveLocalPairingIdentityRequestWithError:(id*)arg2;
- (id)securitySession:(id)arg1 didReceiveRequestForPeerPairingIdentityWithIdentifier:(id)arg2 error:(id*)arg3;
- (void)securitySession:(id)arg1 didReceiveSetupExchangeData:(id)arg2;
- (void)securitySessionDidOpen:(id)arg1;
- (id)sessionInfo;
- (void)setSecuritySession:(id)arg1;
- (void)setSessionInfo:(id)arg1;
- (void)setStateChangeCompletion:(id /* block */)arg1;
- (id /* block */)stateChangeCompletion;

@end
