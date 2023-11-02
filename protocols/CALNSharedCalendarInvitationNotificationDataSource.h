
@protocol CALNSharedCalendarInvitationNotificationDataSource <NSObject>

@required

- (void)clearSharedCalendarInvitationWithSourceClientIdentifier:(NSString *)arg1;
- (void)declineSharedCalendarWithSourceClientIdentifier:(NSString *)arg1;
- (NSArray *)fetchSharedCalendarInvitationNotificationSourceClientIdentifiers:(NSSet *)arg1;
- (CALNSharedCalendarInvitationNotificationInfo *)fetchSharedCalendarInvitationNotificationWithSourceClientIdentifier:(NSString *)arg1;
- (NSArray *)fetchSharedCalendarInvitationNotifications;
- (void)joinSharedCalendarWithSourceClientIdentifier:(NSString *)arg1;
- (void)reportSharedCalendarAsJunkWithSourceClientIdentifier:(NSString *)arg1;

@end
