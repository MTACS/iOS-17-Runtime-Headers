
@protocol CALNSharedCalendarInvitationResponseNotificationDataSource <NSObject>

@required

- (void)clearSharedCalendarInvitationResponseWithSourceClientIdentifier:(NSString *)arg1;
- (NSArray *)fetchSharedCalendarInvitationResponseNotificationSourceClientIdentifiers:(NSSet *)arg1;
- (CALNSharedCalendarInvitationResponseNotificationInfo *)fetchSharedCalendarInvitationResponseNotificationWithSourceClientIdentifier:(NSString *)arg1;
- (NSArray *)fetchSharedCalendarInvitationResponseNotifications;

@end
