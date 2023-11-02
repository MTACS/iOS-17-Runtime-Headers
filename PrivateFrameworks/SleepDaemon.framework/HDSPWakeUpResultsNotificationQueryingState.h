
@interface HDSPWakeUpResultsNotificationQueryingState : HDSPWakeUpResultsNotificationStateMachineState {
    bool  _shouldRetryImmediatelyOnFailure;
}

- (void)_executeQuery;
- (void)_retryQueryIfNeededOrTransitionToNeedsProtectedDataState;
- (void)_transitionToNotifiedState;
- (void)_transitionToRetryState;
- (void)_transitionToWaitingForWakeUpState;
- (void)didEnter;
- (void)didExit;
- (id)expirationDate;
- (id)initWithCoder:(id)arg1;
- (void)protectedHealthDataDidBecomeAvailable;
- (void)queryDidComplete;
- (void)queryDidFailWithError:(id)arg1;
- (bool)schedulesExpiration;
- (id)stateName;

@end
