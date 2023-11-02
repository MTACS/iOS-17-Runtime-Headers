
@protocol SFSharedAccountsGroupInvitationViewControllerDelegate <NSObject>

@required

- (void)invitationViewController:(SFSharedAccountsGroupInvitationViewController *)arg1 acceptedInvitationForGroup:(KCSharingGroup *)arg2;
- (void)invitationViewController:(SFSharedAccountsGroupInvitationViewController *)arg1 declinedInvitationForGroup:(KCSharingGroup *)arg2;
- (void)invitationViewController:(SFSharedAccountsGroupInvitationViewController *)arg1 failedToAcceptInvitationWithError:(NSError *)arg2;
- (void)invitationViewController:(SFSharedAccountsGroupInvitationViewController *)arg1 failedToDeclineInvitationWithError:(NSError *)arg2;
- (void)invitationViewControllerChoseNotToRespondToInvitation:(SFSharedAccountsGroupInvitationViewController *)arg1;

@end
