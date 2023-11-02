
@interface HFUserNotificationServiceSettings : NSObject <NSCopying, NSMutableCopying> {
    bool  _doorbellNotificationsEnabled;
    bool  _motionNotificationsEnabled;
    NSPredicate * _notificationCondition;
    bool  _notificationsEnabled;
    NSPredicate * _smartCameraNotificationCondition;
    bool  _smartDetectionNotificationsEnabled;
}

@property (getter=areDoorbellNotificationsEnabled, nonatomic) bool doorbellNotificationsEnabled;
@property (getter=areMotionNotificationsEnabled, nonatomic) bool motionNotificationsEnabled;
@property (nonatomic, retain) NSPredicate *notificationCondition;
@property (getter=areNotificationsEnabled, nonatomic) bool notificationsEnabled;
@property (nonatomic, retain) NSPredicate *smartCameraNotificationCondition;
@property (getter=areSmartDetectionNotificationsEnabled, nonatomic) bool smartDetectionNotificationsEnabled;

+ (id)combinedConditionForBulletinBoardNotifications:(id)arg1;

- (void).cxx_destruct;
- (id)applySettingsToBulletinBoardNotifications:(id)arg1;
- (bool)areDoorbellNotificationsEnabled;
- (bool)areMotionNotificationsEnabled;
- (bool)areNotificationsEnabled;
- (bool)areSmartDetectionNotificationsEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithBulletinBoardNotifications:(id)arg1;
- (id)initWithNotificationsEnabled:(bool)arg1 condition:(id)arg2 smartCameraNotificationCondition:(id)arg3;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)notificationCondition;
- (void)setDoorbellNotificationsEnabled:(bool)arg1;
- (void)setMotionNotificationsEnabled:(bool)arg1;
- (void)setNotificationCondition:(id)arg1;
- (void)setNotificationsEnabled:(bool)arg1;
- (void)setSmartCameraNotificationCondition:(id)arg1;
- (void)setSmartDetectionNotificationsEnabled:(bool)arg1;
- (id)smartCameraNotificationCondition;

@end
