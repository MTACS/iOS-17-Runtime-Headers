
@interface HKMCDailyHeartStatistics : NSObject <HKSampleAggregateCacheProviding, NSCopying, NSSecureCoding> {
    long long  _dayIndex;
    HKMCHeartStatistics * _tenthPercentileAsleepHeartRateStatistics;
    HKMCHeartStatistics * _tenthPercentileAwakeHeartRateStatistics;
}

@property (nonatomic, readonly) long long dayIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) HKMCHeartStatistics *tenthPercentileAsleepHeartRateStatistics;
@property (nonatomic, readonly, copy) HKMCHeartStatistics *tenthPercentileAwakeHeartRateStatistics;

+ (id)dailyHeartStatisticsWithDayIndex:(long long)arg1 asleepStatistics:(id)arg2 awakeStatistics:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)bucketIndexForIntervalComponents:(id)arg1 anchorDate:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dayIndex;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)getData:(id*)arg1 error:(id*)arg2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDayIndex:(long long)arg1 tenthPercentileAsleepHeartRateStatistics:(id)arg2 tenthPercentileAwakeHeartRateStatistics:(id)arg3;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (id)tenthPercentileAsleepHeartRateStatistics;
- (id)tenthPercentileAwakeHeartRateStatistics;

@end
