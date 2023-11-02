
@protocol ATXNotificationSettingsReaderProtocol <NSObject>

@required

- (NSSet *)allConfiguredDigestApps;
- (bool)appIsOnAllowList:(NSString *)arg1 dndModeUUID:(NSUUID *)arg2;
- (bool)appIsOnDenyList:(NSString *)arg1 dndModeUUID:(NSUUID *)arg2;
- (unsigned long long)applicationConfigurationTypeForDNDModeUUID:(NSUUID *)arg1 success:(bool*)arg2;
- (bool)contactIsOnAllowList:(NSString *)arg1 dndModeUUID:(NSUUID *)arg2;
- (bool)contactIsOnDenyList:(NSString *)arg1 dndModeUUID:(NSUUID *)arg2;
- (bool)digestSetupComplete;
- (bool)doesAppAllowMessageBreakthrough:(NSString *)arg1;
- (bool)doesAppSendNotificationsToDigest:(NSString *)arg1;
- (NSArray *)notificationDigestDeliveryTimes;
- (NSNumber *)numConfiguredModes;
- (unsigned long long)senderConfigurationTypeForDNDModeUUID:(NSUUID *)arg1 success:(bool*)arg2;

@end
