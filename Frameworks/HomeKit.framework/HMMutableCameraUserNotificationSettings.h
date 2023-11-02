
@interface HMMutableCameraUserNotificationSettings : HMCameraUserNotificationSettings

@property (getter=isAccessModeChangeNotificationEnabled) bool accessModeChangeNotificationEnabled;
@property (getter=isReachabilityEventNotificationEnabled) bool reachabilityEventNotificationEnabled;
@property (copy) NSPredicate *smartBulletinBoardNotificationCondition;
@property (getter=isSmartBulletinBoardNotificationEnabled) bool smartBulletinBoardNotificationEnabled;
@property long long version;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
