
@interface UNMutableNotificationSettings : UNNotificationSettings

@property (nonatomic) long long alertSetting;
@property (nonatomic) long long alertStyle;
@property (nonatomic) long long announcementSetting;
@property (nonatomic) long long authorizationStatus;
@property (nonatomic) long long badgeSetting;
@property (nonatomic) long long carPlaySetting;
@property (nonatomic) long long criticalAlertSetting;
@property (nonatomic) long long directMessagesSetting;
@property (nonatomic) long long groupingSetting;
@property (nonatomic) long long lockScreenSetting;
@property (nonatomic) long long notificationCenterSetting;
@property (nonatomic) bool providesAppNotificationSettings;
@property (nonatomic) long long scheduledDeliverySetting;
@property (nonatomic) long long showPreviewsSetting;
@property (nonatomic) long long soundSetting;
@property (nonatomic) long long timeSensitiveSetting;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAlertSetting:(long long)arg1;
- (void)setAlertStyle:(long long)arg1;
- (void)setAnnouncementSetting:(long long)arg1;
- (void)setAuthorizationStatus:(long long)arg1;
- (void)setBadgeSetting:(long long)arg1;
- (void)setCarPlaySetting:(long long)arg1;
- (void)setCriticalAlertSetting:(long long)arg1;
- (void)setDirectMessagesSetting:(long long)arg1;
- (void)setGroupingSetting:(long long)arg1;
- (void)setLockScreenSetting:(long long)arg1;
- (void)setNotificationCenterSetting:(long long)arg1;
- (void)setProvidesAppNotificationSettings:(bool)arg1;
- (void)setScheduledDeliverySetting:(long long)arg1;
- (void)setShowPreviewsSetting:(long long)arg1;
- (void)setSoundSetting:(long long)arg1;
- (void)setTimeSensitiveSetting:(long long)arg1;

@end
