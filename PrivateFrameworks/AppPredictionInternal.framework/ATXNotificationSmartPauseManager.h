
@interface ATXNotificationSmartPauseManager : NSObject {
    NSArray * _currentSuggestions;
    ATXNotificationAndSuggestionDatastore * _dataStore;
    NSDate * _lastUpdatedDate;
    ATXNotificationManagementMAConstants * _notificationManagementMAConstants;
}

- (void).cxx_destruct;
- (id)_dictionaryForQueryResults:(id)arg1;
- (id)_proposeSmartPauseForNotification:(id)arg1 threadData:(id)arg2 bundleData:(id)arg3;
- (id)_queryResultIdentifierForBundleId:(id)arg1 threadId:(id)arg2;
- (id)activeSuggestions;
- (id)currentSuggestionsGivenCandiateNotifications:(id)arg1;
- (id)init;
- (id)initWithNotificationAndSuggestionDataStore:(id)arg1;
- (bool)needRefresh;
- (void)refreshSuggestions;
- (id)smartPauseForNotification:(id)arg1;

@end
