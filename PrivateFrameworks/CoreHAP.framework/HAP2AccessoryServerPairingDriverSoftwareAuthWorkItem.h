
@interface HAP2AccessoryServerPairingDriverSoftwareAuthWorkItem : HAP2AccessoryServerPairingDriverWorkItem <HAPAuthSessionDelegate> {
    HAPAuthSession * _authSession;
    HAPAccessoryProtocolInfo * _authenticatedProtocolInfo;
    NSError * _cancelError;
    <HAP2AccessoryServerEncoding> * _encoding;
    HAPPairSetupSession * _pairingSession;
    bool  _sendPDUHeader;
    <HAP2AccessoryServerSecureTransport> * _transport;
}

@property (nonatomic, retain) HAPAuthSession *authSession;
@property (nonatomic, retain) HAPAccessoryProtocolInfo *authenticatedProtocolInfo;
@property (nonatomic, retain) NSError *cancelError;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <HAP2AccessoryServerEncoding> *encoding;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HAPPairSetupSession *pairingSession;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HAP2AccessoryServerSecureTransport> *transport;

+ (id)doSoftwareAuth;

- (void).cxx_destruct;
- (void)_handleAuthCompleteWithError:(id)arg1;
- (bool)_isProtocolInfoValid:(id)arg1;
- (void)_sendSoftwareAuthMessageWithData:(id)arg1 completion:(id /* block */)arg2;
- (void)_softwareAuthFinished;
- (void)_startSoftwareAuth;
- (void)_validateAccessoryInfoWithCompletion:(id /* block */)arg1;
- (id)authSession;
- (void)authSession:(id)arg1 authComplete:(id)arg2;
- (void)authSession:(id)arg1 authenticateUUID:(id)arg2 token:(id)arg3;
- (void)authSession:(id)arg1 confirmUUID:(id)arg2 token:(id)arg3;
- (void)authSession:(id)arg1 sendAuthExchangeData:(id)arg2;
- (void)authSession:(id)arg1 validateUUID:(id)arg2 token:(id)arg3;
- (id)authenticatedProtocolInfo;
- (id)cancelError;
- (void)cancelWithError:(id)arg1;
- (id)encoding;
- (id)pairingSession;
- (void)runForPairingDriver:(id)arg1;
- (void)setAuthSession:(id)arg1;
- (void)setAuthenticatedProtocolInfo:(id)arg1;
- (void)setCancelError:(id)arg1;
- (void)setPairingSession:(id)arg1;
- (id)transport;

@end
