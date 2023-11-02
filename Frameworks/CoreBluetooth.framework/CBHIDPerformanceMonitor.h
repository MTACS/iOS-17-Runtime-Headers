
@interface CBHIDPerformanceMonitor : NSObject <CBActivatable> {
    bool  _activateCalled;
    NSArray * _devices;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _excessiveIntervalHandler;
    double  _intervalMs;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    id /* block */  _summaryHandler;
    double  _testSeconds;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, copy) NSArray *devices;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ excessiveIntervalHandler;
@property (nonatomic) double intervalMs;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) id /* block */ summaryHandler;
@property (nonatomic) double testSeconds;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id)devices;
- (id)dispatchQueue;
- (id /* block */)excessiveIntervalHandler;
- (id)init;
- (double)intervalMs;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)setDevices:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setExcessiveIntervalHandler:(id /* block */)arg1;
- (void)setIntervalMs:(double)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setSummaryHandler:(id /* block */)arg1;
- (void)setTestSeconds:(double)arg1;
- (void)setWorkQueue:(id)arg1;
- (id /* block */)summaryHandler;
- (double)testSeconds;
- (id)workQueue;

@end
