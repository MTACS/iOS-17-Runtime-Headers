
@interface CMSpringTrackerInternal : NSObject {
    id /* block */  fHandler;
    NSObject<OS_dispatch_queue> * fInternalQueue;
    void * fLocationdConnection;
    bool  fTrackingStarted;
}

- (void)_handleStartStopResponse:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage {} *x1; struct __shared_weak_count {} *x2; })arg1 handler:(id /* block */)arg2;
- (bool)_isTracking;
- (void)_querySpringDataFromRecord:(id)arg1 handler:(id /* block */)arg2;
- (void)_startWithHandler:(id /* block */)arg1;
- (void)_stopWithHandler:(id /* block */)arg1;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end
