
@interface CSPosterSwitcherActivationManager : NSObject <CSEventHandling> {
    <CSPosterSwitcherActivationManagerDelegate> * _delegate;
    bool  _hasBeenCoachedSinceReset;
    <CSPosterSwitcherActivationSource> * _source;
    <CSUnlockRequesting> * _unlockRequester;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSPosterSwitcherActivationManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasBeenCoachedSinceReset;
@property (readonly) unsigned long long hash;
@property (nonatomic) <CSPosterSwitcherActivationSource> *source;
@property (readonly) Class superclass;
@property (nonatomic, retain) <CSUnlockRequesting> *unlockRequester;

- (void).cxx_destruct;
- (void)_failActivationWithReason:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)_presentCoachingMessage:(unsigned long long)arg1;
- (void)_resetUnauthenticatedActivationAttemptCount;
- (void)activateWithHandler:(id /* block */)arg1 onFailure:(id /* block */)arg2;
- (void)conformsToCSEventHandling;
- (id)delegate;
- (bool)handleEvent:(id)arg1;
- (bool)hasBeenCoachedSinceReset;
- (id)initWithSource:(id)arg1 delegate:(id)arg2 unlockRequester:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setHasBeenCoachedSinceReset:(bool)arg1;
- (void)setSource:(id)arg1;
- (void)setUnlockRequester:(id)arg1;
- (id)source;
- (id)unlockRequester;
- (bool)wouldHandleButtonEvent:(id)arg1;

@end
