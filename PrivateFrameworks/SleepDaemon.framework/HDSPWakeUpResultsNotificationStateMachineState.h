
@interface HDSPWakeUpResultsNotificationStateMachineState : HKSPPersistentStateMachineState <HDSPWakeUpResultsNotificationStateMachineEventHandler>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HDSPWakeUpResultsNotificationStateMachineInfoProvider> *infoProvider;
@property (getter=isNotificationEnabled, nonatomic, readonly) bool notificationEnabled;
@property (nonatomic, readonly) HDSPWakeUpResultsNotificationStateMachine *stateMachine;
@property (readonly) Class superclass;

- (void)didPostResultsNotification;
- (id)infoProvider;
- (bool)isNotificationEnabled;
- (void)protectedHealthDataDidBecomeAvailable;
- (void)queryDidComplete;
- (void)queryDidFailWithError:(id)arg1;
- (void)retryAttemptEventDue;
- (void)stateDidExpire;
- (void)updateState;
- (void)wakeUpDidOccur;

@end
