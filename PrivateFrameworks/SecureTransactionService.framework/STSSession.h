
@interface STSSession : STSSessionBase <STSHelperLibraryDelegateProtocol> {
    NFSecureElementProxyListener * _seProxyListener;
    id /* block */  _sendRequestCompletion;
}

@property (nonatomic, retain) NFSecureElementProxyListener *seProxyListener;
@property (nonatomic, copy) id /* block */ sendRequestCompletion;

+ (id)requestAssertionForKeyID:(id)arg1 options:(id)arg2 outError:(id*)arg3;

- (void).cxx_destruct;
- (void)_activateInvalidationHandler:(id)arg1;
- (void)_activateOnConnectCompletion;
- (void)_activateSendRequestCompletion:(id)arg1 sessionTerminationRequested:(bool)arg2 error:(id)arg3;
- (id)_translateXPCClientNotificationStatus:(unsigned long long)arg1;
- (id)canStartSession;
- (id)createHandlerForCredential:(id)arg1;
- (id)enableExpressModeForActiveCredential:(bool)arg1;
- (id)enablePlasticCardMode:(bool)arg1;
- (id)felicaCredentialState:(id)arg1 error:(id*)arg2;
- (void)fireDidExpireTransaction:(bool)arg1;
- (void)fireDidFailDeferredAuth:(bool)arg1;
- (void)fireDidPerformAuxiliaryTransactions:(id)arg1;
- (void)fireDidReceive18013Requests:(id)arg1 readerAuthInfo:(id)arg2;
- (void)fireDidReceiveActivityTimeout:(id)arg1;
- (void)fireDidReceivePassthroughMessage:(id)arg1;
- (void)fireDigitalCarKeyEventPayload:(id)arg1;
- (void)fireExpressModeStateChangeWithInfo:(id)arg1;
- (void)fireFieldDetectEvent:(bool)arg1;
- (void)fireFieldNotificationEvent:(id)arg1;
- (void)fireHasPendingServerRequest:(bool)arg1;
- (void)fireRequestHandoverConfirmation;
- (void)fireSessionDidConsumeAuthorizationEvent;
- (void)fireSessionEndEvent:(id)arg1;
- (void)fireTransactionEndEvent:(id)arg1;
- (void)fireTransactionStartEvent:(id)arg1;
- (void)generateHandoverRequestForQRCodeWithConfiguration:(unsigned long long)arg1 responseHandler:(id /* block */)arg2;
- (void)handoverSelected:(unsigned long long)arg1;
- (id)init;
- (void)iso18013DataRetrievalCompleted;
- (id)releaseCredential:(id)arg1 withAuthorization:(id)arg2;
- (id)releaseCredential:(id)arg1 withAuthorization:(id)arg2 iso18013Selection:(id)arg3;
- (void)relinquishSEProxy;
- (void)reqlinquishNFCReaderProxy;
- (void)restartNFCReaderDiscovery;
- (id)rkeCancelFunction:(id)arg1;
- (id)rkeGetVehicleReports:(id*)arg1;
- (id)rkePauseRangingForReaderIdentifier:(id)arg1 durationInSec:(id)arg2;
- (id)rkeResumeRangingForReaderIdentifier:(id)arg1;
- (void)rkeSendFunction:(id)arg1 action:(id)arg2 authorization:(id)arg3 completion:(id /* block */)arg4;
- (id)rkeSendPassthroughMessage:(id)arg1;
- (id)seProxyListener;
- (id /* block */)sendRequestCompletion;
- (id)setAuxiliaryCredentials:(id)arg1;
- (void)setSeProxyListener:(id)arg1;
- (void)setSendRequestCompletion:(id /* block */)arg1;
- (id)startHandoff;
- (id)startTransactionWithAuthorization:(id)arg1 options:(unsigned long long)arg2;
- (id)startWithDelegate:(id)arg1;
- (id)startWithDelegate:(id)arg1 callback:(id /* block */)arg2;
- (id)startWithNotificationTesterDelegate:(id)arg1 outNotificationListener:(id*)arg2;
- (id)stopTransaction;
- (bool)supportsSecureRanging;
- (void)testSendToAlternativeCarrier:(id)arg1 completion:(id /* block */)arg2;
- (id)transitCredentialState:(id)arg1 error:(id*)arg2;

@end
