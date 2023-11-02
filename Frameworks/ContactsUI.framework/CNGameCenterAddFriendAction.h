
@interface CNGameCenterAddFriendAction : CNContactAction

- (id)actionTitleForContact:(id)arg1;
- (void)addContactAsFriend:(id)arg1;
- (id /* block */)addFriendsMenuProvider;
- (id)contactPerHandleForContact:(id)arg1;
- (void)createInviteFriendViewControllerForContact:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performActionWithSender:(id)arg1;
- (id)title;

@end
