
@interface HDDefaultWorkoutSessionController : NSObject <HDWorkoutEventCollectorDelegate, HDWorkoutSessionController> {
    HDSessionAssertionGroup * _assertionGroup;
    HDBiomeInterface * _bmInterface;
    NSSet * _collectedTypes;
    HKWorkoutActivity * _currentActivity;
    HDWorkoutEventsManager * _eventsManager;
    id /* block */  _hkTestTransitionCompletionHandler;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    HDWorkoutSessionConfiguration * _sessionConfiguration;
    long long  _sessionServerState;
    <HDWorkoutSessionStateController> * _sessionStateController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)recoveryIdentifier;
+ (void)willFinishSessionWithRecoveryData:(id)arg1 profile:(id)arg2;

- (void).cxx_destruct;
- (void)_lowPowerModeStateChanged:(id)arg1;
- (void)beginNewActivity:(id)arg1;
- (void)dealloc;
- (bool)enableAutomaticDetectionForActivityConfigurations:(id)arg1;
- (void)endCurrentActivity:(id)arg1;
- (void)fakeActivityDetection:(id)arg1 workoutActivity:(id)arg2;
- (void)hktest_setStateTransitionCompletionHandler:(id /* block */)arg1;
- (id)initWithProfile:(id)arg1 sessionConfiguration:(id)arg2 sessionStateController:(id)arg3 recoveryState:(id)arg4;
- (void)receivedWorkoutEvent:(id)arg1;
- (void)receivedWorkoutEvent:(id)arg1 forWorkoutActivity:(id)arg2;
- (void)unitTest_setCMWorkoutManager:(id)arg1;
- (void)unitTest_suggestActivity:(id)arg1;
- (void)workoutSessionServer:(id)arg1 accumulatorDidChange:(id)arg2;
- (void)workoutSessionServer:(id)arg1 didChangeConfiguration:(id)arg2;
- (void)workoutSessionServer:(id)arg1 didTransitionFromState:(long long)arg2 toState:(long long)arg3 date:(id)arg4;

@end
