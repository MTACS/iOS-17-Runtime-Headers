
@protocol SKAInvitationManagingDelegate

@required

- (void)invitationManager:(id <SKAInvitationManaging>)arg1 didReceiveInvitation:(SKADatabaseReceivedInvitation *)arg2 forChannel:(SKADatabaseChannel *)arg3;
- (void)invitationManager:(id <SKAInvitationManaging>)arg1 didRevokeInvitationOnChannel:(SKADatabaseChannel *)arg2;

@end
