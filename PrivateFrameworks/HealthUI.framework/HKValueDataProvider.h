
@interface HKValueDataProvider : NSObject <HKDateCacheObserver, HKSampleTypeUpdateControllerObserver> {
    HKDateCache * _dateCache;
    HKDisplayType * _displayType;
    HKHealthStore * _healthStore;
    bool  _needsToReFetchValue;
    NSHashTable * _observers;
    HKFetchOperation * _outstandingFetchOperation;
    bool  _resultsLoaded;
    id  _value;
}

@property (nonatomic, readonly) HKDateCache *dateCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HKDisplayType *displayType;
@property (nonatomic, readonly) bool hasLoadedData;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id value;

- (void).cxx_destruct;
- (void)_alertObserversDidUpdateValues;
- (bool)_currentlyFetchingValue;
- (void)_fetchValueWithRetryCount:(long long)arg1;
- (void)_handleUnitPreferencesDidChangeNotification:(id)arg1;
- (void)_refreshValueIfNecessary;
- (bool)_requiresValueFetch;
- (void)_setNeedsReFetchValue;
- (void)_transitionToFetchFailure;
- (void)_updateValueWithValue:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)currentValue;
- (id)dateCache;
- (void)dateCacheDidUpdate:(id)arg1 onNotification:(id)arg2;
- (void)dealloc;
- (void)didUpdateValue;
- (id)displayType;
- (id)fetchOperationWithCompletion:(id /* block */)arg1;
- (bool)hasLoadedData;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1 updateController:(id)arg2 dateCache:(id)arg3 displayType:(id)arg4;
- (void)invalidateValue;
- (void)removeObserver:(id)arg1;
- (id)secondaryValue;
- (void)unitPreferencesDidUpdate;
- (void)updateController:(id)arg1 didReceiveHighFrequencyUpdateForType:(id)arg2;
- (void)updateController:(id)arg1 didReceiveUpdateForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4 recoveringFromError:(bool)arg5;
- (id)value;

@end
