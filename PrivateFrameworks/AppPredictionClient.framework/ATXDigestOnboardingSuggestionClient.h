
@interface ATXDigestOnboardingSuggestionClient : NSObject {
    bool  _hasRegisteredKVO;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    NSTimer * _trigger;
    NSUserDefaults * _userDefaults;
}

+ (void)changeNumPreviousDaysToCheckForNotificationProblemToNumDays:(unsigned long long)arg1;
+ (void)removeRandomizedSelectionForDigestOnboardingSuggestion;
+ (void)resetDigestOnboardingSuggestionsAtHour:(id)arg1 minute:(id)arg2;
+ (void)resetRandomizedSelectionForDigestOnboardingSuggestion;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handleLocaleChange;
- (void)_invalidateTriggerOnMainQueue;
- (id /* block */)_notificationStreamFilterBlock;
- (void)_registerForKVOChangesOnMainQueue;
- (void)_registerForLocaleChangeOnMainQueue;
- (void)_registerForOnboardingSuggestionOnMainQueueWithThresholdForShowingDigestOnboardingSuggestionToSeedUsers:(double)arg1 thresholdForShowingDigestOnboardingSuggestion:(double)arg2;
- (void)_registerForTriggerOnMainQueueAtHour:(long long)arg1 minute:(long long)arg2;
- (void)_setProbabilityOfShowingDigestOnboardingToUser;
- (void)_suggestDigestOnboardingIfApplicableOnMainQueue;
- (void)_suggestDigestOnboardingIfApplicableOnMainQueueGivenNumberOfActiveNotifications:(unsigned long long)arg1 numberOfUniqueBundleIds:(unsigned long long)arg2 minActive:(unsigned long long)arg3 minUnique:(unsigned long long)arg4;
- (void)_unregisterForKVOChangesOnMainQueue;
- (void)_unregisterForLocaleChangeOnMainQueue;
- (void)averageNumberOfNotifications:(id /* block */)arg1;
- (void)clientDidRejectOnboardingSuggestion;
- (void)dealloc;
- (bool)hasNotificationProblemForPreviousNumDays:(long long)arg1;
- (id)init;
- (id)notificationStreamPublisherForStartDate:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)registerForOnboardingSuggestions;
- (void)registerObserver:(id)arg1;
- (void)unregisterForOnboardingSuggestions;
- (void)userAcceptedDigestOnboardingSuggestion:(id)arg1;

@end
