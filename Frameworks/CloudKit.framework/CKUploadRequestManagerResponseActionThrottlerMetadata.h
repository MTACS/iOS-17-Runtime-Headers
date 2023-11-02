
@interface CKUploadRequestManagerResponseActionThrottlerMetadata : NSObject {
    double  _lastRunTime;
    long long  _repeatCount;
    unsigned long long  _totalThrottleCount;
}

@property (nonatomic) double lastRunTime;
@property (nonatomic) long long repeatCount;
@property (nonatomic) unsigned long long totalThrottleCount;

- (double)lastRunTime;
- (long long)repeatCount;
- (void)setLastRunTime:(double)arg1;
- (void)setRepeatCount:(long long)arg1;
- (void)setTotalThrottleCount:(unsigned long long)arg1;
- (unsigned long long)totalThrottleCount;

@end
