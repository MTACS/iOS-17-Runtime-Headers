
@interface HDStatisticsCollectionQueryServer : HDQueryServer <HDQuantitySeriesObserver> {
    bool  _addedSamplesRequireProtectedData;
    NSDate * _anchorDate;
    long long  _cacheHits;
    HKStatisticsCollectionCacheSettings * _cacheSettings;
    HDSampleAggregateCachingSession * _cachingSession;
    HDStatisticsCollectionCalculator * _calculator;
    <HDStatisticsCollectionQueryServerDataSource> * _dataSource;
    bool  _deliversUpdates;
    bool  _hasScheduledUpdate;
    _HKDateIntervalCollection * _intervalCollection;
    unsigned long long  _mergeStrategy;
    NSMutableDictionary * _pendingQuantitiesBySeries;
    HKQuantityType * _quantityType;
    bool  _requiresFetch;
    NSDateInterval * _resultsDateInterval;
    HDStatisticsCollectionCalculatorDefaultSourceOrderProvider * _sourceOrderProvider;
    unsigned long long  _statisticsOptions;
    id /* block */  _unitTest_queryServerStatisticsEnumerationHandler;
    id /* block */  _unitTest_queryServerUnableToUpdateStatisticsHandler;
    id /* block */  _unitTest_queryServerUpdateStatisticsHandler;
}

@property (nonatomic, readonly) NSDate *anchorDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long statisticsOptions;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unitTest_queryServerStatisticsEnumerationHandler;
@property (nonatomic, copy) id /* block */ unitTest_queryServerUnableToUpdateStatisticsHandler;
@property (nonatomic, copy) id /* block */ unitTest_queryServerUpdateStatisticsHandler;

+ (Class)queryClass;
+ (id)requiredEntitlements;
+ (bool)supportsAnchorBasedAuthorization;
+ (bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)_newCachingSessionWithProfile:(id)arg1 cachingIdentifier:(id)arg2 sourceEntity:(id)arg3 queryDescriptor:(id)arg4 cachedClass:(Class)arg5 queryInterval:(id)arg6 anchorDate:(id)arg7 intervalComponents:(id)arg8 timeIntervalToBucketIndex:(id /* block */)arg9;
- (void)_queue_start;
- (bool)_shouldListenForUpdates;
- (bool)_shouldObserveDatabaseProtectedDataAvailability;
- (id)anchorDate;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)profile:(id)arg1 didDiscardSeriesOfType:(id)arg2;
- (id)quantityType;
- (void)setUnitTest_queryServerStatisticsEnumerationHandler:(id /* block */)arg1;
- (void)setUnitTest_queryServerUnableToUpdateStatisticsHandler:(id /* block */)arg1;
- (void)setUnitTest_queryServerUpdateStatisticsHandler:(id /* block */)arg1;
- (unsigned long long)statisticsOptions;
- (id /* block */)transactionalQuantityInsertHandlerForProfile:(id)arg1 journaled:(bool)arg2 count:(long long)arg3;
- (id /* block */)unitTest_queryServerStatisticsEnumerationHandler;
- (id /* block */)unitTest_queryServerUnableToUpdateStatisticsHandler;
- (id /* block */)unitTest_queryServerUpdateStatisticsHandler;

@end
