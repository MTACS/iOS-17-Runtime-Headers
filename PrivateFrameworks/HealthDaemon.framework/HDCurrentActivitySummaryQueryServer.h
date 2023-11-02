
@interface HDCurrentActivitySummaryQueryServer : HDQueryServer <HDCurrentActivitySummaryHelperObserver> {
    NSDictionary * _collectionIntervals;
    HDCurrentActivitySummaryHelper * _currentSummaryHelper;
    HKActivitySummary * _lastActivitySummary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id*)arg5;
+ (Class)queryClass;

- (void).cxx_destruct;
- (void)_queue_start;
- (void)_queue_startDataCollection;
- (void)_queue_stop;
- (void)_queue_stopDataCollection;
- (bool)_shouldExecuteWhenProtectedDataIsUnavailable;
- (bool)_shouldListenForUpdates;
- (void)currentActivitySummaryHelper:(id)arg1 didUpdateTodayActivitySummary:(id)arg2 changedFields:(unsigned long long)arg3;
- (void)currentActivitySummaryHelper:(id)arg1 didUpdateYesterdayActivitySummary:(id)arg2 changedFields:(unsigned long long)arg3;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

@end
