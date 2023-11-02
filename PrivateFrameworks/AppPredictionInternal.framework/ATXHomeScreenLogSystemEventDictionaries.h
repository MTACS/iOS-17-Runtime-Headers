
@interface ATXHomeScreenLogSystemEventDictionaries : NSObject {
    NSMutableDictionary * _systemLevelEventDictionary;
    NSMutableSet * _unique3PWidgetsOnHS;
    NSMutableDictionary * _unlockSessionEngagementDictionary;
}

+ (id)_suggestionReasonToWidgetEventDictionariesProactiveWidgetRotationsKey:(int)arg1;
+ (id)systemLevelDictionaryAccumulatorKeys;
+ (id)systemLevelDictionaryAccumulatorSplitByLocationKeys;

- (void).cxx_destruct;
- (void)_addKey:(id)arg1 splitByLocation:(unsigned long long)arg2 toAggregateKey:(id)arg3;
- (id)_createNewSystemLevelDictionary;
- (id)_getOnboardingResultStringAndUpdateStackRemovedDateIfNeededWithDefaults:(id)arg1;
- (void)_populateSystemLevelDictionaryWithWidgetCohortAdoptionMetrics:(id)arg1;
- (id)dryRunResult;
- (id)init;
- (void)populateHasBehavioralData;
- (void)populateLifetimeNPlusOneStatistics;
- (void)populateUnlockSessionEngagementSummaryFromManager:(id)arg1;
- (void)populateUsedKettle;
- (void)sendToCoreAnalytics;
- (void)updateNPlusOneLifetimeMetricsWithRotationSession:(id)arg1;
- (void)updateSystemLevelSummaryForHomeScreenEvent:(id)arg1;
- (void)updateSystemLevelSummaryForHomeScreenPages:(id)arg1 startDate:(id)arg2;
- (void)updateSystemLevelSummaryForWidgetPseudoTapWithStackShownEvent:(id)arg1;
- (void)updateSystemLevelSummaryTotalUnlockSessions:(unsigned long long)arg1;
- (void)updateSystemLevelSummaryWithRotationSession:(id)arg1;
- (void)updateSystemLevelUnlockSessionsWithWidgetDwell:(id)arg1;

@end
