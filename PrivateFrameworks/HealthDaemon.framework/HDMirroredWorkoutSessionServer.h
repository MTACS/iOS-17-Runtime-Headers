
@interface HDMirroredWorkoutSessionServer : HDWorkoutSessionServer {
    bool  _hasActiveLiveActivity;
    SNAAssertion * _liveActivityAssertion;
    NSObject<OS_dispatch_source> * _liveActivityAssertionTimeoutSource;
    ACActivityCenter * _liveActivityCenter;
    <BSInvalidatable> * _liveActivitySubscription;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _pendingClientUpdates;
    NSObject<OS_dispatch_source> * _periodicRuntimeSource;
    long long  _sessionState;
}

- (void).cxx_destruct;
- (void)_didInvalidateLiveActivityBackgroundAssertion:(id)arg1 error:(id)arg2;
- (void)_didUpdateLiveActivity:(id)arg1;
- (void)_enqueueClientUpdate:(id /* block */)arg1 launchClient:(bool)arg2 waitForClientSetup:(bool)arg3;
- (void)_executeClientUpdate:(id /* block */)arg1;
- (void)_flushPendingDataRequests;
- (void)_launchClientInTheBackground;
- (void)_liveActivityBackgroundAssertionDidTimeout;
- (bool)_queue_clientApplicationCanStartWorkoutSessionWithError:(id*)arg1;
- (void)_schedulePeriodicRuntime;
- (void)_setLiveActivityBackgroundAssertionTimeout;
- (void)_setupLiveActivityObserver;
- (void)_takeLiveActivityBackgroundAssertion;
- (bool)beginNewActivityWithConfiguration:(id)arg1 date:(id)arg2 metadata:(id)arg3 error:(id*)arg4;
- (void)dealloc;
- (void)didDisconnectFromRemoteWithError:(id)arg1;
- (void)didReceiveDataFromRemoteWorkoutSession:(id)arg1 completion:(id /* block */)arg2;
- (bool)endCurrentActivityOnDate:(id)arg1 error:(id*)arg2;
- (id)initWithProfile:(id)arg1 configuration:(id)arg2 sessionUUID:(id)arg3 globalState:(id)arg4 clientBundleIdentifier:(id)arg5;
- (void)receivedBackgroundRuntimeRequestWithCompletion:(id /* block */)arg1;
- (long long)sessionType;
- (bool)setTargetState:(long long)arg1 date:(id)arg2 error:(id*)arg3;
- (void)setTaskServer:(id)arg1;
- (bool)shouldStopPreviousSession;
- (long long)state;
- (void)syncCurrentActivity:(id)arg1 completion:(id /* block */)arg2;
- (void)syncSessionEvent:(long long)arg1 date:(id)arg2;
- (void)syncTransitionToState:(long long)arg1 date:(id)arg2 completion:(id /* block */)arg3;
- (void)syncWorkoutEvents:(id)arg1 completion:(id /* block */)arg2;

@end
