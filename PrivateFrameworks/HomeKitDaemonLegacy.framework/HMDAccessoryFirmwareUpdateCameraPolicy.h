
@interface HMDAccessoryFirmwareUpdateCameraPolicy : HMDAccessoryFirmwareUpdatePolicy

+ (id)logCategory;

- (void)_checkStreamingStatus;
- (void)_handleStreamStatusCharacteristicChanges;
- (void)_processStreamingStatus:(id)arg1;
- (void)configure;
- (bool)evaluate;
- (void)handleAccessoryConfiguredNotification:(id)arg1;
- (void)handleAccessoryUnconfiguredNotification:(id)arg1;
- (void)handleCharacteristicValuesChanged:(id)arg1;
- (void)handleSettingsChange:(id)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)monitorStreamStatus:(bool)arg1;
- (void)registerForNotifications;

@end
