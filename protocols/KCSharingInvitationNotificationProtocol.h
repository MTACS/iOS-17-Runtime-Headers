
@protocol KCSharingInvitationNotificationProtocol <NSObject>

@required

- (void)groupInvitationWasCancelled;
- (void)receivedGroupInvitation:(KCSharingGroupInvite *)arg1;

@end
