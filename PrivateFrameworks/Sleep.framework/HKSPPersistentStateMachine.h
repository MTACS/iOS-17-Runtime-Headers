
@interface HKSPPersistentStateMachine : HKSPStateMachine <HKSPPersistentStateMachineDelegate, HKSPPersistentStateMachineEventHandler> {
    NSSet * _allowedStates;
    id /* block */  _currentDateProvider;
    NSString * _identifier;
    <HKSPStatePersistence> * _persistence;
}

@property (nonatomic, readonly) NSSet *allowedStates;
@property (nonatomic, readonly) <NAScheduler> *callbackScheduler;
@property (nonatomic, readonly, copy) id /* block */ currentDateProvider;
@property (nonatomic, readonly) HKSPPersistentStateMachineState *currentState;
@property (nonatomic, readonly) NSDate *currentStateExpirationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) <HKSPStatePersistence> *persistence;
@property (nonatomic, readonly) NSArray *scheduledExpirationStateIdentifiers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allowedStates;
- (id /* block */)currentDateProvider;
- (id)currentStateExpirationDate;
- (void)enterState:(id)arg1;
- (id)identifier;
- (id)initWithAllowedStates:(id)arg1 delegate:(id)arg2 infoProvider:(id)arg3;
- (id)initWithIdentifier:(id)arg1 allowedStates:(id)arg2 persistence:(id)arg3 delegate:(id)arg4 infoProvider:(id)arg5;
- (id)initWithIdentifier:(id)arg1 allowedStates:(id)arg2 persistence:(id)arg3 delegate:(id)arg4 infoProvider:(id)arg5 currentDateProvider:(id /* block */)arg6;
- (id)initWithIdentifier:(id)arg1 persistence:(id)arg2 delegate:(id)arg3 infoProvider:(id)arg4 currentDateProvider:(id /* block */)arg5;
- (id)persistedState;
- (id)persistence;
- (void)scheduleStateExpiration;
- (id)scheduledExpirationStateIdentifiers;
- (void)stateWithIdentifierDidExpire:(id)arg1;
- (void)unscheduleStateExpiration;

@end
