
@interface CLDispatchSilo : CLSilo {
    NSNumber * _cohortId;
    bool  _isQueueSuspended;
    NSOperationQueue * _operationQueue;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _useCLPermissiveTimer;
}

- (void).cxx_destruct;
- (void)_setLatchedAbsoluteTimestamp:(double)arg1;
- (void)afterInterval:(double)arg1 async:(id /* block */)arg2;
- (void)assertInside;
- (void)assertOutside;
- (void)async:(id /* block */)arg1;
- (double)currentLatchedAbsoluteTimestamp;
- (id)debugDescription;
- (id)getTimeCoercibleVariantInstance;
- (void)heartBeat:(id)arg1;
- (bool)inPermissiveMode;
- (id)initMain;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithUnderlyingQueue:(id)arg1;
- (id)initWithUnderlyingQueue:(id)arg1 bePermissive:(bool)arg2;
- (void)intendToSync;
- (bool)isSuspended;
- (id)newTimer;
- (id)operationQueue;
- (id)queue;
- (void)resume;
- (void)suspend;
- (void)sync:(id /* block */)arg1;

@end
