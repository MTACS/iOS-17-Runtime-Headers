
@interface HMDRemoteDeviceConfirmationHandler : HMFObject <HMFTimerDelegate> {
    id /* block */  _handler;
    HMFTimer * _timeoutTimer;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) HMFTimer *timeoutTimer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (id /* block */)handler;
- (id)initWithTimeoutTimer:(id)arg1 workQueue:(id)arg2 handler:(id /* block */)arg3;
- (void)setHandler:(id /* block */)arg1;
- (id)timeoutTimer;
- (void)timerDidFire:(id)arg1;
- (id)workQueue;

@end
