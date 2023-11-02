
@interface SVXClientSessionService : NSObject <SVXClientServiceConsuming, SVXClientSessionServicing> {
    <SVXClientServiceProviding> * _clientServiceProvider;
    long long  _currentState;
    <SVXClientSessionServiceDelegate> * _delegate;
    bool  _isActive;
    <SVXPerforming> * _performer;
}

@property (nonatomic, readonly) long long currentState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SVXClientSessionServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setCurrentState:(long long)arg1;
- (void)clientServiceDidChange:(bool)arg1;
- (long long)currentState;
- (id)delegate;
- (void)fetchAlarmAndTimerFiringContextWithCompletion:(id /* block */)arg1;
- (void)fetchStateWithCompletion:(id /* block */)arg1;
- (void)handleDidBecomeActiveWithActivationContext:(id)arg1 turnID:(id)arg2;
- (void)handleDidChangeStateFrom:(long long)arg1 to:(long long)arg2;
- (void)handleDidResignActiveWithDeactivationContext:(id)arg1;
- (void)handleDidStartSoundWithID:(long long)arg1;
- (void)handleDidStopSoundWithID:(long long)arg1 error:(id)arg2;
- (void)handleWillBecomeActiveWithActivationContext:(id)arg1 turnID:(id)arg2;
- (void)handleWillChangeStateFrom:(long long)arg1 to:(long long)arg2;
- (void)handleWillPresentFeedbackWithDialogIdentifier:(id)arg1;
- (void)handleWillResignActiveWithOptions:(unsigned long long)arg1 duration:(double)arg2;
- (void)handleWillStartSoundWithID:(long long)arg1;
- (id)initWithClientServiceProvider:(id)arg1 analytics:(id)arg2 performer:(id)arg3;
- (void)setDelegate:(id)arg1;

@end
