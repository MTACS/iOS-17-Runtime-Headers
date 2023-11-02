
@interface HDHeartRateSummaryQueryServer : HDQueryServer <HDActivityCacheManagerObserver> {
    HDActivityCacheManager * _activityCacheManager;
    HKHeartRateSummary * _latestSummary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id*)arg5;
+ (Class)queryClass;

- (void).cxx_destruct;
- (void)_queue_start;
- (void)_queue_stop;
- (bool)_shouldExecuteWhenProtectedDataIsUnavailable;
- (void)activityCacheManager:(id)arg1 changedHeartRateSummary:(id)arg2 isToday:(bool)arg3;
- (void)activityCacheManager:(id)arg1 changedTodayActivityCache:(id)arg2;

@end
