
@interface TPSAnalyticsUsageEventsProcessor : TPSAnalyticsProcessor {
    NSDate * _currentDate;
}

+ (id)_firstShownDateForTipStatus:(id)arg1;
+ (id)_notifiedDateForTipStatus:(id)arg1;
+ (id)_preHintRangeOutOfBoundsForIdentifier:(id)arg1;
+ (id)_preHintUsageKeyForIdentifier:(id)arg1;
+ (bool)_tipStatusValidForLiftProcessing:(id)arg1 contextualInfo:(id)arg2 firstShownDate:(id)arg3;
+ (id)_usageEventsProcessedKeyForIdentifier:(id)arg1;
+ (bool)_validateContextualInfo:(id)arg1 forDisplayType:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)_calculateLift:(id)arg1 completion:(id /* block */)arg2;
- (void)_countsForPredicate:(id)arg1 streamName:(id)arg2 interval:(id)arg3 userStore:(bool)arg4 completion:(id /* block */)arg5;
- (void)_saveHistoricalUsage:(id)arg1 completion:(id /* block */)arg2;
- (void)_savePreHintRangeOutOfBounds:(bool)arg1 forIdentifier:(id)arg2;
- (bool)_shouldCalculateLift:(id)arg1;
- (id)init;
- (void)processAnalytics:(id /* block */)arg1;
- (void)resetAnalytics;
- (void)setCurrentDate:(id)arg1;

@end
