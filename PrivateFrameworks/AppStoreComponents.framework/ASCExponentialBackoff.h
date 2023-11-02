
@interface ASCExponentialBackoff : NSObject <ASCBackoff> {
    JEUnfairLock * _attemptLock;
    long long  _attemptsMade;
    double  _baseSleepTimeInterval;
    double  _maxSleepTimeInterval;
}

@property (nonatomic, readonly) JEUnfairLock *attemptLock;
@property (nonatomic) long long attemptsMade;
@property (nonatomic, readonly) double baseSleepTimeInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double maxSleepTimeInterval;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)attemptLock;
- (long long)attemptsMade;
- (double)baseSleepTimeInterval;
- (id)initWithBaseSleepTimeInterval:(double)arg1 maxSleepTimeInterval:(double)arg2;
- (double)maxSleepTimeInterval;
- (double)nextSleepTimeInterval;
- (void)reset;
- (void)setAttemptsMade:(long long)arg1;

@end
