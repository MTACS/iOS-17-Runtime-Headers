
@interface HMIMemorySampler : HMFObject <HMFLogging, HMFTimerDelegate> {
    MovingAverage * _average;
    long long  _highWaterMark;
    HMFTimer * _tick;
}

@property (readonly) MovingAverage *average;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property long long highWaterMark;
@property (readonly) Class superclass;
@property (readonly) HMFTimer *tick;

+ (id)logCategory;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)average;
- (long long)highWaterMark;
- (id)init;
- (void)setHighWaterMark:(long long)arg1;
- (void)start;
- (void)stop;
- (id)tick;
- (void)timerDidFire:(id)arg1;

@end
