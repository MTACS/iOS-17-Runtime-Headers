
@interface SBApplicationLayoutGestureMetric : NSObject <SBFAnalyticsBackendEventHandling> {
    PETScalarEventTracker * _movePIPGestureCompletionTracker;
    PETScalarEventTracker * _moveSideGestureCompletionTracker;
    PETScalarEventTracker * _pinGestureCompletionTracker;
    PETScalarEventTracker * _unpinGestureCompletionTracker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)_moveActionForInitialFloatingConfig:(long long)arg1 finalConfig:(long long)arg2;
- (unsigned long long)_moveActionForInitialSpaceConfig:(long long)arg1 finalConfig:(long long)arg2;
- (bool)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;
- (id)init;

@end
