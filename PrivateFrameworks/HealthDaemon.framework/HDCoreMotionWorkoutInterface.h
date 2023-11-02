
@interface HDCoreMotionWorkoutInterface : NSObject <HDAssertionObserver> {
    NSString * _appIdentifier;
    HDAssertionManager * _assertionManager;
    CMWorkoutManager * _cmWorkoutManager;
    CMWorkoutMets * _cmWorkoutMets;
    CMWorkoutOverview * _cmWorkoutOverview;
    CMWorkout * _currentCMWorkout;
    NSUUID * _currentSessionUUID;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) CMWorkoutManager *cmWorkoutManager;
@property (nonatomic, readonly) CMWorkout *currentWorkout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (void)averageMETsForWorkoutSessionUUID:(id)arg1 completion:(id /* block */)arg2;
- (id)cmWorkoutManager;
- (id)currentWorkout;
- (void)dealloc;
- (id)init;
- (void)pauseWorkoutForWorkoutSessionUUID:(id)arg1;
- (void)resumeWorkoutForWorkoutSessionUUID:(id)arg1;
- (void)setCurrentActivity:(id)arg1 isManualTransition:(bool)arg2;
- (id)takeCMWorkoutAssertionForOwnerIdentifier:(id)arg1 sessionUUID:(id)arg2 workoutConfiguration:(id)arg3 activityConfigurations:(id)arg4 enableWorkoutChangeDetection:(bool)arg5;
- (void)unitTest_addCoreMotionAssertionObserver:(id)arg1;
- (void)unitTest_setCMWorkoutManager:(id)arg1;

@end
