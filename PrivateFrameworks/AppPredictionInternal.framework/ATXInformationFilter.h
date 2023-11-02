
@interface ATXInformationFilter : NSObject {
    ATXTimelineAbuseControlConfig * _abuseControlConfig;
    NSCache * _appLaunchCountsByBundleId;
    ATXDigitalHealthBlacklist * _digitalHealthBlockList;
    _ATXAppLaunchHistogram * _histogram;
    _PASQueueLock * _lock;
    NSObject<OS_dispatch_queue> * _queue;
    ATXInformationStore * _store;
}

+ (long long)chsFamilyForTimelineRelevanceSuggestionLayoutOptions:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)_canSuggestionPassAppLaunchCheck:(id)arg1;
- (void)_demoteFirstPartyDonatedSuggestionIfNecessary:(id)arg1;
- (id)_fetchAppLaunchCountForBundleId:(id)arg1;
- (bool)_isFirstPartyApp:(id)arg1;
- (bool)_isSuggestionBlockedByDismiss:(id)arg1 withGuardedData:(id)arg2;
- (long long)_numberOfSeenRotationsForSuggestion:(id)arg1;
- (void)_populateDismissRecordsCacheAsynchronously;
- (void)_removeExpiredDismissRecordsAsynchronously;
- (bool)_shouldBlockTimelineSuggestion:(id)arg1 updatingAbuseControlOutcomes:(id)arg2;
- (id)filterInfoSuggestions:(id)arg1;
- (id)init;
- (id)initWithStore:(id)arg1 abuseControlConfig:(id)arg2;
- (id)initWithStore:(id)arg1 abuseControlConfig:(id)arg2 histogram:(id)arg3 digitalHealthBlockList:(id)arg4;
- (long long)numberOfSeenRotationsForWidget:(id)arg1 kind:(id)arg2 intent:(id)arg3 filterByClientModelId:(id)arg4;
- (void)recordDismissOfSuggestion:(id)arg1 isDismissalLongTerm:(bool)arg2 completionHandler:(id /* block */)arg3;
- (bool)shouldDisableRandomization:(id)arg1;
- (bool)stalenessRotationsAreEnabled:(id)arg1;

@end
