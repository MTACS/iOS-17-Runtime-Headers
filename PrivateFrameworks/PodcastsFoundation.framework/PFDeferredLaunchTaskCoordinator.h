
@interface PFDeferredLaunchTaskCoordinator : NSObject {
    void _adminQueue;
    void _deferring;
    void _tasks;
    void _timeoutScheduled;
    void _workQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)deferWork:(id /* block */)arg1;
- (void)deferWorkOnQueue:(id)arg1 withBlock:(id /* block */)arg2;
- (id)init;
- (void)scheduleDefaultDeferralDeadline;
- (void)scheduleDeferralDeadlineAfter:(double)arg1;
- (void)stopDeferring;

@end
