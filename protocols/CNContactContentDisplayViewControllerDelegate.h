
@protocol CNContactContentDisplayViewControllerDelegate <CNContactContentActionPresentingDelegate>

@required

- (void)contactDisplayViewController:(CNContactContentDisplayViewController *)arg1 didUpdateContact:(CNContact *)arg2;
- (void)contactDisplayViewController:(CNContactContentDisplayViewController *)arg1 isPresentingFullscreen:(bool)arg2;
- (bool)isSaveAuthorizedForPropertiesOfContactDisplayViewController:(CNContactContentDisplayViewController *)arg1;

@optional

- (void)contactDisplayViewController:(CNContactContentDisplayViewController *)arg1 didChangePreferredContentSize:(struct CGSize { double x1; double x2; })arg2;
- (void)contactDisplayViewController:(CNContactContentDisplayViewController *)arg1 didChangeToEditMode:(bool)arg2;
- (void)contactDisplayViewController:(CNContactContentDisplayViewController *)arg1 didCompleteWithContact:(CNContact *)arg2;
- (void)contactDisplayViewController:(CNContactContentDisplayViewController *)arg1 didDeleteContact:(CNContact *)arg2;
- (bool)contactDisplayViewController:(CNContactContentDisplayViewController *)arg1 shouldPerformDefaultActionForContact:(CNContact *)arg2 propertyKey:(NSString *)arg3 propertyIdentifier:(NSString *)arg4;
- (void)contactDisplayViewControllerDidExecuteClearRecentsDataAction:(CNContactContentDisplayViewController *)arg1;
- (void)contactDisplayViewControllerDidExecuteDeleteFromDowntimeWhitelistAction:(CNContactContentDisplayViewController *)arg1;
- (void)contactDisplayViewControllerIsDismissingEditingController:(CNContactContentDisplayViewController *)arg1;
- (void)contactDisplayViewControllerIsPresentingEditingController:(CNContactContentDisplayViewController *)arg1;
- (void)contactDisplayViewControllerWillDismissFullscreen:(CNContactContentDisplayViewController *)arg1;
- (void)contactDisplayViewControllerWillPresentFullscreen:(CNContactContentDisplayViewController *)arg1;

@end
