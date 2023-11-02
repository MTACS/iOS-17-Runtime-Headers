
@protocol NCNotificationDispatcherSourceDelegate <NSObject>

@required

- (void)dispatcher:(NCNotificationDispatcher *)arg1 didExecuteAction:(NCNotificationAction *)arg2 forNotificationRequest:(NCNotificationRequest *)arg3;
- (NCNotificationRequest *)dispatcher:(NCNotificationDispatcher *)arg1 notificationRequestForUUID:(NSUUID *)arg2;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 requestsClearingNotificationRequests:(NSSet *)arg2;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 requestsClearingNotificationRequests:(NSSet *)arg2 fromDestinations:(NSSet *)arg3;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 requestsClearingNotificationRequestsFromDate:(NSDate *)arg2 toDate:(NSDate *)arg3 inSections:(NSSet *)arg4;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 requestsClearingNotificationRequestsInSections:(NSSet *)arg2;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 setAllowsCriticalAlerts:(bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 setAllowsDirectMessages:(bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 setAllowsNotifications:(bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 setAllowsTimeSensitive:(bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 setDeliverQuietly:(bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 setMuted:(bool)arg2 untilDate:(NSDate *)arg3 forSectionIdentifier:(NSString *)arg4 threadIdentifier:(NSString *)arg5;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 setNotificationSystemSettings:(NCNotificationSystemSettings *)arg2;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 setScheduledDelivery:(bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 setSystemScheduledDeliveryEnabled:(bool)arg2 scheduledDeliveryTimes:(NSArray *)arg3;

@end
