
@protocol NCNotificationListComponent <NCNotificationListBaseComponent>

@required

- (NSDate *)comparisonDate;
- (bool)containsNotificationRequest:(NCNotificationRequest *)arg1;
- (void)insertNotificationRequest:(NCNotificationRequest *)arg1;
- (bool)isDeviceAuthenticated;
- (NSString *)logDescription;
- (void)modifyNotificationRequest:(NCNotificationRequest *)arg1;
- (unsigned long long)notificationCount;
- (void)notificationsLoadedForSectionIdentifier:(NSString *)arg1;
- (void)reloadNotificationRequest:(NCNotificationRequest *)arg1;
- (void)removeNotificationRequest:(NCNotificationRequest *)arg1;
- (void)setDeviceAuthenticated:(bool)arg1;
- (void)setLogDescription:(NSString *)arg1;
- (void)updateNotificationSectionSettings:(NCNotificationSectionSettings *)arg1 previousSectionSettings:(NCNotificationSectionSettings *)arg2;

@end
