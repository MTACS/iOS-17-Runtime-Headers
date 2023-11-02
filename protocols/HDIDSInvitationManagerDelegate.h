
@protocol HDIDSInvitationManagerDelegate <NSObject>

@required

- (void)invitationManager:(HDIDSInvitationManager *)arg1 didAcceptInvitation:(HDIDSInvitation *)arg2;
- (void)invitationManager:(HDIDSInvitationManager *)arg1 didDeclineInvitation:(HDIDSInvitation *)arg2;
- (void)invitationManager:(HDIDSInvitationManager *)arg1 didReceiveInvitation:(HDIDSInvitation *)arg2;
- (void)invitationManager:(HDIDSInvitationManager *)arg1 didRescindInvitation:(HDIDSInvitation *)arg2;

@end
