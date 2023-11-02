
@interface AMSMediaTokenServiceThrottler : NSObject {
    unsigned long long  _attemptNumber;
    double  _baseSleepInterval;
    double  _maxSleepInterval;
    NSDate * _throttleDate;
}

@property (nonatomic) unsigned long long attemptNumber;
@property (nonatomic) double baseSleepInterval;
@property (nonatomic) double maxSleepInterval;
@property (nonatomic, retain) NSDate *throttleDate;

- (void).cxx_destruct;
- (double)_calculateThrottleInterval;
- (unsigned long long)attemptNumber;
- (double)baseSleepInterval;
- (id)initWithBaseSleepInterval:(double)arg1 maxSleepInterval:(double)arg2;
- (double)maxSleepInterval;
- (void)reset;
- (void)setAttemptNumber:(unsigned long long)arg1;
- (void)setBaseSleepInterval:(double)arg1;
- (void)setMaxSleepInterval:(double)arg1;
- (void)setThrottleDate:(id)arg1;
- (bool)shouldThrottle;
- (void)throttle;
- (id)throttleDate;

@end
