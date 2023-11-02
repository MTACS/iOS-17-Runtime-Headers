
@interface HKSampleTypeUpdateController : NSObject {
    bool  _applicationIsInBackground;
    HKHealthStore * _healthStore;
    NSMutableDictionary * _observersByType;
    NSMutableDictionary * _outstandingQueriesByType;
    NSMutableDictionary * _queryStatesByType;
    NSTimer * _throttlePollTimer;
    NSMutableDictionary * _throttledDataBySampleType;
}

- (void).cxx_destruct;
- (id)_allObservedTypes;
- (void)_applicationMovingToBackground:(id)arg1;
- (void)_applicationMovingToForeground:(id)arg1;
- (void)_callObservers:(id)arg1 withType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4 recoveringFromError:(bool)arg5;
- (void)_createQueryForType:(id)arg1;
- (void)_drainAllThrottledDataIfNecessary;
- (void)_drainThrottledDataIfNecessary:(id)arg1 recoveringFromError:(bool)arg2;
- (void)_errorRecoveryCallbacksForType:(id)arg1;
- (id)_failedQuerySampleTypes;
- (id)_findThrottledUpdateData:(id)arg1;
- (void)_handleHighFrequencyObserverCallbacksForType:(id)arg1;
- (void)_handleQueryCallbackForType:(id)arg1 samplesAdded:(id)arg2 objectsDeleted:(id)arg3 error:(id)arg4;
- (void)_handleQueryErrorForType:(id)arg1 error:(id)arg2;
- (void)_handleQuerySuccessForType:(id)arg1 samplesAdded:(id)arg2 objectsRemoved:(id)arg3;
- (void)_installThrottlingTimer;
- (bool)_isHighFrequencyDataType:(id)arg1;
- (id)_observersForType:(id)arg1;
- (long long)_queryStateForType:(id)arg1;
- (void)_removeQueryForType:(id)arg1 queryState:(long long)arg2;
- (void)_removeThrottlingTimer;
- (void)_resumeFailedQueries;
- (void)_sendThrottledUpdatesToObservers:(id)arg1 recoveringFromError:(bool)arg2;
- (void)_setQueryState:(long long)arg1 forType:(id)arg2;
- (bool)_typeRequiresNewQuery:(id)arg1;
- (void)addObserver:(id)arg1 forType:(id)arg2;
- (id)initWithHealthStore:(id)arg1;
- (bool)isQueryStateRunningForType:(id)arg1;
- (void)removeObserver:(id)arg1 forType:(id)arg2;

@end
