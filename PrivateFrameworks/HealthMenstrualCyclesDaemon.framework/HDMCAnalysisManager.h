
@interface HDMCAnalysisManager : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver, HDFeatureAvailabilityExtensionObserver, HKFeatureStatusProvidingObserver, HKMCSettingsManagerObserver> {
    id /* block */  __test_didNotUpgradeOnboardingRecord;
    _HKDelayedOperation * _analyzeOperation;
    HKCalendarCache * _calendarCache;
    HDMCDeviationInputManager * _deviationInputManager;
    HKFeatureStatusManager * _deviationsFeatureStatusManager;
    HDMCDeviceScopedStorageManager * _deviceScopedStorageManager;
    HDFeatureAvailabilityManager * _featureAvailabilityManager;
    HKFeatureStatusManager * _heartRateFeatureStatusManager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HKMCAnalysis * _lock_currentAnalysis;
    HKObserverSet * _observers;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    HKFeatureSettings * _queue_lastFeatureSettings;
    bool  _queue_maintenanceOperationQueued;
    bool  _queue_needsMaintenanceAnalysis;
    HKMCSettingsManager * _settingsManager;
    HAMenstrualAlgorithmsAnalysis * _test_algorithmsAnalysis;
    NSArray * _test_algorithmsCycles;
    HKMCAnalysis * _test_analysis;
    HKObserverSet * _userInitiatedObservers;
    HKFeatureStatusManager * _wristTemperatureFeatureStatusManager;
}

@property (nonatomic, copy) id /* block */ _test_didNotUpgradeOnboardingRecord;
@property (nonatomic, readonly, copy) HKMCAnalysis *currentAnalysis;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HDProfile *profile;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_analysisWithAlgorithmsAnalysis:(id)arg1 algorithmsCycles:(id)arg2 recentSymptoms:(unsigned long long)arg3 mostRecentBasalBodyTemperature:(id)arg4 lastLoggedDayIndex:(id)arg5 lastMenstrualFlowDayIndex:(id)arg6 numberOfDailySleepHeartRateStatisticsForPast100Days:(long long)arg7 numberOfDailyAwakeHeartRateStatisticsForPast100Days:(long long)arg8 featureSettings:(id)arg9 useHeartRateInput:(bool)arg10 useWristTemperatureInput:(bool)arg11 deviationsFeatureSettings:(id)arg12;
- (id)_analyzeWithForceIncludeCycles:(bool)arg1 forceAnalyzeCompleteHistory:(bool)arg2 error:(id*)arg3;
- (void)_calendarDayDidChange:(id)arg1;
- (void)_forceDisablePredictionsFromOngoingCycleFactors:(id)arg1 menstruationProjectionsEnabled:(bool)arg2 fertileWindowProjectionsEnabled:(bool)arg3 useHeartRateInput:(bool)arg4 useWristTemperatureInput:(bool)arg5;
- (bool)_hasHealthAppDevicesWithHigherAlgorithmVersions;
- (id)_processorConfigurationForTodayIndex:(long long)arg1 deviationsFeatureStatus:(id)arg2 calendar:(id)arg3;
- (void)_queue_analyzeIfNeeded;
- (id)_queue_analyzeNowWithForceIncludeCycles:(bool)arg1 forceAnalyzeCompleteHistory:(bool)arg2 error:(id*)arg3;
- (id)_queue_computeAnalysisWithDatabaseAccessibilityAssertion:(id)arg1 forceIncludeCycles:(bool)arg2 forceAnalyzeCompleteHistory:(bool)arg3 error:(id*)arg4;
- (void)_queue_enqueueMaintenanceOperationIfNeeded;
- (void)_queue_runMaintenanceOperation;
- (void)_startObserving;
- (id)_takeAccessibilityAssertion;
- (id /* block */)_test_didNotUpgradeOnboardingRecord;
- (void)_test_setAlgorithmsAnalysis:(id)arg1;
- (void)_test_setAlgorithmsCycles:(id)arg1;
- (void)_test_setAnalysis:(id)arg1;
- (void)_userCharacteristicsDidChange:(id)arg1;
- (void)addObserver:(id)arg1 queue:(id)arg2 userInitiated:(bool)arg3;
- (id)analyzeWithError:(id*)arg1;
- (id)currentAnalysis;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)dealloc;
- (void)featureAvailabilityExtensionDidUpdateRegionAvailability:(id)arg1;
- (void)featureAvailabilityExtensionOnboardingCompletionDataDidBecomeAvailable:(id)arg1;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg1;
- (void)featureAvailabilityProvidingDidUpdateSettings:(id)arg1;
- (void)featureStatusProviding:(id)arg1 didUpdateFeatureStatus:(id)arg2;
- (id)initWithProfile:(id)arg1 settingsManager:(id)arg2 featureAvailabilityManager:(id)arg3 heartRateAvailabilityManager:(id)arg4 wristTemperatureAvailabilityManager:(id)arg5 deviationsAvailabilityManager:(id)arg6 deviceScopedStorageManager:(id)arg7 calendarCache:(id)arg8;
- (bool)initiateCycleFactorsAutomaticUpgradeWithDatabaseAccessibilityAssertion:(id)arg1 error:(id*)arg2;
- (id)profile;
- (id)queue;
- (void)removeObserver:(id)arg1;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)setProfile:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)set_test_didNotUpgradeOnboardingRecord:(id /* block */)arg1;
- (void)settingsManagerDidUpdateAlgorithmVersionMismatchSettings:(id)arg1;
- (void)settingsManagerDidUpdateAnalysisSettings:(id)arg1;

@end
