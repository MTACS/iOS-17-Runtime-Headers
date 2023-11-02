
@interface ATXUrgencyTuningManager : NSObject {
    ATXNotificationAndSuggestionDatastore * _dataStore;
    ATXNotificationManagementMAConstants * _notificationManagementMAConstants;
}

- (void).cxx_destruct;
- (id)activeSuggestions;
- (id)init;
- (id)initWithDataStore:(id)arg1;
- (id)urgencyTuningSuggestion:(id)arg1 uuid:(id)arg2 engagementStatus:(id)arg3;

@end
