
@interface SASPresentationManager : NSObject {
    <SASPresentationManagerDelegate> * _presentationManagerDelegate;
    NSMutableDictionary * _presentations;
    SASPresentationAggregateState * lastReportedState;
}

@property (nonatomic, retain) NSMutableDictionary *presentations;

+ (bool)_canTransitionFromState:(long long)arg1 toState:(long long)arg2;
+ (bool)_canTransitionFromState:(long long)arg1 toState:(long long)arg2 presentationIdentifier:(long long)arg3;
+ (bool)_canTransitionToActiveFromState:(long long)arg1 presentationIdentifier:(long long)arg2;
+ (bool)_canTransitionToHeatedFromState:(long long)arg1;
+ (bool)_canTransitionToOffFromState:(long long)arg1;
+ (bool)_canTransitionToStartingFromState:(long long)arg1;
+ (bool)_canTransitionToStoppingFromState:(long long)arg1;
+ (bool)_shouldKeepPingingForRequestState:(long long)arg1;

- (void).cxx_destruct;
- (void)_forceAllPresentationsOff;
- (void)_presentationsLock_broadcastPresentationStateForIdentifier:(id)arg1 presentationState:(id)arg2 presentationIdentifiersToInform:(id)arg3;
- (void)_presentationsLock_cancelAllPreheatedPresentations;
- (long long)_presentationsLock_nextPresentationToActivate;
- (void)_requestStateDidChange;
- (void)_sendBlock:(id /* block */)arg1 toPresentationWithPresentationIdentifier:(long long)arg2;
- (void)_sendBlockToActivePresentations:(id /* block */)arg1;
- (void)_sendBlockToStartingPresentations:(id /* block */)arg1;
- (void)_sendBlockToStoppingPresentations:(id /* block */)arg1;
- (void)_setupPingTimerForPresentationIdentifier:(long long)arg1;
- (void)_teardownPingTimerForPresentationIdentifier:(long long)arg1;
- (void)_transitionPresentationWithPresentationIdentifier:(long long)arg1 toState:(long long)arg2;
- (void)_waitForPongFromPresentationWithPresentationIdentifier:(long long)arg1;
- (void)activeAndStartingPresentations_updateCurrentLockState:(unsigned long long)arg1;
- (bool)activePresentationsAreIdleAndQuiet;
- (void)activePresentations_bulletinManagerDidChangeBulletins;
- (void)activePresentations_deviceWonMyriadElection;
- (void)activePresentations_handleRequestWithOptions:(id)arg1;
- (void)cancelAllPreheatedPresentations;
- (id)init;
- (long long)nextPresentationToActivate;
- (void)pongWithPresentationIdentifier:(long long)arg1;
- (void)preheatNextPresentationToActivate;
- (void)presentationDidUpdateState:(id)arg1;
- (void)presentationRequestedWithPresentationIdentifier:(long long)arg1 presentationOptions:(id)arg2 requestOptions:(id)arg3;
- (void)presentationWithPresentationIdentifier:(long long)arg1 activationDeterminedShouldDeferWake:(bool)arg2;
- (void)presentationWithPresentationIdentifierBecameActive:(long long)arg1;
- (void)presentationWithPresentationIdentifierBecameOff:(long long)arg1;
- (void)presentationWithPresentationIdentifierBeganStarting:(long long)arg1;
- (void)presentationWithPresentationIdentifierBeganStopping:(long long)arg1;
- (void)presentationWithPresentationIdentifierWakeScreenAfterActivation:(long long)arg1 reason:(id)arg2;
- (id)presentations;
- (void)registerSiriPresentation:(id)arg1 withIdentifier:(long long)arg2;
- (long long)requestState;
- (void)sendButtonEventCompletionToPresentations:(id /* block */)arg1 forButtonEventType:(unsigned long long)arg2;
- (void)setPresentationManagerDelegate:(id)arg1;
- (void)setPresentations:(id)arg1;
- (bool)shouldRejectNewActivationsForRequestState:(long long)arg1;
- (void)startingAndActiveAndStoppingPresentations_presentationDismissalRequestedWithOptions:(id)arg1;
- (void)startingPresentations_cancelPendingActivationWithReason:(unsigned long long)arg1;
- (void)unregisterSiriPresentationWithIdentifier:(long long)arg1;

@end
