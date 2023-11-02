
@interface ATXNotificationInterruptionTuner : NSObject {
    ATXNotificationManagementMAConstants * _constants;
    ATXNotificationAndSuggestionDatastore * _dataStore;
    ATXInterruptionManager * _interruptionManager;
    ATXDNDModeConfigurationClient * _modeConfigClient;
    <ATXModeEntityScorerProtocol> * _modesModels;
    <ATXNotificationSettingsReaderProtocol> * _notificationSettingsReader;
}

- (void).cxx_destruct;
- (id)activeNotificationSuggestionsForMode:(unsigned long long)arg1;
- (id)activeNotificationSuggestionsForMode:(unsigned long long)arg1 candidateNotifications:(id)arg2;
- (id)dndModeUUID:(unsigned long long)arg1;
- (id)init;
- (id)initWithModesModels:(id)arg1 notificationSettingsReader:(id)arg2 dataStore:(id)arg3;
- (id)initWithModesModels:(id)arg1 notificationSettingsReader:(id)arg2 dataStore:(id)arg3 modeConfigClient:(id)arg4;
- (id)initWithModesModels:(id)arg1 notificationSettingsReader:(id)arg2 dataStore:(id)arg3 modeConfigClient:(id)arg4 interruptionManager:(id)arg5;
- (id)initWithNotificationSettingsReader:(id)arg1 dataStore:(id)arg2 modeConfigClient:(id)arg3 interruptionManager:(id)arg4;
- (long long)recommendedUrgencyForNotification:(id)arg1 mode:(unsigned long long)arg2;
- (id)tuningSuggestionForNotification:(id)arg1 mode:(unsigned long long)arg2;
- (bool)validateNotificationUrgency:(id)arg1;

@end
