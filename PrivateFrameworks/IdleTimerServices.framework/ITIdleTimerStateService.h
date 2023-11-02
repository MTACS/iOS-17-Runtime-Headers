
@interface ITIdleTimerStateService : NSObject <ITIdleTimerStateServerDelegate> {
    NSMutableDictionary * _assertionReasonsByClientID;
    NSMutableDictionary * _assertionsByReason;
    NSObject<OS_dispatch_queue> * _calloutDispatchQueue;
    <ITIdleTimerStateServiceDelegate> * _delegate;
    ITIdleTimerStateServer * _server;
    <BSInvalidatable> * _stateCaptureAssertion;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ITIdleTimerStateServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addStateCaptureHandler;
- (id)_identifierForClientProcess:(id)arg1;
- (bool)addIdleTimerConfiguration:(id)arg1 fromProcess:(id)arg2 forReason:(id)arg3;
- (bool)clientConfiguration:(id)arg1 handleIdleEvent:(unsigned long long)arg2;
- (void)clientDidDisconnect:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithDispatchQueue:(id)arg1;
- (id)initWithDispatchQueue:(id)arg1 delegate:(id)arg2;
- (bool)isIdleTimerServiceAvailable;
- (void)removeIdleTimerConfigurationFromProcess:(id)arg1 forReason:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
