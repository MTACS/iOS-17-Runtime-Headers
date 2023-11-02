
@interface HMDCameraRecordingSessionRetryContext : NSObject {
    NSDictionary * _homePresenceByPairingIdentity;
    double  _maxRetryInterval;
    double  _retryInterval;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) NSDictionary *homePresenceByPairingIdentity;
@property (readonly) double maxRetryInterval;
@property double retryInterval;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)computeNextRetryInterval;
- (id)homePresenceByPairingIdentity;
- (id)initWithWorkQueue:(id)arg1 homePresenceByPairingIdentity:(id)arg2;
- (id)initWithWorkQueue:(id)arg1 homePresenceByPairingIdentity:(id)arg2 preferences:(id)arg3;
- (double)maxRetryInterval;
- (double)retryInterval;
- (void)setRetryInterval:(double)arg1;
- (id)workQueue;

@end
