
@interface UNNotificationSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    long long  _alertSetting;
    long long  _alertStyle;
    long long  _announcementSetting;
    long long  _authorizationStatus;
    long long  _badgeSetting;
    long long  _carPlaySetting;
    long long  _criticalAlertSetting;
    long long  _directMessagesSetting;
    long long  _groupingSetting;
    long long  _lockScreenSetting;
    long long  _notificationCenterSetting;
    bool  _providesAppNotificationSettings;
    long long  _scheduledDeliverySetting;
    long long  _showPreviewsSetting;
    long long  _soundSetting;
    long long  _timeSensitiveSetting;
}

@property (nonatomic, readonly) long long alertSetting;
@property (nonatomic, readonly) long long alertStyle;
@property (nonatomic, readonly) long long announcementSetting;
@property (nonatomic, readonly) long long authorizationStatus;
@property (nonatomic, readonly) long long badgeSetting;
@property (nonatomic, readonly) long long carPlaySetting;
@property (nonatomic, readonly) long long criticalAlertSetting;
@property (nonatomic, readonly) long long directMessagesSetting;
@property (nonatomic, readonly) long long groupingSetting;
@property (nonatomic, readonly) long long lockScreenSetting;
@property (nonatomic, readonly) long long notificationCenterSetting;
@property (nonatomic, readonly) bool providesAppNotificationSettings;
@property (nonatomic, readonly) long long scheduledDeliverySetting;
@property (nonatomic, readonly) long long showPreviewsSetting;
@property (nonatomic, readonly) long long soundSetting;
@property (nonatomic, readonly) long long timeSensitiveSetting;

+ (id)emptySettings;
+ (id)settingsWithAuthorizationStatus:(long long)arg1 soundSetting:(long long)arg2 badgeSetting:(long long)arg3 alertSetting:(long long)arg4 notificationCenterSetting:(long long)arg5 lockScreenSetting:(long long)arg6 carPlaySetting:(long long)arg7 announcementSetting:(long long)arg8 criticalAlertSetting:(long long)arg9 alertStyle:(long long)arg10 showPreviewsSetting:(long long)arg11 groupingSetting:(long long)arg12 providesAppNotificationSettings:(bool)arg13;
+ (id)settingsWithAuthorizationStatus:(long long)arg1 soundSetting:(long long)arg2 badgeSetting:(long long)arg3 alertSetting:(long long)arg4 notificationCenterSetting:(long long)arg5 lockScreenSetting:(long long)arg6 carPlaySetting:(long long)arg7 announcementSetting:(long long)arg8 criticalAlertSetting:(long long)arg9 timeSensitiveSetting:(long long)arg10 alertStyle:(long long)arg11 showPreviewsSetting:(long long)arg12 groupingSetting:(long long)arg13 providesAppNotificationSettings:(bool)arg14;
+ (id)settingsWithAuthorizationStatus:(long long)arg1 soundSetting:(long long)arg2 badgeSetting:(long long)arg3 alertSetting:(long long)arg4 notificationCenterSetting:(long long)arg5 lockScreenSetting:(long long)arg6 carPlaySetting:(long long)arg7 announcementSetting:(long long)arg8 criticalAlertSetting:(long long)arg9 timeSensitiveSetting:(long long)arg10 scheduledDeliverySetting:(long long)arg11 alertStyle:(long long)arg12 showPreviewsSetting:(long long)arg13 groupingSetting:(long long)arg14 providesAppNotificationSettings:(bool)arg15;
+ (id)settingsWithAuthorizationStatus:(long long)arg1 soundSetting:(long long)arg2 badgeSetting:(long long)arg3 alertSetting:(long long)arg4 notificationCenterSetting:(long long)arg5 lockScreenSetting:(long long)arg6 carPlaySetting:(long long)arg7 announcementSetting:(long long)arg8 criticalAlertSetting:(long long)arg9 timeSensitiveSetting:(long long)arg10 scheduledDeliverySetting:(long long)arg11 directMessagesSetting:(long long)arg12 alertStyle:(long long)arg13 showPreviewsSetting:(long long)arg14 groupingSetting:(long long)arg15 providesAppNotificationSettings:(bool)arg16;
+ (id)settingsWithAuthorizationStatus:(long long)arg1 soundSetting:(long long)arg2 badgeSetting:(long long)arg3 alertSetting:(long long)arg4 notificationCenterSetting:(long long)arg5 lockScreenSetting:(long long)arg6 carPlaySetting:(long long)arg7 spokenSetting:(long long)arg8 criticalAlertSetting:(long long)arg9 alertStyle:(long long)arg10 showPreviewsSetting:(long long)arg11 providesAppNotificationSettings:(bool)arg12;
+ (bool)supportsSecureCoding;

- (long long)alertSetting;
- (long long)alertStyle;
- (long long)announcementSetting;
- (long long)authorizationStatus;
- (long long)badgeSetting;
- (long long)carPlaySetting;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)criticalAlertSetting;
- (id)description;
- (long long)directMessagesSetting;
- (void)encodeWithCoder:(id)arg1;
- (long long)groupingSetting;
- (bool)hasEnabledAlertSettings;
- (bool)hasEnabledSettings;
- (unsigned long long)hash;
- (id)initWithAuthorizationStatus:(long long)arg1 soundSetting:(long long)arg2 badgeSetting:(long long)arg3 alertSetting:(long long)arg4 notificationCenterSetting:(long long)arg5 lockScreenSetting:(long long)arg6 carPlaySetting:(long long)arg7 announcementSetting:(long long)arg8 criticalAlertSetting:(long long)arg9 timeSensitiveSetting:(long long)arg10 scheduledDeliverySetting:(long long)arg11 directMessagesSetting:(long long)arg12 alertStyle:(long long)arg13 showPreviewsSetting:(long long)arg14 groupingSetting:(long long)arg15 providesAppNotificationSettings:(bool)arg16;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)lockScreenSetting;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)notificationCenterSetting;
- (bool)providesAppNotificationSettings;
- (long long)scheduledDeliverySetting;
- (long long)showPreviewsSetting;
- (long long)soundSetting;
- (long long)timeSensitiveSetting;

@end
