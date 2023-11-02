
@protocol DNDSAssertionSyncManagerDataSource <NSObject>

@required

- (DNDSPairedDevice *)currentlyActivePairedDeviceForSyncManager:(id <DNDSAssertionSyncManager>)arg1;
- (bool)isCloudSyncDisabledForSyncManager:(id <DNDSAssertionSyncManager>)arg1;
- (NSSet *)pairedDevicesForSyncManager:(id <DNDSAssertionSyncManager>)arg1;
- (DNDSPairedDevice *)syncManager:(id <DNDSAssertionSyncManager>)arg1 deviceForDeviceIdentifier:(NSString *)arg2;
- (DNDScheduleSettings *)syncManager:(id <DNDSAssertionSyncManager>)arg1 scheduleSettingsForModeIdentifier:(NSString *)arg2;
- (DNDModeAssertion *)syncManager:(id <DNDSAssertionSyncManager>)arg1 updateOutboundModeAssertion:(DNDModeAssertion *)arg2;

@end
