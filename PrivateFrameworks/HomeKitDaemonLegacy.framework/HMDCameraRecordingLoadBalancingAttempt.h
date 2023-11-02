
@interface HMDCameraRecordingLoadBalancingAttempt : HMFObject <HMFLogging, HMFTimerDelegate> {
    id /* block */  _completion;
    HMFTimer * _localResponseTimer;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _logIdentifier;
}

@property (copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMFTimer *localResponseTimer;
@property (readonly, copy) NSString *logIdentifier;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)initWithLocalResponseTimeout:(double)arg1 logIdentifier:(id)arg2;
- (id)initWithLocalResponseTimer:(id)arg1 logIdentifier:(id)arg2;
- (id)localResponseTimer;
- (id)logIdentifier;
- (void)setCompletion:(id /* block */)arg1;
- (void)startWithMessage:(id)arg1 messageDispatcher:(id)arg2 completion:(id /* block */)arg3;
- (void)timerDidFire:(id)arg1;

@end
