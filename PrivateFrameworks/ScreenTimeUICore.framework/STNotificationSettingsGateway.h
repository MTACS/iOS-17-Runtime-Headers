
@interface STNotificationSettingsGateway : NSObject {
    BBSettingsGateway * _notificationSettingsGateway;
    NSObject<OS_dispatch_queue> * _notificationSettingsGatewayQueue;
    NSDictionary * _sectionInfoByBundleIdentifier;
}

@property (readonly) BBSettingsGateway *notificationSettingsGateway;
@property (readonly) NSObject<OS_dispatch_queue> *notificationSettingsGatewayQueue;
@property (readonly, copy) NSDictionary *sectionInfoByBundleIdentifier;

- (void).cxx_destruct;
- (bool)hasNotificationSettings:(id)arg1;
- (id)init;
- (id)initWithBundleIdentifiers:(id)arg1;
- (id)notificationSettingsForBundleIdentifier:(id)arg1;
- (id)notificationSettingsGateway;
- (id)notificationSettingsGatewayQueue;
- (id)sectionInfoByBundleIdentifier;

@end
