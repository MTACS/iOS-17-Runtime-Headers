
@interface HKSleepStagePeriodsAggregator : NSObject {
    NSArray * _buckets;
    double  _maximumDuration;
    NSArray * _sleepDaySummaries;
    NSDate * _startDate;
}

@property (nonatomic, readonly) NSArray *buckets;
@property (nonatomic, readonly) double maximumDuration;
@property (nonatomic, readonly) NSArray *sleepDaySummaries;
@property (nonatomic, readonly) NSDate *startDate;

+ (id)_averageStartDateFromSleepDaySummaries:(id)arg1 summaryDateInterval:(id)arg2;
+ (double)_maximumDurationFromSleepDaySummaries:(id)arg1;

- (void).cxx_destruct;
- (id)_aggregateSleepInterval;
- (id)_aggregateSleepPeriodSegments;
- (long long)_bucketIndexForDistanceFromStart:(double)arg1;
- (id)aggregateSleepPeriods;
- (id)buckets;
- (id)initWithSleepDaySummaries:(id)arg1 bucketSize:(double)arg2 summaryDateInterval:(id)arg3;
- (double)maximumDuration;
- (id)sleepDaySummaries;
- (id)startDate;

@end
