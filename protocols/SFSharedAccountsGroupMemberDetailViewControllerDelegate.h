
@protocol SFSharedAccountsGroupMemberDetailViewControllerDelegate <NSObject>

@required

- (void)groupMemberDetailViewController:(SFSharedAccountsGroupMemberDetailViewController *)arg1 changedPermissionForGroupMember:(_ASAccountSharingGroupMemberData *)arg2 toPermissionLevel:(long long)arg3;
- (void)groupMemberDetailViewController:(SFSharedAccountsGroupMemberDetailViewController *)arg1 removedGroupMember:(_ASAccountSharingGroupMemberData *)arg2;

@end
