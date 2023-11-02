
@interface _HDRollingBaseline : NSObject {
    HKRollingBaselineConfiguration * _configuration;
    NSMutableArray * _samples;
    double  _samplesSum;
    NSMutableArray * _supplementarySamples;
    double  _supplementarySamplesSum;
}

@property (nonatomic, readonly) long long additionalSampleCountRequiredToBaseline;
@property (nonatomic, readonly) double currentBaseline;
@property (nonatomic, readonly) bool hasSufficientDataToBaseline;
@property (nonatomic, readonly) double mostRecentSampleStartTime;
@property (nonatomic, readonly) double mostRecentSupplementarySampleStartTime;

- (void).cxx_destruct;
- (void)_assertValidNextStartTime:(double)arg1;
- (unsigned long long)_sampleCount;
- (double)_sum;
- (void)addNextSampleValue:(double)arg1 startTime:(double)arg2;
- (void)addSupplementarySampleValue:(double)arg1 startTime:(double)arg2;
- (long long)additionalSampleCountRequiredToBaseline;
- (double)currentBaseline;
- (bool)hasSufficientDataToBaseline;
- (id)initWithConfiguration:(id)arg1;
- (double)mostRecentSampleStartTime;
- (double)mostRecentSupplementarySampleStartTime;
- (void)pruneForNextSampleStartTime:(double)arg1;

@end
