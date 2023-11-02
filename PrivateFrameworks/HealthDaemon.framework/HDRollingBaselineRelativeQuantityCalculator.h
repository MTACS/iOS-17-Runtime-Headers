
@interface HDRollingBaselineRelativeQuantityCalculator : NSObject {
    NSMutableDictionary * _baselineBySourceID;
    HKRollingBaselineConfiguration * _configuration;
}

@property (nonatomic, readonly) HKRollingBaselineConfiguration *configuration;

- (void).cxx_destruct;
- (void)addNextSampleValue:(double)arg1 startTime:(double)arg2 sourceID:(id)arg3;
- (void)addSupplementarySampleValue:(double)arg1 startTime:(double)arg2 sourceID:(id)arg3;
- (long long)additionalSampleCountRequiredToBaselineSampleWithSourceID:(id)arg1;
- (double)baselineRelativeValueForSampleValue:(double)arg1 sourceID:(id)arg2;
- (id)configuration;
- (bool)hasSufficientDataToBaselineSampleWithSourceID:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (double)mostRecentSampleStartTimeForSourceID:(id)arg1;
- (double)mostRecentSupplementarySampleStartTimeForSourceID:(id)arg1;
- (void)pruneForNextSampleStartTime:(double)arg1 sourceID:(id)arg2;

@end
