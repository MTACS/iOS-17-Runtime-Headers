
@protocol CSNotificationDispatcher <CSCoverSheetParticipating>

@required

- (<CSNotificationAlertingController> *)alertingControllerForDestination:(id <CSNotificationDestination>)arg1;
- (void)destination:(id <CSNotificationDestination>)arg1 clearNotificationRequests:(NSSet *)arg2;
- (void)destination:(id <CSNotificationDestination>)arg1 clearNotificationRequestsFromDate:(NSDate *)arg2 toDate:(NSDate *)arg3 inSections:(NSSet *)arg4;
- (void)destination:(id <CSNotificationDestination>)arg1 clearNotificationRequestsFromIncomingSection:(NSSet *)arg2;
- (void)destination:(id <CSNotificationDestination>)arg1 clearNotificationRequestsInSections:(NSSet *)arg2;
- (NCNotificationRequest *)destination:(id <CSNotificationDestination>)arg1 notificationRequestForUUID:(NSUUID *)arg2;
- (void)destination:(void *)arg1 performAction:(void *)arg2 forNotificationRequest:(void *)arg3 requestAuthentication:(void *)arg4 withParameters:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 11: <CSNotificationDestination> *, NCNotificationAction *, NCNotificationRequest *, bool, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)destination:(void *)arg1 requestPermissionToExecuteAction:(void *)arg2 forNotificationRequest:(void *)arg3 withParameters:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: <CSNotificationDestination> *, NCNotificationAction *, NCNotificationRequest *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)destination:(id <CSNotificationDestination>)arg1 setAllowsCriticalAlerts:(bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)destination:(id <CSNotificationDestination>)arg1 setAllowsDirectMessages:(bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)destination:(id <CSNotificationDestination>)arg1 setAllowsNotifications:(bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)destination:(id <CSNotificationDestination>)arg1 setAllowsTimeSensitive:(bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)destination:(id <CSNotificationDestination>)arg1 setDeliverQuietly:(bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)destination:(id <CSNotificationDestination>)arg1 setMuted:(bool)arg2 untilDate:(NSDate *)arg3 forSectionIdentifier:(NSString *)arg4 threadIdentifier:(NSString *)arg5;
- (void)destination:(id <CSNotificationDestination>)arg1 setNotificationSystemSettings:(NCNotificationSystemSettings *)arg2;
- (void)destination:(id <CSNotificationDestination>)arg1 setScheduledDelivery:(bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)destination:(id <CSNotificationDestination>)arg1 setSystemScheduledDeliveryEnabled:(bool)arg2 scheduledDeliveryTimes:(NSArray *)arg3;
- (NCNotificationSectionSettings *)destination:(id <CSNotificationDestination>)arg1 settingsForSectionIdentifier:(NSString *)arg2;
- (NSSet *)notificationSectionSettingsForDestination:(id <CSNotificationDestination>)arg1;
- (NCNotificationSystemSettings *)notificationSystemSettingsForDestination:(id <CSNotificationDestination>)arg1;

@end
