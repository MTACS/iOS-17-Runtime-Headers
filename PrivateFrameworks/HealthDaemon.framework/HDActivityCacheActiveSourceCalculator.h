
@interface HDActivityCacheActiveSourceCalculator : NSObject {
    struct vector<HDActivityCacheActiveSource, std::allocator<HDActivityCacheActiveSource>> { 
        struct HDActivityCacheActiveSource {} *__begin_; 
        struct HDActivityCacheActiveSource {} *__end_; 
        struct __compressed_pair<HDActivityCacheActiveSource *, std::allocator<HDActivityCacheActiveSource>> { 
            struct HDActivityCacheActiveSource {} *__value_; 
        } __end_cap_; 
    }  _activationLogEntries;
    long long  _baseSourceIdentifier;
    struct vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::allocator<HDActivityCacheStatisticsBuilderWorkoutSample>> { 
        struct HDActivityCacheStatisticsBuilderWorkoutSample {} *__begin_; 
        struct HDActivityCacheStatisticsBuilderWorkoutSample {} *__end_; 
        struct __compressed_pair<HDActivityCacheStatisticsBuilderWorkoutSample *, std::allocator<HDActivityCacheStatisticsBuilderWorkoutSample>> { 
            struct HDActivityCacheStatisticsBuilderWorkoutSample {} *__value_; 
        } __end_cap_; 
    }  _workouts;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct HDActivityCacheActiveSource { double x1; long long x2; struct vector<long long, std::allocator<long long>> { long long *x_3_1_1; long long *x_3_1_2; struct __compressed_pair<long long *, std::allocator<long long>> { long long *x_3_2_1; } x_3_1_3; } x3; })_baseActiveSource;
- (struct vector<HDActivityCacheActiveSource, std::allocator<HDActivityCacheActiveSource>> { struct HDActivityCacheActiveSource {} *x1; struct HDActivityCacheActiveSource {} *x2; struct __compressed_pair<HDActivityCacheActiveSource *, std::allocator<HDActivityCacheActiveSource>> { struct HDActivityCacheActiveSource {} *x_3_1_1; } x3; })createActiveSourceLog;
- (id)init;
- (void)setActivationLogEntries:(void*)arg1;
- (void)setLocalDeviceSourceIdentifier:(long long)arg1;
- (void)setWorkouts:(void*)arg1;

@end
