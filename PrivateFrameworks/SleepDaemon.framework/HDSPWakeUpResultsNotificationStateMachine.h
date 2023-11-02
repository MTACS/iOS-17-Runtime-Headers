
@interface HDSPWakeUpResultsNotificationStateMachine : HKSPPersistentStateMachine <HDSPWakeUpResultsNotificationStateMachineDelegate, HDSPWakeUpResultsNotificationStateMachineEventHandler> {
    HDSPWakeUpResultsNotificationDelayingForTrackingState * _delayingForTrackingState;
    HDSPWakeUpResultsNotificationDisabledState * _disabledState;
    HDSPWakeUpResultsNotificationNeedsProtectedDataState * _needsProtectedDataState;
    HDSPWakeUpResultsNotificationNotifiedState * _notifiedState;
    HDSPWakeUpResultsNotificationQueryingState * _queryingState;
    HDSPWakeUpResultsNotificationWaitingForRetryState * _waitingForRetryState;
    HDSPWakeUpResultsNotificationWaitingForWakeUpState * _waitingForWakeUpState;
}

@property (nonatomic, readonly) <NAScheduler> *callbackScheduler;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) HDSPWakeUpResultsNotificationDelayingForTrackingState *delayingForTrackingState;
@property (nonatomic, readonly) <HDSPWakeUpResultsNotificationStateMachineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDSPWakeUpResultsNotificationDisabledState *disabledState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HDSPWakeUpResultsNotificationStateMachineInfoProvider> *infoProvider;
@property (nonatomic, readonly) bool isDelayingForTracking;
@property (nonatomic, readonly) bool isWaitingForWakeUp;
@property (nonatomic, readonly) HDSPWakeUpResultsNotificationNeedsProtectedDataState *needsProtectedDataState;
@property (nonatomic, readonly) HDSPWakeUpResultsNotificationNotifiedState *notifiedState;
@property (nonatomic, readonly) HDSPWakeUpResultsNotificationQueryingState *queryingState;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HDSPWakeUpResultsNotificationWaitingForRetryState *waitingForRetryState;
@property (nonatomic, readonly) HDSPWakeUpResultsNotificationWaitingForWakeUpState *waitingForWakeUpState;

- (void).cxx_destruct;
- (id)allStates;
- (id)delayingForTrackingState;
- (void)didPostResultsNotification;
- (id)disabledState;
- (void)executeQuery;
- (id)initWithIdentifier:(id)arg1 persistence:(id)arg2 delegate:(id)arg3 infoProvider:(id)arg4 currentDateProvider:(id /* block */)arg5;
- (bool)isDelayingForTracking;
- (bool)isWaitingForWakeUp;
- (unsigned long long)loggingCategory;
- (id)needsProtectedDataState;
- (id)notifiedState;
- (void)postResultsNotification;
- (void)protectedHealthDataDidBecomeAvailable;
- (void)queryDidComplete;
- (void)queryDidFailWithError:(id)arg1;
- (id)queryingState;
- (void)retryAttemptEventDue;
- (void)scheduleRetryAttempt;
- (void)startObservingProtectedHealthDataAvailability;
- (void)stopObservingProtectedHealthDataAvailability;
- (void)unscheduleRetryAttempt;
- (id)waitingForRetryState;
- (id)waitingForWakeUpState;
- (void)wakeUpDidOccur;

@end
