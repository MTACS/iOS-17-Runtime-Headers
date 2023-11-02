
@interface HDWorkoutLocationSmoother : NSObject <CLLocationSmootherDelegate, HDDataObserver, HDDatabaseProtectedDataObserver, HDForegroundClientProcessObserver, HDHealthDaemonReadyObserver> {
    HDSmoothingTask * _currentSmoothingTask;
    id /* block */  _didCompleteAllPendingSmoothingTasksHandler;
    bool  _isFirstLaunchAndNotYetSmoothed;
    bool  _needToCheckForLocationSeriesOnUnlock;
    NSMutableArray * _pendingSmoothingTasks;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    CLLocationSmoother * _smoother;
    NSObject<OS_dispatch_source> * _timeoutSource;
    id /* block */  _unitTest_wilTriggerSmoothing;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didCompleteAllPendingSmoothingTasksHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unitTest_wilTriggerSmoothing;

- (void).cxx_destruct;
- (void)_associationsSyncedForWorkout:(id)arg1;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)dealloc;
- (id /* block */)didCompleteAllPendingSmoothingTasksHandler;
- (void)foregroundClientProcessesDidChange:(id)arg1 previouslyForegroundBundleIdentifiers:(id)arg2;
- (id)initWithProfile:(id)arg1;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)setDidCompleteAllPendingSmoothingTasksHandler:(id /* block */)arg1;
- (void)setUnitTest_wilTriggerSmoothing:(id /* block */)arg1;
- (void)smoothRouteWithWorkoutUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)unitTest_smoothRouteSample:(id)arg1 withSmoother:(id)arg2 completion:(id /* block */)arg3;
- (id /* block */)unitTest_wilTriggerSmoothing;

@end
