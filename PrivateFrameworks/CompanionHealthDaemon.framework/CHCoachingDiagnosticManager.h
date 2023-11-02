
@interface CHCoachingDiagnosticManager : NSObject <HDDiagnosticObject, HDPeriodicActivityDelegate, HDProfileReadyObserver> {
    NSDate * _cachedLastSubmittedDate;
    long long  _lastRingCompletionSubmittedIndex;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    HDPeriodicActivity * _scheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_queue_lastRingCompletionSubmittedIndex;
- (id)_queue_lastSubmittedDate;
- (bool)_queue_performRingCompletionDiagnostics;
- (void)_queue_setLastRingCompletionSubmittedIndex:(long long)arg1;
- (void)_queue_setLastSubmittedDate:(id)arg1;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)initWithProfile:(id)arg1;
- (void)performPeriodicActivity:(id)arg1 completion:(id /* block */)arg2;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (bool)periodicActivityRequiresProtectedData:(id)arg1;
- (void)profileDidBecomeReady:(id)arg1;

@end
