
@protocol CNContactNavigationControllerDelegate <UINavigationControllerDelegate>

@optional

- (bool)contactNavigationController:(CNContactNavigationController *)arg1 canSelectContact:(CNContact *)arg2;
- (CNContactViewController *)contactNavigationController:(CNContactNavigationController *)arg1 contactViewControllerForContact:(CNContact *)arg2 preferredMode:(long long)arg3;
- (void)contactNavigationController:(CNContactNavigationController *)arg1 didCompleteWithNewContact:(CNContact *)arg2;
- (void)contactNavigationController:(CNContactNavigationController *)arg1 didDeleteContact:(CNContact *)arg2;
- (bool)contactNavigationController:(CNContactNavigationController *)arg1 presentViewController:(UIViewController *)arg2 animated:(bool)arg3;
- (bool)contactNavigationController:(CNContactNavigationController *)arg1 presentViewController:(UIViewController *)arg2 animated:(bool)arg3 dismissingPresentedController:(bool)arg4 shouldHideContactListIfNeeded:(bool)arg5;
- (bool)contactNavigationController:(CNContactNavigationController *)arg1 shouldPerformDefaultActionForContactProperty:(CNContactProperty *)arg2;
- (bool)contactNavigationController:(CNContactNavigationController *)arg1 shouldSelectContact:(CNContact *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (bool)contactNavigationController:(CNContactNavigationController *)arg1 shouldShowCardForContact:(CNContact *)arg2;
- (void)contactNavigationControllerClearContactSelection:(CNContactNavigationController *)arg1;
- (void)contactNavigationControllerDidCancel:(CNContactNavigationController *)arg1;
- (void)contactNavigationControllerDidComplete:(CNContactNavigationController *)arg1;
- (bool)contactNavigationControllerShouldAddNewContact:(CNContactNavigationController *)arg1;
- (bool)contactNavigationControllerShouldDismissSearchOnSelection:(CNContactNavigationController *)arg1;
- (bool)contactNavigationControllerShouldManageGroupsController:(CNContactNavigationController *)arg1;
- (bool)contactNavigationControllerShouldShowContactsOnKeyCommands:(CNContactNavigationController *)arg1;
- (bool)contactNavigationControllerShouldShowGroupsViewController:(CNContactNavigationController *)arg1;
- (bool)contactSuggestionViewController:(CNContactSuggestionsViewController *)arg1 shouldSelectContact:(CNContact *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (CNContact *)displayedContact;
- (void)resetContactViewController;
- (void)showContactList;
- (void)showGroupsAnimated:(bool)arg1;
- (void)toggleGroupsPanel;

@end
