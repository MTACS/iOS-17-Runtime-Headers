
@protocol EKEventViewDelegatePrivateInProcessOnly <EKEventViewDelegate>

@optional

- (void)eventViewController:(EKEventViewController *)arg1 requestPresentShareSheetWithActivityItems:(NSArray *)arg2 withPopoverSourceView:(UIView *)arg3;
- (void)eventViewController:(EKEventViewController *)arg1 requestsDisplayOfDeleteAlert:(UIAlertController *)arg2;
- (void)eventViewControllerDidReceiveEditUserInteraction:(EKEventViewController *)arg1;
- (void)eventViewControllerInlineEditButtonWasTapped:(EKEventViewController *)arg1;
- (void)eventViewControllerModifiedEventWithoutEditing:(EKEventViewController *)arg1;
- (bool)eventViewControllerPresentationWantsHiddenNavBarForSingleController;
- (bool)eventViewControllerShouldAlwaysShowNavBar:(EKEventViewController *)arg1;
- (bool)eventViewControllerShouldHandleInlineEdit:(EKEventViewController *)arg1;
- (bool)eventViewControllerShouldHideDeleteButton;
- (bool)eventViewControllerShouldHideInlineEditButton;
- (bool)eventViewControllerShouldPresentShareSheet:(EKEventViewController *)arg1;
- (bool)eventViewControllerShouldShowInlineEditButtonForInvitations:(EKEventViewController *)arg1;
- (bool)eventViewControllerUseMinimalModeAfterTraitCollectionChange:(EKEventViewController *)arg1;
- (bool)eventViewDelegateShouldHandlePresentationOfDeleteAlert:(EKEventViewController *)arg1;
- (CUIKPasteboardManager *)pasteboardManager;

@end
