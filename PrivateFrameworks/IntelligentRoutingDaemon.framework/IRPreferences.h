
@interface IRPreferences : NSObject {
    NSNumber * _appInFocusWindowEnableOnServiceRun;
    NSNumber * _appInFocusWindowInSeconds;
    NSNumber * _appleTvCtrlEventsTimeIntervalThreshold;
    NSNumber * _appleTvCtrlRulesContinuityTimeIntervalInSeconds;
    NSNumber * _bannersFromScreenUnlockToAppInFocusEnable;
    NSNumber * _bleRssiProximityThreshold;
    NSNumber * _candidateLastUsedThrForMiLoLowLatancyPowerOpt;
    NSNumber * _candidateSelectorAllowSelectByBLE;
    NSNumber * _candidateSelectorAllowSelectByMiLo;
    NSNumber * _candidateSelectorAllowSelectByUWB;
    NSNumber * _candidateSelectorIsContinuityEnabled;
    NSNumber * _candidateSelectorIsMostUsedAnyAppEnabled;
    NSNumber * _candidateSelectorIsMostUsedSimilarAppEnabled;
    NSNumber * _candidateSelectorIsNearestRangeOrHistoryOrSameICloudEnabled;
    NSNumber * _candidateSelectorMostUsedAnyAppMaximumNumberOfEvents;
    NSNumber * _candidateSelectorMostUsedAnyAppTimeIntervalSeconds;
    NSNumber * _candidateSelectorMostUsedSimilarAppMaximumNumberOfEvents;
    NSNumber * _candidateSelectorMostUsedSimilarAppTimeIntervalSeconds;
    NSNumber * _candidateUpdateTimeIntervalSeconds;
    NSNumber * _cleanupXPCActivityInterval;
    NSNumber * _controlledLiveOnMiLoRealTimeUponRequestCurrentContext;
    NSNumber * _coreAnalyticsEnable;
    NSNumber * _coreAnalyticsStatisticsCollectionPeriodInSeconds;
    NSString * _coreAnalyticsWeeklyMobileAssetVersion;
    NSNumber * _coreAnalyticsXPCActivityInterval;
    NSNumber * _coreAnalyticsXPCHistoryEventsValidThreshold;
    NSNumber * _dbCleanupXPCActivityDeleteCandidatesThreshold;
    NSNumber * _dbCleanupXPCActivityDeleteHistoryEventsThreshold;
    NSNumber * _dbCleanupXPCActivityDeleteReplayEventsThreshold;
    NSNumber * _dbCleanupXPCActivityDeleteServiceThreshold;
    NSUserDefaults * _defaults;
    NSNumber * _deviceRangeProximityThreshold;
    NSNumber * _downrankToNoneEligibilityBasedOnDismissAndRejectThreshold1stParty;
    NSNumber * _downrankToNoneEligibilityBasedOnDismissAndRejectThreshold3rdParty;
    NSNumber * _downrankToNoneEligibilityThreshold1stParty;
    NSNumber * _downrankToNoneEligibilityThreshold3rdParty;
    NSNumber * _downrankToOneTapEligibilityThreshold1stParty;
    NSNumber * _downrankToOneTapEligibilityThreshold3rdParty;
    NSNumber * _eligibilityInitStateIsOneTap1stParty;
    NSNumber * _eligibilityInitStateIsOneTap3rdParty;
    NSNumber * _liveOnEnable;
    NSNumber * _liveOnMiloEnableRealTimeDeprecated;
    NSNumber * _liveOnTtrDebugDataRequestsEnabled;
    NSNumber * _liveOnTtrPeriodicDataRequestsEnabled;
    NSNumber * _loadMobileAssetXPCActivityInterval;
    NSNumber * _mediaPlaybackEventsTimeIntervalThreshold;
    NSNumber * _mediaRulesContinuityTimeIntervalInSeconds;
    NSNumber * _mediaRulesFilterAnyMultipleEventsTimeIntervalInSeconds;
    NSNumber * _mediaRulesFilterSimilarMultipleEventsTimeIntervalInSeconds;
    NSNumber * _mediaRulesPickerChoiceConsistencyEnable;
    NSNumber * _mediaRulesPickerChoiceConsistencyTimeIntervalInSeconds;
    NSNumber * _mediaRulesUserRejectedInLastDayEnable;
    NSNumber * _miloEnable;
    NSNumber * _miloLslIsSameMiloThreshold;
    NSNumber * _miloSameSpaceEventsNumberOfEventsToWatch;
    NSNumber * _miloSameSpaceEventsTimeIntervalSeconds;
    NSNumber * _miloSameSpaceRatioThreshold;
    NSMutableDictionary * _mobileAssetSettings;
    NSString * _mobileAssetVersion;
    NSNumber * _nearbyDeviceMeasurmentExpityTimeSeconds;
    NSNumber * _nearbyDeviceRegionThreshold;
    NSNumber * _numberOfEventsToSaveInDisk;
    NSNumber * _numberOfHistoryEventsInCache;
    NSNumber * _numberOfSeenCandidates;
    NSNumber * _numberOfUsedCandidates;
    NSNumber * _pickerAutoSelectToPicketChoiceMinInterval;
    NSNumber * _proximitySessionRetryCountThreshold;
    NSNumber * _replayWriterEventsSizeToBuffer;
    NSNumber * _testMobileAssetLoad;
    NSNumber * _testPreferenceDouble;
    NSNumber * _testPreferenceInteger;
    NSString * _testPreferenceString;
    NSNumber * _ttrPeriodicThrottleTimeSec;
    NSNumber * _ttrThrottleTimeSec;
    NSNumber * _uprankToAutorouteEligibilityThreshold1stParty;
    NSNumber * _uprankToAutorouteEligibilityThreshold3rdParty;
    NSNumber * _uprankToOneTapEligibilityThreshold1stParty;
    NSNumber * _uprankToOneTapEligibilityThreshold3rdParty;
    int  _userDefaultsRefreshToken;
    NSNumber * _uwbSuspendPedestrianFenceEnable;
    NSNumber * _uwbSuspendPedestrianFenceRadiusMeters;
}

@property (nonatomic, readonly) NSNumber *appInFocusWindowEnableOnServiceRun;
@property (nonatomic, readonly) NSNumber *appInFocusWindowInSeconds;
@property (nonatomic, readonly) NSNumber *appleTvCtrlEventsTimeIntervalThreshold;
@property (nonatomic, readonly) NSNumber *appleTvCtrlRulesContinuityTimeIntervalInSeconds;
@property (nonatomic, readonly) NSNumber *bannersFromScreenUnlockToAppInFocusEnable;
@property (nonatomic, readonly) NSNumber *bleRssiProximityThreshold;
@property (nonatomic, readonly) NSNumber *candidateLastUsedThrForMiLoLowLatancyPowerOpt;
@property (nonatomic, readonly) NSNumber *candidateSelectorAllowSelectByBLE;
@property (nonatomic, readonly) NSNumber *candidateSelectorAllowSelectByMiLo;
@property (nonatomic, readonly) NSNumber *candidateSelectorAllowSelectByUWB;
@property (nonatomic, readonly) NSNumber *candidateSelectorIsContinuityEnabled;
@property (nonatomic, readonly) NSNumber *candidateSelectorIsMostUsedAnyAppEnabled;
@property (nonatomic, readonly) NSNumber *candidateSelectorIsMostUsedSimilarAppEnabled;
@property (nonatomic, readonly) NSNumber *candidateSelectorIsNearestRangeOrHistoryOrSameICloudEnabled;
@property (nonatomic, readonly) NSNumber *candidateSelectorMostUsedAnyAppMaximumNumberOfEvents;
@property (nonatomic, readonly) NSNumber *candidateSelectorMostUsedAnyAppTimeIntervalSeconds;
@property (nonatomic, readonly) NSNumber *candidateSelectorMostUsedSimilarAppMaximumNumberOfEvents;
@property (nonatomic, readonly) NSNumber *candidateSelectorMostUsedSimilarAppTimeIntervalSeconds;
@property (nonatomic, readonly) NSNumber *candidateUpdateTimeIntervalSeconds;
@property (nonatomic, readonly) NSNumber *cleanupXPCActivityInterval;
@property (nonatomic, readonly) NSNumber *controlledLiveOnMiLoRealTimeUponRequestCurrentContext;
@property (nonatomic, readonly) NSNumber *coreAnalyticsEnable;
@property (nonatomic, readonly) NSNumber *coreAnalyticsStatisticsCollectionPeriodInSeconds;
@property (nonatomic, readonly) NSString *coreAnalyticsWeeklyMobileAssetVersion;
@property (nonatomic, readonly) NSNumber *coreAnalyticsXPCActivityInterval;
@property (nonatomic, readonly) NSNumber *coreAnalyticsXPCHistoryEventsValidThreshold;
@property (nonatomic, readonly) NSNumber *dbCleanupXPCActivityDeleteCandidatesThreshold;
@property (nonatomic, readonly) NSNumber *dbCleanupXPCActivityDeleteHistoryEventsThreshold;
@property (nonatomic, readonly) NSNumber *dbCleanupXPCActivityDeleteReplayEventsThreshold;
@property (nonatomic, readonly) NSNumber *dbCleanupXPCActivityDeleteServiceThreshold;
@property (nonatomic, retain) NSUserDefaults *defaults;
@property (nonatomic, readonly) NSNumber *deviceRangeProximityThreshold;
@property (nonatomic, readonly) NSNumber *downrankToNoneEligibilityBasedOnDismissAndRejectThreshold1stParty;
@property (nonatomic, readonly) NSNumber *downrankToNoneEligibilityBasedOnDismissAndRejectThreshold3rdParty;
@property (nonatomic, readonly) NSNumber *downrankToNoneEligibilityThreshold1stParty;
@property (nonatomic, readonly) NSNumber *downrankToNoneEligibilityThreshold3rdParty;
@property (nonatomic, readonly) NSNumber *downrankToOneTapEligibilityThreshold1stParty;
@property (nonatomic, readonly) NSNumber *downrankToOneTapEligibilityThreshold3rdParty;
@property (nonatomic, readonly) NSNumber *eligibilityInitStateIsOneTap1stParty;
@property (nonatomic, readonly) NSNumber *eligibilityInitStateIsOneTap3rdParty;
@property (nonatomic, readonly) NSNumber *liveOnEnable;
@property (nonatomic, readonly) NSNumber *liveOnMiloEnableRealTimeDeprecated;
@property (nonatomic, readonly) NSNumber *liveOnTtrDebugDataRequestsEnabled;
@property (nonatomic, readonly) NSNumber *liveOnTtrPeriodicDataRequestsEnabled;
@property (nonatomic, readonly) NSNumber *loadMobileAssetXPCActivityInterval;
@property (nonatomic, readonly) NSNumber *mediaPlaybackEventsTimeIntervalThreshold;
@property (nonatomic, readonly) NSNumber *mediaRulesContinuityTimeIntervalInSeconds;
@property (nonatomic, readonly) NSNumber *mediaRulesFilterAnyMultipleEventsTimeIntervalInSeconds;
@property (nonatomic, readonly) NSNumber *mediaRulesFilterSimilarMultipleEventsTimeIntervalInSeconds;
@property (nonatomic, readonly) NSNumber *mediaRulesPickerChoiceConsistencyEnable;
@property (nonatomic, readonly) NSNumber *mediaRulesPickerChoiceConsistencyTimeIntervalInSeconds;
@property (nonatomic, readonly) NSNumber *mediaRulesUserRejectedInLastDayEnable;
@property (nonatomic, readonly) NSNumber *miloEnable;
@property (nonatomic, readonly) NSNumber *miloLslIsSameMiloThreshold;
@property (nonatomic, readonly) NSNumber *miloSameSpaceEventsNumberOfEventsToWatch;
@property (nonatomic, readonly) NSNumber *miloSameSpaceEventsTimeIntervalSeconds;
@property (nonatomic, readonly) NSNumber *miloSameSpaceRatioThreshold;
@property (nonatomic, retain) NSMutableDictionary *mobileAssetSettings;
@property (nonatomic, retain) NSString *mobileAssetVersion;
@property (nonatomic, readonly) NSNumber *nearbyDeviceMeasurmentExpityTimeSeconds;
@property (nonatomic, readonly) NSNumber *nearbyDeviceRegionThreshold;
@property (nonatomic, readonly) NSNumber *numberOfEventsToSaveInDisk;
@property (nonatomic, readonly) NSNumber *numberOfHistoryEventsInCache;
@property (nonatomic, readonly) NSNumber *numberOfSeenCandidates;
@property (nonatomic, readonly) NSNumber *numberOfUsedCandidates;
@property (nonatomic, readonly) NSNumber *pickerAutoSelectToPicketChoiceMinInterval;
@property (nonatomic, readonly) NSString *preferenceString;
@property (nonatomic, readonly) NSNumber *proximitySessionRetryCountThreshold;
@property (nonatomic, readonly) NSNumber *replayWriterEventsSizeToBuffer;
@property (nonatomic, readonly) NSNumber *testMobileAssetLoad;
@property (nonatomic, readonly) NSNumber *testPreferenceDouble;
@property (nonatomic, readonly) NSNumber *testPreferenceInteger;
@property (nonatomic, readonly) NSString *testPreferenceString;
@property (nonatomic, readonly) NSNumber *ttrPeriodicThrottleTimeSec;
@property (nonatomic, readonly) NSNumber *ttrThrottleTimeSec;
@property (nonatomic, readonly) NSNumber *uprankToAutorouteEligibilityThreshold1stParty;
@property (nonatomic, readonly) NSNumber *uprankToAutorouteEligibilityThreshold3rdParty;
@property (nonatomic, readonly) NSNumber *uprankToOneTapEligibilityThreshold1stParty;
@property (nonatomic, readonly) NSNumber *uprankToOneTapEligibilityThreshold3rdParty;
@property (nonatomic) int userDefaultsRefreshToken;
@property (nonatomic, readonly) NSNumber *uwbSuspendPedestrianFenceEnable;
@property (nonatomic, readonly) NSNumber *uwbSuspendPedestrianFenceRadiusMeters;

+ (id)shared;

- (void).cxx_destruct;
- (void)_defaultsSet;
- (id)_getDictItemsForLogging:(id)arg1 withTitle:(id)arg2;
- (id)_getKeyWithType:(id)arg1 withDefaultValue:(id)arg2 expectedType:(Class)arg3;
- (void)_registerForUserDefaultsRefreshNotification;
- (id)appInFocusWindowEnableOnServiceRun;
- (id)appInFocusWindowInSeconds;
- (id)appleTvCtrlEventsTimeIntervalThreshold;
- (id)appleTvCtrlRulesContinuityTimeIntervalInSeconds;
- (id)bannersFromScreenUnlockToAppInFocusEnable;
- (id)bleRssiProximityThreshold;
- (id)candidateLastUsedThrForMiLoLowLatancyPowerOpt;
- (id)candidateSelectorAllowSelectByBLE;
- (id)candidateSelectorAllowSelectByMiLo;
- (id)candidateSelectorAllowSelectByUWB;
- (id)candidateSelectorIsContinuityEnabled;
- (id)candidateSelectorIsMostUsedAnyAppEnabled;
- (id)candidateSelectorIsMostUsedSimilarAppEnabled;
- (id)candidateSelectorIsNearestRangeOrHistoryOrSameICloudEnabled;
- (id)candidateSelectorMostUsedAnyAppMaximumNumberOfEvents;
- (id)candidateSelectorMostUsedAnyAppTimeIntervalSeconds;
- (id)candidateSelectorMostUsedSimilarAppMaximumNumberOfEvents;
- (id)candidateSelectorMostUsedSimilarAppTimeIntervalSeconds;
- (id)candidateUpdateTimeIntervalSeconds;
- (id)cleanupXPCActivityInterval;
- (id)controlledLiveOnMiLoRealTimeUponRequestCurrentContext;
- (id)coreAnalyticsEnable;
- (id)coreAnalyticsStatisticsCollectionPeriodInSeconds;
- (id)coreAnalyticsWeeklyMobileAssetVersion;
- (id)coreAnalyticsXPCActivityInterval;
- (id)coreAnalyticsXPCHistoryEventsValidThreshold;
- (id)dbCleanupXPCActivityDeleteCandidatesThreshold;
- (id)dbCleanupXPCActivityDeleteHistoryEventsThreshold;
- (id)dbCleanupXPCActivityDeleteReplayEventsThreshold;
- (id)dbCleanupXPCActivityDeleteServiceThreshold;
- (void)dealloc;
- (id)defaults;
- (id)deviceRangeProximityThreshold;
- (id)downrankToNoneEligibilityBasedOnDismissAndRejectThreshold1stParty;
- (id)downrankToNoneEligibilityBasedOnDismissAndRejectThreshold3rdParty;
- (id)downrankToNoneEligibilityThreshold1stParty;
- (id)downrankToNoneEligibilityThreshold3rdParty;
- (id)downrankToOneTapEligibilityThreshold1stParty;
- (id)downrankToOneTapEligibilityThreshold3rdParty;
- (id)eligibilityInitStateIsOneTap1stParty;
- (id)eligibilityInitStateIsOneTap3rdParty;
- (id)init;
- (id)liveOnEnable;
- (id)liveOnMiloEnableRealTimeDeprecated;
- (id)liveOnTtrDebugDataRequestsEnabled;
- (id)liveOnTtrPeriodicDataRequestsEnabled;
- (id)loadMobileAssetXPCActivityInterval;
- (id)mediaPlaybackEventsTimeIntervalThreshold;
- (id)mediaRulesContinuityTimeIntervalInSeconds;
- (id)mediaRulesFilterAnyMultipleEventsTimeIntervalInSeconds;
- (id)mediaRulesFilterSimilarMultipleEventsTimeIntervalInSeconds;
- (id)mediaRulesPickerChoiceConsistencyEnable;
- (id)mediaRulesPickerChoiceConsistencyTimeIntervalInSeconds;
- (id)mediaRulesUserRejectedInLastDayEnable;
- (id)miloEnable;
- (id)miloLslIsSameMiloThreshold;
- (id)miloSameSpaceEventsNumberOfEventsToWatch;
- (id)miloSameSpaceEventsTimeIntervalSeconds;
- (id)miloSameSpaceRatioThreshold;
- (id)mobileAssetSettings;
- (id)mobileAssetVersion;
- (id)nearbyDeviceMeasurmentExpityTimeSeconds;
- (id)nearbyDeviceRegionThreshold;
- (id)numberOfEventsToSaveInDisk;
- (id)numberOfHistoryEventsInCache;
- (id)numberOfSeenCandidates;
- (id)numberOfUsedCandidates;
- (id)pickerAutoSelectToPicketChoiceMinInterval;
- (id)preferenceString;
- (id)proximitySessionRetryCountThreshold;
- (void)refresh;
- (id)replayWriterEventsSizeToBuffer;
- (void)setDefaults:(id)arg1;
- (void)setMobileAssetSettings:(id)arg1;
- (void)setMobileAssetSettingsWithMobileAssetDict:(id)arg1 assetVersion:(id)arg2;
- (void)setMobileAssetVersion:(id)arg1;
- (void)setUserDefaultsRefreshToken:(int)arg1;
- (id)testMobileAssetLoad;
- (id)testPreferenceDouble;
- (id)testPreferenceInteger;
- (id)testPreferenceString;
- (id)ttrPeriodicThrottleTimeSec;
- (id)ttrThrottleTimeSec;
- (void)updateAndNotifyKey:(id)arg1 withObject:(id)arg2;
- (id)uprankToAutorouteEligibilityThreshold1stParty;
- (id)uprankToAutorouteEligibilityThreshold3rdParty;
- (id)uprankToOneTapEligibilityThreshold1stParty;
- (id)uprankToOneTapEligibilityThreshold3rdParty;
- (int)userDefaultsRefreshToken;
- (id)uwbSuspendPedestrianFenceEnable;
- (id)uwbSuspendPedestrianFenceRadiusMeters;

@end
