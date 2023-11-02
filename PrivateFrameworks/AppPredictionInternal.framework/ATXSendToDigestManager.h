
@interface ATXSendToDigestManager : NSObject {
    ATXNotificationAndSuggestionDatastore * _dataStore;
    ATXNotificationManagementMAConstants * _notificationManagementMAConstants;
    <ATXNotificationSettingsReaderProtocol> * _notificationSettingsReader;
}

- (void).cxx_destruct;
- (id)_proposeSendToDigestForNotification:(id)arg1 bundleData:(id)arg2;
- (id)activeSuggestions;
- (bool)bundleIdEligibleForSendToDigestSuggestions:(id)arg1;
- (id)currentSuggestionsGivenCandiateNotifications:(id)arg1;
- (id)init;
- (id)initWithDataStore:(id)arg1;

@end
