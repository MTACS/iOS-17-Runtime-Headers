
@interface HKHRCardioFitnessNotificationSettingsFactory : NSObject {
    HKHRCardioFitnessNotificationStatus * _notificationStatus;
}

@property (nonatomic, retain) HKHRCardioFitnessNotificationStatus *notificationStatus;

- (void).cxx_destruct;
- (id)_ageGatedBridgeSettingFooter;
- (id)_ageGatedWatchSettingFooter;
- (id)_ageNotSetBridgeSettingFooter;
- (id)_ageNotSetWatchSettingFooter;
- (id)_genericBridgeSettingFooter;
- (id)_genericWatchSettingFooter;
- (bool)_hasUnavailabilitySetForReasons:(long long)arg1;
- (id)_notificationsAvailableBridgeSettingFooter;
- (id)_pairedDeviceRegionGatedFooter;
- (id)bridgeSettings;
- (id)initWithNotificationStatus:(id)arg1;
- (id)notificationStatus;
- (void)setNotificationStatus:(id)arg1;
- (id)watchSettings;

@end
