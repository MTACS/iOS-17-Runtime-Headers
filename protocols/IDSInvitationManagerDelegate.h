
@protocol IDSInvitationManagerDelegate <IDSServiceDelegate>

@required

- (void)manager:(IDSInvitationManager *)arg1 incomingInvitation:(IDSReceivedInvitation *)arg2;
- (void)manager:(IDSInvitationManager *)arg1 receiverDidAcceptInvitation:(IDSSentInvitation *)arg2;
- (void)manager:(IDSInvitationManager *)arg1 receiverDidDeclineInvitation:(IDSSentInvitation *)arg2;
- (void)manager:(IDSInvitationManager *)arg1 senderDidCancelInvitation:(IDSReceivedInvitation *)arg2;

@end
