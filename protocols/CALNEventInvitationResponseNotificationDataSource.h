
@protocol CALNEventInvitationResponseNotificationDataSource <NSObject>

@required

- (void)acceptEventInvitationResponseWithSourceClientIdentifier:(NSString *)arg1;
- (void)clearEventInvitationResponseWithSourceClientIdentifier:(NSString *)arg1;
- (void)declineEventInvitationResponseWithSourceClientIdentifier:(NSString *)arg1;
- (NSArray *)fetchEventInvitationResponseNotificationSourceClientIdentifiers:(NSSet *)arg1;
- (CALNEventInvitationResponseNotificationInfo *)fetchEventInvitationResponseNotificationWithSourceClientIdentifier:(NSString *)arg1;
- (NSArray *)fetchEventInvitationResponseNotifications;

@end
