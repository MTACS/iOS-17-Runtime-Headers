
@interface HDActivityCacheDataSource : NSObject <HDActivityCacheStatisticsBuilderSourceDelegate, HDDataObserver> {
    NSDate * _activeDevicePairedDate;
    NSSet * _allObservedTypes;
    HKCategoryType * _deepBreathingSessionType;
    struct unordered_map<long long, bool, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, bool>>> { 
        struct __hash_table<std::__hash_value_type<long long, bool>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, bool>, std::hash<long long>, std::equal_to<long long>>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, bool>, std::equal_to<long long>, std::hash<long long>>, std::allocator<std::__hash_value_type<long long, bool>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, bool>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, bool>, std::hash<long long>, std::equal_to<long long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, bool>, std::equal_to<long long>, std::hash<long long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _isConnectedGymDeviceCache;
    struct unordered_map<long long, bool, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, bool>>> { 
        struct __hash_table<std::__hash_value_type<long long, bool>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, bool>, std::hash<long long>, std::equal_to<long long>>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, bool>, std::equal_to<long long>, std::hash<long long>>, std::allocator<std::__hash_value_type<long long, bool>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, bool>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, bool>, std::hash<long long>, std::equal_to<long long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, bool>, std::equal_to<long long>, std::hash<long long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _isConnectedGymSourceCache;
    struct unordered_map<long long, bool, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, bool>>> { 
        struct __hash_table<std::__hash_value_type<long long, bool>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, bool>, std::hash<long long>, std::equal_to<long long>>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, bool>, std::equal_to<long long>, std::hash<long long>>, std::allocator<std::__hash_value_type<long long, bool>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, bool>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, bool>, std::hash<long long>, std::equal_to<long long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, bool>, std::equal_to<long long>, std::hash<long long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _isWatchSourceCache;
    long long  _nonQuantitySampleAnchor;
    NSString * _nonQuantitySamplesQueryString;
    NSSet * _observedQuantityTypes;
    long long  _previousDayCacheIndex;
    NSDateInterval * _previousDayDateInterval;
    HDActivityCacheHeartRateStatisticsBuilder * _previousDayHeartRateStatisticsBuilder;
    HDActivityCacheStatisticsBuilder * _previousDayStatisticsBuilder;
    NSString * _previousDayStatisticsBuilderTag;
    bool  _previousWatchActivationLogEntryIsSet;
    struct vector<HDActivityCacheStatisticsBuilderSample, std::allocator<HDActivityCacheStatisticsBuilderSample>> { 
        struct HDActivityCacheStatisticsBuilderSample {} *__begin_; 
        struct HDActivityCacheStatisticsBuilderSample {} *__end_; 
        struct __compressed_pair<HDActivityCacheStatisticsBuilderSample *, std::allocator<HDActivityCacheStatisticsBuilderSample>> { 
            struct HDActivityCacheStatisticsBuilderSample {} *__value_; 
        } __end_cap_; 
    }  _previousWatchActivationLogEntryVector;
    HDProfile * _profile;
    long long  _quantitySampleAnchor;
    NSString * _quantitySamplesQueryString;
    NSObject<OS_dispatch_queue> * _queue;
    _HKDelayedOperation * _rebuildOperation;
    HKCategoryType * _standHoursType;
    long long  _targetDayCacheIndex;
    NSDateInterval * _targetDayDateInterval;
    HDActivityCacheHeartRateStatisticsBuilder * _targetDayHeartRateStatisticsBuilder;
    HDActivityCacheStatisticsBuilder * _targetDayStatisticsBuilder;
    NSString * _targetDayStatisticsBuilderTag;
    NSMutableArray * _unfrozenSeriesCache;
    _HKDelayedOperation * _updateOperation;
    HKCategoryType * _watchActivationType;
    HKWorkoutType * _workoutType;
}

@property (nonatomic, copy) NSDate *activeDevicePairedDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSSet *observedQuantityTypes;
@property (nonatomic) long long previousDayCacheIndex;
@property (nonatomic, retain) NSDateInterval *previousDayDateInterval;
@property (nonatomic, readonly) HDActivityCacheHeartRateStatisticsBuilder *previousDayHeartRateStatisticsBuilder;
@property (nonatomic, readonly) HDActivityCacheStatisticsBuilder *previousDayStatisticsBuilder;
@property (nonatomic, copy) NSString *previousDayStatisticsBuilderTag;
@property (readonly) Class superclass;
@property (nonatomic) long long targetDayCacheIndex;
@property (nonatomic, retain) NSDateInterval *targetDayDateInterval;
@property (nonatomic, readonly) HDActivityCacheHeartRateStatisticsBuilder *targetDayHeartRateStatisticsBuilder;
@property (nonatomic, readonly) HDActivityCacheStatisticsBuilder *targetDayStatisticsBuilder;
@property (nonatomic, copy) NSString *targetDayStatisticsBuilderTag;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_samplesAddedToWorkoutNotification:(id)arg1;
- (id)activeDevicePairedDate;
- (id)activityCacheStatisticsBuilder:(id)arg1 sourceOrderForObjectType:(id)arg2;
- (void)dealloc;
- (id)initWithProfile:(id)arg1 observedQuantityTypes:(id)arg2 updateOperation:(id)arg3 rebuildOperation:(id)arg4 queue:(id)arg5;
- (void)invalidate;
- (long long)localDeviceSourceIdentifier;
- (id)observedQuantityTypes;
- (void)pauseUpdates;
- (long long)previousDayCacheIndex;
- (id)previousDayDateInterval;
- (id)previousDayHeartRateStatisticsBuilder;
- (id)previousDayStatisticsBuilder;
- (id)previousDayStatisticsBuilderTag;
- (void)reportTargetDayHeartRateAnalytics;
- (void)resumeUpdates;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)setActiveDevicePairedDate:(id)arg1;
- (void)setPreviousDayCacheIndex:(long long)arg1;
- (void)setPreviousDayDateInterval:(id)arg1;
- (void)setPreviousDayStatisticsBuilderTag:(id)arg1;
- (void)setTargetDayCacheIndex:(long long)arg1;
- (void)setTargetDayDateInterval:(id)arg1;
- (void)setTargetDayStatisticsBuilderTag:(id)arg1;
- (long long)targetDayCacheIndex;
- (id)targetDayDateInterval;
- (id)targetDayHeartRateStatisticsBuilder;
- (id)targetDayStatisticsBuilder;
- (id)targetDayStatisticsBuilderTag;
- (bool)updateWithError:(id*)arg1;

@end
