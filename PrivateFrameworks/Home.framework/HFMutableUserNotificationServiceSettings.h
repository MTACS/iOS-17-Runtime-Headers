
@interface HFMutableUserNotificationServiceSettings : HFUserNotificationServiceSettings

@property (getter=areDoorbellNotificationsEnabled, nonatomic) bool doorbellNotificationsEnabled;
@property (getter=areMotionNotificationsEnabled, nonatomic) bool motionNotificationsEnabled;
@property (nonatomic, retain) NSPredicate *notificationCondition;
@property (getter=areNotificationsEnabled, nonatomic) bool notificationsEnabled;
@property (nonatomic, retain) NSPredicate *smartCameraNotificationCondition;
@property (getter=areSmartDetectionNotificationsEnabled, nonatomic) bool smartDetectionNotificationsEnabled;

@end
