
@interface SignpostAnimationSubInterval : NSObject <SignpostSupportTimeInterval> {
    unsigned long long  _endMachContinuousTime;
    NSMutableArray * _parentAnimationIntervals;
    unsigned long long  _startMachContinuousTime;
    double  _timebaseRatio;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long endMachContinuousTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableArray *parentAnimationIntervals;
@property (nonatomic, readonly) unsigned long long startMachContinuousTime;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timebaseRatio;

- (void).cxx_destruct;
- (unsigned long long)durationMachContinuousTime;
- (double)durationMs;
- (unsigned long long)durationNanoseconds;
- (float)durationSeconds;
- (unsigned long long)endMachContinuousTime;
- (double)endMs;
- (unsigned long long)endNanoseconds;
- (double)endSeconds;
- (unsigned long long)hash;
- (id)initWithInterval:(id)arg1;
- (id)initWithStartMCT:(unsigned long long)arg1 endMCT:(unsigned long long)arg2 timebaseRatio:(double)arg3;
- (bool)isEqual:(id)arg1;
- (id)parentAnimationIntervals;
- (unsigned long long)startMachContinuousTime;
- (double)startMs;
- (unsigned long long)startNanoseconds;
- (double)startSeconds;
- (double)timebaseRatio;

@end
