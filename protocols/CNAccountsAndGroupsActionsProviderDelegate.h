
@protocol CNAccountsAndGroupsActionsProviderDelegate <CNContactListActionDelegate>

@required

- (void)expandSectionForAccountWithIdentifier:(NSString *)arg1;
- (void)presentController:(UIViewController *)arg1 animated:(bool)arg2;
- (void)presentErrorAlertWithMessage:(NSString *)arg1 animated:(bool)arg2;
- (void)presentErrorAlertWithTitle:(NSString *)arg1 message:(NSString *)arg2 animated:(bool)arg3;
- (void)reloadCollectionViewAddingPlaceholderItem:(CNAccountsAndGroupsItem *)arg1 inSectionWithIdentifier:(NSString *)arg2;
- (void)reloadCollectionViewDeletingItem:(CNAccountsAndGroupsItem *)arg1;
- (void)reloadCollectionViewForSectionWithIdentifier:(NSString *)arg1 settingFilterForEditingItem:(bool)arg2 allowsReloadWhenEditing:(bool)arg3;
- (void)resignAllFirstRespondersSavingCurrentlyEditing:(bool)arg1;
- (void)showEditAuthorizationPaneWithAuthorizationContext:(CNAccountsAndGroupsAuthorizationContext *)arg1 animated:(bool)arg2;

@end
