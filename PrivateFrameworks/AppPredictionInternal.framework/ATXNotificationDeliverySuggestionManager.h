
@interface ATXNotificationDeliverySuggestionManager : NSObject {
    ATXNotificationSuggestionBiomeStream * _biomeStream;
    ATXNotificationManagementMAConstants * _constants;
    ATXNotificationAndSuggestionDatastore * _dataStore;
    ATXNotificationsSuggestion * _promotingSuggester;
    ATXNotificationsSuggestion * _quietingSuggester;
    ATXNotificationsSuggestion * _rttOutcomeLogger;
    ATXSendMessagesToDigestManager * _sendMessagesToDigestManager;
    ATXSendToDigestManager * _sendToDigestManager;
    ATXNotificationSmartPauseManager * _smartPauseManager;
    ATXChinSuggestionThrottlingManager * _throttlingManager;
    ATXTurnOffNotificationsForAppSuggestionManager * _turnOffNotificationsForAppManager;
}

@property (nonatomic, readonly) ATXNotificationsSuggestion *promotingSuggester;
@property (nonatomic, readonly) ATXNotificationsSuggestion *quietingSuggester;
@property (nonatomic, readonly) ATXNotificationsSuggestion *rttOutcomeLogger;

- (void).cxx_destruct;
- (void)_activeSuggestionsWithReply:(id /* block */)arg1;
- (void)activeSuggestionsWithReply:(id /* block */)arg1;
- (id)currentActiveSuggestions;
- (unsigned long long)currentMode;
- (id)deduplicatedSuggestions:(id)arg1;
- (bool)digestHasBeenShownEnoughTimes;
- (id)filteredSuggestionsBasedOnFeedback:(id)arg1;
- (unsigned long long)getScoreForSuggestion:(id)arg1;
- (id)init;
- (id)initWithDataStore:(id)arg1 suggestionBiomeStream:(id)arg2;
- (void)logSuggestionsToBiome:(id)arg1;
- (id)maxOneSuggestionFromSuggestions:(id)arg1;
- (id)promotingSuggester;
- (id)quietingSuggester;
- (id)rttOutcomeLogger;
- (bool)shouldShowSuggestion:(id)arg1 withFeedback:(id)arg2;
- (void)suggestionForNotification:(id)arg1 reply:(id /* block */)arg2;

@end
