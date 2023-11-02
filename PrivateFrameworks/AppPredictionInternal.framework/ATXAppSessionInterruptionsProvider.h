
@interface ATXAppSessionInterruptionsProvider : NSObject {
    NSDictionary * _cachedAccumulatorsPerATXModeForLast1Day;
    NSDictionary * _cachedAccumulatorsPerATXModeForLastNDays;
    ATXInterruptedAppSessionAccumulator * _cachedGlobalInterruptedAppSessionsAccumulatorForLast1Day;
    ATXInterruptedAppSessionAccumulator * _cachedGlobalInterruptedAppSessionsAccumulatorForLastNDays;
    NSDictionary * _cachedRecommendedAndCandidateAllowedApps;
    NSDictionary * _cachedRecommendedAndCandidateDeniedApps;
    NSDate * _thresholdDateLastNDays;
}

- (void).cxx_destruct;
- (unsigned long long)appInterruptionsCountWithAccumulator:(id)arg1 suggestedBundleIds:(id)arg2;
- (void)cacheGlobalAppSessionInterruptionsCalculatorIfNecessary;
- (void)cacheModeAppSessionInterruptionsCalculatorIfNecessary;
- (void)cacheRecommendedAndCandidateAppsInAllowListForAllModesIfNecessary;
- (void)cacheRecommendedAndCandidateAppsInDenyListForAllModesIfNecessary;
- (unsigned long long)globalInterruptedAppSessionsCountWithinLast1Day;
- (unsigned long long)globalInterruptedAppSessionsCountWithinLastNDays;
- (id)initWithLastNDays:(unsigned long long)arg1;
- (unsigned long long)modeAppInterruptionsCountWithinLast1DayBasedOnAllowListOfMode:(unsigned long long)arg1;
- (unsigned long long)modeAppInterruptionsCountWithinLast1DayBasedOnDenyListOfMode:(unsigned long long)arg1;
- (unsigned long long)modeAppInterruptionsCountWithinLastNDaysBasedOnAllowListOfMode:(unsigned long long)arg1;
- (unsigned long long)modeAppInterruptionsCountWithinLastNDaysBasedOnDenyListOfMode:(unsigned long long)arg1;
- (unsigned long long)modeInterruptedAppSessionsCountWithinLast1DayForMode:(unsigned long long)arg1;
- (unsigned long long)modeInterruptedAppSessionsCountWithinLastNDaysForMode:(unsigned long long)arg1;

@end
