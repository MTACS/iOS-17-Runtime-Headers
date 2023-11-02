
@interface HDHRDailyHeartRateManager : NSObject <HDActivityCacheManagerObserver, HDHealthDaemonReadyObserver> {
    HDActivityCacheManager * _activityCacheManager;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _restingHeartRateByActivityCacheIndex;
    NSMutableDictionary * _walkingAverageHeartRateByActivityCacheIndex;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_cleanupValuesForTodayCacheIndex:(long long)arg1 yesterdayCacheIndex:(long long)arg2;
- (void)_queue_deleteHeartRateOfType:(id)arg1 forCacheIndex:(long long)arg2 replacementUUID:(id)arg3;
- (void)_queue_replaceHeartRate:(id)arg1 ofType:(id)arg2 forCacheIndex:(long long)arg3 dateInterval:(id)arg4 heartRateByCacheIndex:(id)arg5;
- (void)activityCacheManager:(id)arg1 changedHeartRateSummary:(id)arg2 isToday:(bool)arg3;
- (void)activityCacheManager:(id)arg1 changedTodayActivityCache:(id)arg2;
- (void)daemonReady:(id)arg1;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;

@end
