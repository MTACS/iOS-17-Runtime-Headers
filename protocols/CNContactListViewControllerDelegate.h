
@protocol CNContactListViewControllerDelegate <NSObject>

@optional

- (bool)contactListViewController:(CNContactListViewController *)arg1 canSelectContact:(CNContact *)arg2;
- (void)contactListViewController:(CNContactListViewController *)arg1 didSelectContact:(CNContact *)arg2;
- (void)contactListViewController:(CNContactListViewController *)arg1 didSelectContact:(CNContact *)arg2 shouldScrollToContact:(bool)arg3;
- (void)contactListViewController:(CNContactListViewController *)arg1 shouldPresentContact:(CNContact *)arg2 shouldScrollToContact:(bool)arg3;
- (bool)contactListViewController:(CNContactListViewController *)arg1 shouldSelectContact:(CNContact *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)contactListViewController:(CNContactListViewController *)arg1 updatedSelectedContact:(CNContact *)arg2;
- (void)contactListViewControllerSelectedAddContactToList:(CNContactListViewController *)arg1 withSourceView:(UIView *)arg2;
- (void)contactListViewControllerSelectedCreateNewContact:(CNContactListViewController *)arg1;
- (bool)contactSuggestionViewController:(CNContactSuggestionsViewController *)arg1 shouldSelectContact:(CNContact *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (CNContact *)currentlyDisplayedContact;
- (void)dataSourceChangedForContactListViewController:(CNContactListViewController *)arg1;
- (void)resetContactViewController;

@end
