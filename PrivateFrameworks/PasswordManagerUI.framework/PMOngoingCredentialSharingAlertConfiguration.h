
@interface PMOngoingCredentialSharingAlertConfiguration : NSObject

+ (id)alertSubtitleForFailingToMoveAccountsBackToPersonalKeychainWhileDeletingGroup;
+ (id)alertSubtitleForFailingToMoveAccountsBackToPersonalKeychainWhileLeavingGroup;
+ (id)alertSubtitleForFailingToMoveSavedAccounts:(id)arg1 toGroupWithName:(id)arg2;
+ (id)alertSubtitleForUnavailableGroup;
+ (id)alertTitleForFailingToAcceptInvitationWithError:(id)arg1;
+ (id)alertTitleForFailingToAddGroupMemberWithError:(id)arg1;
+ (id)alertTitleForFailingToCreateGroupWithError:(id)arg1;
+ (id)alertTitleForFailingToDeclineInvitationWithError:(id)arg1;
+ (id)alertTitleForFailingToDeleteGroupWithError:(id)arg1;
+ (id)alertTitleForFailingToLeaveGroupWithError:(id)arg1;
+ (id)alertTitleForFailingToMoveAccountsBackToPersonalKeychainWhileDeletingGroup;
+ (id)alertTitleForFailingToMoveAccountsBackToPersonalKeychainWhileLeavingGroup;
+ (id)alertTitleForFailingToMoveToGroup;
+ (id)alertTitleForFailingToRemoveGroupMemberWithError:(id)arg1;
+ (id)alertTitleForFailingToUpdateGroupWithError:(id)arg1;
+ (id)alertTitleForMovingSavedAccount:(id)arg1 toGroupWithName:(id)arg2;
+ (id)alertTitleForUnavailableGroup;
+ (id)confirmationAlertSubtitleForMovingSavedAccount:(id)arg1 fromGroupWithName:(id)arg2;
+ (id)confirmationAlertSubtitleForMovingSavedAccount:(id)arg1 fromMyPasswordsToGroupWithName:(id)arg2;
+ (id)confirmationAlertSubtitleForMovingSavedAccount:(id)arg1 toMyPasswordsFromGroup:(id)arg2;
+ (id)confirmationAlertSubtitleForRemovingGroupMemberWithName:(id)arg1;
+ (id)confirmationAlertTitleAndSubtitleForMovingSavedAccounts:(id)arg1 toGroupWithName:(id)arg2;
+ (id)confirmationAlertTitleForRemovingGroupMemberWithName:(id)arg1;
+ (id)declineGroupInvitationAlertTitleForGroupWithName:(id)arg1 fromKnownSender:(bool)arg2;
+ (id)groupDeletionConfirmationAlertSubtitle;
+ (id)groupDeletionConfirmationAlertTitle;
+ (id)groupDeletionWarningAlertSubtitle;
+ (id)groupExitWarningAlertTitleWithGroupMemberNames:(id)arg1;
+ (id)leaveGroupConfirmationAlertSubtitle;
+ (id)leaveGroupConfirmationAlertTitle;
+ (id)leaveGroupWarningAlertSubtitle;
+ (id)warningAlertMessageForMovingNumberOfReusedPasswords:(long long)arg1 withTotalNumberOfAccountsSelected:(long long)arg2;
+ (id)warningAlertSubtitleTellingUserThatRemovedGroupMemberMightStillHaveAccessToAccountsAfterRemoval:(id)arg1;
+ (id)warningAlertTitleForMovingNumberOfReusedPasswords:(long long)arg1 withTotalNumberOfAccountsSelected:(long long)arg2;
+ (id)warningAlertTitleTellingUserThatRemovedGroupMemberMightStillHaveAccessToAccountsAfterRemoval:(id)arg1;

@end
