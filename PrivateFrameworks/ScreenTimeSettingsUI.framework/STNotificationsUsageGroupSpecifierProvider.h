
@interface STNotificationsUsageGroupSpecifierProvider : STShowMoreUsageGroupSpecifierProvider {
    NSMutableDictionary * _notificationSectionByBundleID;
    BBSettingsGateway * _notificationSettingsGateway;
    NSObject<OS_dispatch_queue> * _notificationSettingsGatewayQueue;
}

@property (nonatomic, readonly) NSMutableDictionary *notificationSectionByBundleID;
@property (nonatomic, readonly) BBSettingsGateway *notificationSettingsGateway;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *notificationSettingsGatewayQueue;

- (void).cxx_destruct;
- (void)_selectedUsageReportDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)_specifierIdentifierDidChange:(id)arg1;
- (id)_usageDetailsCoordinator:(id)arg1;
- (id)getNotificationsInfo:(id)arg1;
- (id)init;
- (id)newSpecifierWithUsageItem:(id)arg1;
- (id)notificationSectionByBundleID;
- (id)notificationSettingsGateway;
- (id)notificationSettingsGatewayQueue;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setCoordinator:(id)arg1;
- (void)updateSpecifier:(id)arg1 usageItem:(id)arg2;

@end
