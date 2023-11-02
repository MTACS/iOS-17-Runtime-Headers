
@interface BLSHLocalHostSceneEnvironmentUpdater : NSObject <BLSBacklightSceneEnvironmentUpdating, BLSHBacklightEnvironmentStateMachineDelegate, BLSHBacklightInactiveEnvironmentSessionUpdating> {
    long long  _backlightState;
    BLSHCriticalAssertTester * _criticalAssertTester;
    BLSHBacklightEnvironmentStateMachine * _environmentStateMachine;
    <BLSBacklightSceneEnvironment_Private> * _localHostEnvironment;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BLSHBacklightInactiveEnvironmentSession * _lock_inactiveEnvSession;
    BLSBacklightChangeEvent * _lock_localTriggerEventForPerformingEvent;
    unsigned long long  _lock_nextEventID;
    BLSBacklightSceneUpdate * _lock_sceneUpdateForPerformingEvent;
    NSMutableSet * _lock_timelinesCalculators;
    BLSHBacklightEnvironmentPresentation * _lock_updatingToPresentation;
    <BLSHOSTimerProviding> * _osTimerProvider;
    <BLSHBacklightEnvironmentSessionProviding> * _sessionProvider;
}

@property (nonatomic, readonly) long long backlightState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)aggregateDesiredFidelityForBacklightState:(long long)arg1 withCompletion:(id /* block */)arg2;
- (long long)backlightState;
- (id)description;
- (void)destroyInactiveEnvSession;
- (bool)ensureAlwaysOnSessionCreated;
- (void)ensureInactiveEnvSessionCreated;
- (void)environmentStateMachine:(id)arg1 didBeginUpdateToState:(long long)arg2;
- (void)environmentStateMachine:(id)arg1 didCompleteUpdateToState:(long long)arg2;
- (void)environmentStateMachine:(id)arg1 didUpdateToPresentation:(id)arg2;
- (void)environmentStateMachine:(id)arg1 didUpdateToSpecifier:(id)arg2;
- (void)inactiveEnvironmentSession:(id)arg1 updateToPresentation:(id)arg2;
- (id)initWithSessionProvider:(id)arg1 localHostEnvironment:(id)arg2;
- (void)onMain_ensureInactiveEnvSessionCreated;
- (void)performBlockWithSubhostedEnvironments:(id /* block */)arg1;
- (void)performDesiredFidelityRequest:(id)arg1;
- (void)performFrameSpecifiersRequest:(id)arg1;
- (void)performWithSubhostedEnvironmentsFromPresentationEntries:(id)arg1 block:(id /* block */)arg2;
- (id)subHostedHostEnvironments;
- (void)timelinesForDateInterval:(id)arg1 previousPresentationDate:(id)arg2 localHostEnvironment:(id)arg3 shouldReset:(bool)arg4 completion:(id /* block */)arg5;
- (void)updatedEnvironmentWithDelta:(struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; })arg1 backlightSceneUpdate:(id)arg2;

@end
