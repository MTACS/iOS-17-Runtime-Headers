
@interface HDActivityCacheHeartRateStatisticsBuilder : NSObject {
    long long  _activityCacheIndex;
    HKHeartRateSummaryStatistics * _allDayStatistics;
    NSMutableDictionary * _averageCalculatorsByWorkoutUUID;
    NSMutableDictionary * _breatheSessionDateIntervalBySessionUUID;
    NSMutableDictionary * _breatheSessionReadingsBySessionUUID;
    NSMutableArray * _breatheStatistics;
    NSDateInterval * _dateInterval;
    NSDateComponents * _dateOfBirthComponents;
    struct vector<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample, std::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample>> { 
        struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample {} *__begin_; 
        struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample {} *__end_; 
        struct __compressed_pair<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *, std::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample>> { 
            struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample {} *__value_; 
        } __end_cap_; 
    }  _heartRateSamples;
    NSMutableDictionary * _recoveryReadingsByWorkoutUUID;
    HKQuantity * _restingHeartRate;
    HKQuantity * _walkingAverageHeartRate;
    NSMutableArray * _workoutRecoveryStatistics;
    NSMutableArray * _workoutStatistics;
    struct vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::allocator<HDActivityCacheStatisticsBuilderWorkoutSample>> { 
        struct HDActivityCacheStatisticsBuilderWorkoutSample {} *__begin_; 
        struct HDActivityCacheStatisticsBuilderWorkoutSample {} *__end_; 
        struct __compressed_pair<HDActivityCacheStatisticsBuilderWorkoutSample *, std::allocator<HDActivityCacheStatisticsBuilderWorkoutSample>> { 
            struct HDActivityCacheStatisticsBuilderWorkoutSample {} *__value_; 
        } __end_cap_; 
    }  _workouts;
}

@property (nonatomic, readonly) HKHeartRateSummary *heartRateSummary;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addBreatheSessions:(const void*)arg1;
- (void)addHeartRateSamples:(const void*)arg1;
- (void)addWorkouts:(const void*)arg1;
- (id)heartRateSummary;
- (id)initWithDateInterval:(id)arg1 activityCacheIndex:(long long)arg2;
- (void)reportDailyAnalyticsWithProfile:(id)arg1;
- (void)setDateOfBirthComponents:(id)arg1;

@end
