
@interface CRKTransportPreflightOperation : CATOperation <CATRemoteTransportDelegate, CATTransportDelegate> {
    bool  _cancellationRequested;
    bool  _connectionInterruptedDueToDecisionHandler;
    bool  _decisionHandlerWantsBackoffReset;
    bool  _invalidationTriggered;
    CRKSession * _session;
    CATTransport * _transport;
}

@property (nonatomic) bool cancellationRequested;
@property (nonatomic) bool connectionInterruptedDueToDecisionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool decisionHandlerWantsBackoffReset;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool invalidationTriggered;
@property (nonatomic, readonly) CRKSession *session;
@property (nonatomic, readonly, copy) NSDictionary *stateDictionary;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CATTransport *transport;

- (void).cxx_destruct;
- (id)ASMUserIdentifierFromTrustDecision:(id)arg1;
- (bool)anyCommonNameInArrayHasLeaderPrefix:(id)arg1;
- (void)cancel;
- (bool)cancellationRequested;
- (void)clearDelegatesOnTransport:(id)arg1;
- (bool)commonNameHasLeaderPrefix:(id)arg1;
- (bool)connectionInterruptedDueToDecisionHandler;
- (bool)decisionHandlerWantsBackoffReset;
- (bool)errorIndicatesThatInterruptionWasCausedByDecisionHandler:(id)arg1;
- (void)finishWithShouldResetBackoff:(bool)arg1;
- (void)finishWithTransport:(id)arg1;
- (void)handleContinuationDecision:(unsigned long long)arg1 forTrustDecision:(id)arg2;
- (id)initWithTransport:(id)arg1 session:(id)arg2;
- (void)invalidateTransport;
- (bool)invalidationTriggered;
- (bool)isAsynchronous;
- (bool)isCommonNamePrefixValidForRemoteTransport:(id)arg1;
- (bool)isCommonNamePrefixValidForTransport:(id)arg1;
- (bool)isInsecureConnectionError:(id)arg1;
- (void)main;
- (void)respondToTrustDecision:(id)arg1 withAllowUntrustedConnections:(bool)arg2;
- (id)session;
- (void)setCancellationRequested:(bool)arg1;
- (void)setConnectionInterruptedDueToDecisionHandler:(bool)arg1;
- (void)setDecisionHandlerWantsBackoffReset:(bool)arg1;
- (void)setDelegatesOnTransport:(id)arg1;
- (void)setInvalidationTriggered:(bool)arg1;
- (id)stateDictionary;
- (id)transport;
- (void)transport:(id)arg1 didInterruptWithError:(id)arg2;
- (void)transport:(id)arg1 encounteredTrustDecisionWhileTryingToSecure:(id)arg2;
- (void)transportDidConnect:(id)arg1;
- (void)transportDidInvalidate:(id)arg1;

@end
