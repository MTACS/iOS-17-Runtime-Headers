
@interface ATXSendMessagesToDigestManager : NSObject {
    ATXNotificationAndSuggestionDatastore * _dataStore;
    UNNotificationSettingsCenter * _notificationCenter;
    ATXNotificationManagementMAConstants * _notificationManagementMAConstants;
    <ATXNotificationSettingsReaderProtocol> * _notificationSettingsReader;
}

- (void).cxx_destruct;
- (id)activeSuggestions;
- (bool)bundleIdIsEligibleForSendMessagesToDigestSuggestions:(id)arg1;
- (id)init;
- (id)initWithDataStore:(id)arg1;
- (id)sendMessagesToDigestSuggestion:(id)arg1 uuid:(id)arg2 engagementStatus:(id)arg3;

@end
