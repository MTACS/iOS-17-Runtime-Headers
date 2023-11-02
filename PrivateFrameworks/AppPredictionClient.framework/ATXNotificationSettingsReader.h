
@interface ATXNotificationSettingsReader : NSObject <ATXNotificationSettingsReaderProtocol> {
    ATXDNDModeConfigurationClient * _modeConfigClient;
    UNNotificationSettingsCenter * _notificationSettingsCenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allConfiguredDigestApps;
- (bool)appIsOnAllowList:(id)arg1 dndModeUUID:(id)arg2;
- (bool)appIsOnDenyList:(id)arg1 dndModeUUID:(id)arg2;
- (unsigned long long)applicationConfigurationTypeForDNDModeUUID:(id)arg1 success:(bool*)arg2;
- (bool)contactIsOnAllowList:(id)arg1 dndModeUUID:(id)arg2;
- (bool)contactIsOnDenyList:(id)arg1 dndModeUUID:(id)arg2;
- (bool)digestSetupComplete;
- (bool)doesAppAllowMessageBreakthrough:(id)arg1;
- (bool)doesAppSendNotificationsToDigest:(id)arg1;
- (id)init;
- (id)initWithModeConfigurationClient:(id)arg1 notificationSettingsCenter:(id)arg2;
- (id)modeConfiguration:(id)arg1;
- (id)notificationDigestDeliveryTimes;
- (id)numConfiguredModes;
- (unsigned long long)senderConfigurationTypeForDNDModeUUID:(id)arg1 success:(bool*)arg2;

@end
