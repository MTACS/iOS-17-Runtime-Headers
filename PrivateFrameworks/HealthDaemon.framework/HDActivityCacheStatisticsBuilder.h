
@interface HDActivityCacheStatisticsBuilder : NSObject {
    struct vector<HDActivityCacheActiveSource, std::allocator<HDActivityCacheActiveSource>> { 
        struct HDActivityCacheActiveSource {} *__begin_; 
        struct HDActivityCacheActiveSource {} *__end_; 
        struct __compressed_pair<HDActivityCacheActiveSource *, std::allocator<HDActivityCacheActiveSource>> { 
            struct HDActivityCacheActiveSource {} *__value_; 
        } __end_cap_; 
    }  _activationLogSamples;
    struct vector<HDActivityCacheActiveSource, std::allocator<HDActivityCacheActiveSource>> { 
        struct HDActivityCacheActiveSource {} *__begin_; 
        struct HDActivityCacheActiveSource {} *__end_; 
        struct __compressed_pair<HDActivityCacheActiveSource *, std::allocator<HDActivityCacheActiveSource>> { 
            struct HDActivityCacheActiveSource {} *__value_; 
        } __end_cap_; 
    }  _activeSourcesList;
    double  _builderEndTime;
    double  _builderStartTime;
    double  _deepBreathingDurationValue;
    double  _intervalDuration;
    HKQuantity * _lastActiveEnergyValue;
    HKQuantity * _lastDistanceWalkingValue;
    NSNumber * _lastExerciseMinuteValue;
    NSNumber * _lastFlightsClimbedValue;
    NSNumber * _lastMoveMinuteValue;
    NSNumber * _lastPushCountValue;
    NSNumber * _lastStandHourValue;
    NSNumber * _lastStepCountValue;
    NSString * _loggingName;
    <HDActivityCacheStatisticsBuilderSourceDelegate> * _sourceDelegate;
    struct map<_HKDataTypeCode, std::map<long long, _HDActivityCacheSourceTotal>, std::less<_HKDataTypeCode>, std::allocator<std::pair<const _HKDataTypeCode, std::map<long long, _HDActivityCacheSourceTotal>>>> { 
        struct __tree<std::__value_type<_HKDataTypeCode, std::map<long long, _HDActivityCacheSourceTotal>>, std::__map_value_compare<_HKDataTypeCode, std::__value_type<_HKDataTypeCode, std::map<long long, _HDActivityCacheSourceTotal>>, std::less<_HKDataTypeCode>>, std::allocator<std::__value_type<_HKDataTypeCode, std::map<long long, _HDActivityCacheSourceTotal>>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<_HKDataTypeCode, std::map<long long, _HDActivityCacheSourceTotal>>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<_HKDataTypeCode, std::__value_type<_HKDataTypeCode, std::map<long long, _HDActivityCacheSourceTotal>>, std::less<_HKDataTypeCode>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _sourceTotalsByIntervalIndexByTypeCode;
    struct vector<HDActivityCacheStatisticsBuilderStandHourSample, std::allocator<HDActivityCacheStatisticsBuilderStandHourSample>> { 
        struct HDActivityCacheStatisticsBuilderStandHourSample {} *__begin_; 
        struct HDActivityCacheStatisticsBuilderStandHourSample {} *__end_; 
        struct __compressed_pair<HDActivityCacheStatisticsBuilderStandHourSample *, std::allocator<HDActivityCacheStatisticsBuilderStandHourSample>> { 
            struct HDActivityCacheStatisticsBuilderStandHourSample {} *__value_; 
        } __end_cap_; 
    }  _standHourSamples;
    struct vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::allocator<HDActivityCacheStatisticsBuilderWorkoutSample>> { 
        struct HDActivityCacheStatisticsBuilderWorkoutSample {} *__begin_; 
        struct HDActivityCacheStatisticsBuilderWorkoutSample {} *__end_; 
        struct __compressed_pair<HDActivityCacheStatisticsBuilderWorkoutSample *, std::allocator<HDActivityCacheStatisticsBuilderWorkoutSample>> { 
            struct HDActivityCacheStatisticsBuilderWorkoutSample {} *__value_; 
        } __end_cap_; 
    }  _workouts;
}

@property (nonatomic) double intervalDuration;
@property (nonatomic) <HDActivityCacheStatisticsBuilderSourceDelegate> *sourceDelegate;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)activeEnergyValue;
- (void)addActivationLogSamples:(const void*)arg1;
- (void)addDeepBreathingSessionDuration:(double)arg1;
- (void)addDeviceSample:(struct HDActivityCacheStatisticsBuilderSample { double x1; double x2; double x3; long long x4; })arg1 typeCode:(long long)arg2;
- (void)addDeviceSamples:(const void*)arg1 typeCode:(long long)arg2;
- (void)addStandHourSamples:(const void*)arg1;
- (void)addWorkoutSample:(struct HDActivityCacheStatisticsBuilderSample { double x1; double x2; double x3; long long x4; })arg1 typeCode:(long long)arg2;
- (void)addWorkouts:(const void*)arg1;
- (id)createExerciseStatisticsWithIntervalComponents:(id)arg1 calendar:(id)arg2;
- (id)createMoveMinuteStatisticsWithIntervalComponents:(id)arg1 calendar:(id)arg2;
- (id)createMoveStatisticsWithIntervalComponents:(id)arg1 calendar:(id)arg2;
- (id)createStandStatisticsWithCalendar:(id)arg1;
- (id)createStatisticsCollectionWithType:(id)arg1 intervalComponents:(id)arg2 calendar:(id)arg3;
- (double)deepBreathingDurationValue;
- (id)distanceWalkingValue;
- (long long)exerciseMinuteValue;
- (long long)flightsClimbedValue;
- (id)init;
- (id)initWithDateInterval:(id)arg1 loggingName:(id)arg2;
- (double)intervalDuration;
- (long long)moveMinuteValue;
- (long long)pushCountValue;
- (void)setIntervalDuration:(double)arg1;
- (void)setSourceDelegate:(id)arg1;
- (id)sourceDelegate;
- (long long)standHourValue;
- (long long)stepCountValue;
- (id)workoutSamplesWithSourceManager:(id)arg1;

@end
