
@interface HMMTRAccessoryReachabilityManager : HMFObject <HMFTimerDelegate> {
    HMFTimer * _reachabilityTimer;
    bool  _reachable;
    HMMTRAccessoryServer * _server;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMFTimer *reachabilityTimer;
@property (nonatomic) bool reachable;
@property (nonatomic, readonly) HMMTRAccessoryServer *server;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithServer:(id)arg1 timeout:(long long)arg2 queue:(id)arg3;
- (id)reachabilityTimer;
- (void)reachabilityUpdate;
- (bool)reachable;
- (id)server;
- (void)setReachabilityTimer:(id)arg1;
- (void)setReachable:(bool)arg1;
- (void)start;
- (void)stop;
- (void)timerDidFire:(id)arg1;

@end
