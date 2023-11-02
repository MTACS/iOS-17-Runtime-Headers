
@protocol CALNEventInvitationNotificationDataSource <NSObject>

@required

- (void)acceptEventInvitationWithSourceClientIdentifier:(NSString *)arg1;
- (void)clearEventInvitationWithSourceClientIdentifier:(NSString *)arg1;
- (void)declineEventInvitationWithSourceClientIdentifier:(NSString *)arg1;
- (NSArray *)fetchEventInvitationNotificationSourceClientIdentifiers:(NSSet *)arg1;
- (CALNEventInvitationNotificationInfo *)fetchEventInvitationNotificationWithSourceClientIdentifier:(NSString *)arg1;
- (NSArray *)fetchEventInvitationNotifications;
- (void)reportEventInvitationAsJunkWithSourceClientIdentifier:(NSString *)arg1;
- (void)tentativeAcceptEventInvitationWithSourceClientIdentifier:(NSString *)arg1;

@end
