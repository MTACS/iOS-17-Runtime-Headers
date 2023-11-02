
@interface _HKSleepStageBucket : NSObject {
    double  _bucketSize;
    double  _distanceFromStart;
    bool  _hasSleepStagesData;
    long long  _numberOfDays;
    NSMutableDictionary * _sleepStageCounts;
    NSDate * _startOfSleep;
}

@property (nonatomic, readonly) double bucketSize;
@property (nonatomic, readonly) double distanceFromStart;
@property (nonatomic) bool hasSleepStagesData;
@property (nonatomic, readonly) long long numberOfDays;
@property (nonatomic, retain) NSMutableDictionary *sleepStageCounts;
@property (nonatomic, readonly) NSDate *startOfSleep;

+ (id)bucketsWithSize:(double)arg1 startOfSleep:(id)arg2 maxSleepDuration:(double)arg3 numberOfDays:(long long)arg4;

- (void).cxx_destruct;
- (long long)_probableSleepStage;
- (double)bucketSize;
- (double)distanceFromStart;
- (bool)hasSleepStagesData;
- (id)initWithBucketSize:(double)arg1 distanceFromStart:(double)arg2 startOfSleep:(id)arg3 numberOfDays:(long long)arg4;
- (long long)numberOfDays;
- (id)probableSleepPeriodSegment;
- (void)setHasSleepStagesData:(bool)arg1;
- (void)setSleepStageCounts:(id)arg1;
- (id)sleepStageCounts;
- (id)startOfSleep;
- (void)updateWithSegment:(id)arg1;

@end
