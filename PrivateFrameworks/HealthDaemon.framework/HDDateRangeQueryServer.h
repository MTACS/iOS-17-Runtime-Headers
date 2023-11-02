
@interface HDDateRangeQueryServer : HDQueryServer <HDDataObserver, HDDatabaseProtectedDataObserver> {
    NSMutableDictionary * _dateIntervalsBySampleType;
    bool  _resultsDirty;
    NSMutableSet * _sampleTypesToReFetch;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)queryClass;

- (void).cxx_destruct;
- (void)_queue_start;
- (bool)_shouldListenForUpdates;
- (bool)_shouldObserveAllSampleTypes;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;

@end
