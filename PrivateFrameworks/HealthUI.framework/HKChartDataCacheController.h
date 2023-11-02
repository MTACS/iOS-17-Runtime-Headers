
@interface HKChartDataCacheController : NSObject <HKSampleTypeUpdateControllerObserver> {
    HKActivitySummaryDataProvider * _activitySummaryDataProvider;
    NSMutableDictionary * _alternateCurrentValueDataProvidersByDisplayType;
    NSMutableArray * _chartCachesByCustomDisplayType;
    NSMutableDictionary * _chartCachesByDisplayTypeIdentifier;
    NSArray * _chartCachesByTimeScopeAndDisplayTypeIdentifier;
    NSMutableDictionary * _currentValueDataProvidersByDisplayType;
    HKHealthStore * _healthStore;
    NSMutableDictionary * _secondaryValueDataProviders;
    HKUnitPreferenceController * _unitController;
    HKSampleTypeUpdateController * _updateController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (readonly) Class superclass;
@property (nonatomic, retain) HKUnitPreferenceController *unitController;
@property (nonatomic, retain) HKSampleTypeUpdateController *updateController;

- (void).cxx_destruct;
- (bool)_anySampleShouldInvalidateCache:(id)arg1;
- (id)_chartCacheForDisplayType:(id)arg1 timeScope:(long long)arg2 chartCachesByDisplayTypeIdentifier:(id)arg3;
- (id)_chartCacheIdentifiersFromSamples:(id)arg1;
- (id)_chartCacheIdentifiersFromStartDate:(id)arg1 endDate:(id)arg2;
- (id)_createAlternateCurrentValueDataProviderForDisplayType:(id)arg1 healthStore:(id)arg2 updateController:(id)arg3 dateCache:(id)arg4;
- (id)_createCurrentValueDataProviderForDisplayType:(id)arg1 healthStore:(id)arg2 updateController:(id)arg3 dateCache:(id)arg4;
- (id)_generateChartCacheForDisplayType:(id)arg1 timeScope:(long long)arg2;
- (void)_removeCustomCachesForDisplayTypeIdentifier:(long long)arg1;
- (void)_subscribeForUpdatesForDisplayType:(id)arg1;
- (id)_timeScopeBasedChartCacheForDisplayType:(id)arg1 timeScope:(long long)arg2;
- (id)activitySummaryDataProviderWithHealthStore:(id)arg1 dateCache:(id)arg2 displayTypeController:(id)arg3 unitController:(id)arg4;
- (void)addCustomChartCache:(id)arg1 forDisplayType:(id)arg2;
- (id)allInteractiveChartsCaches;
- (id)alternateCurrentValueDataProviderForDisplayType:(id)arg1 healthStore:(id)arg2 updateController:(id)arg3 dateCache:(id)arg4;
- (id)currentValueDataProviderForDisplayType:(id)arg1 healthStore:(id)arg2 updateController:(id)arg3 dateCache:(id)arg4;
- (id)findCustomCachesForDisplayType:(id)arg1;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1 unitController:(id)arg2 updateController:(id)arg3;
- (id)interactiveChartsCacheForDisplayType:(id)arg1 timeScope:(long long)arg2;
- (void)removeCachesForDisplayTypeIdentifier:(long long)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setUnitController:(id)arg1;
- (void)setUpdateController:(id)arg1;
- (id)unitController;
- (id)updateController;
- (void)updateController:(id)arg1 didReceiveHighFrequencyUpdateForType:(id)arg2;
- (void)updateController:(id)arg1 didReceiveUpdateForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4 recoveringFromError:(bool)arg5;

@end
