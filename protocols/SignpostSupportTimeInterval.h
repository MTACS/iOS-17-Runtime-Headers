
@protocol SignpostSupportTimeInterval <NSObject>

@required

- (unsigned long long)durationMachContinuousTime;
- (double)durationMs;
- (unsigned long long)durationNanoseconds;
- (float)durationSeconds;
- (unsigned long long)endMachContinuousTime;
- (double)endMs;
- (unsigned long long)endNanoseconds;
- (double)endSeconds;
- (unsigned long long)startMachContinuousTime;
- (double)startMs;
- (unsigned long long)startNanoseconds;
- (double)startSeconds;
- (double)timebaseRatio;

@end
