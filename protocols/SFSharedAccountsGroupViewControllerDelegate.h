
@protocol SFSharedAccountsGroupViewControllerDelegate <NSObject>

@optional

- (void)createGroupViewController:(SFSharedAccountsGroupViewController *)arg1 completedWithGroup:(KCSharingGroup *)arg2 error:(NSError *)arg3;
- (void)groupViewController:(SFSharedAccountsGroupViewController *)arg1 didDeleteGroupWithMemberNames:(NSArray *)arg2;
- (void)groupViewController:(SFSharedAccountsGroupViewController *)arg1 didLeaveGroupWithMemberNames:(NSArray *)arg2;

@end
