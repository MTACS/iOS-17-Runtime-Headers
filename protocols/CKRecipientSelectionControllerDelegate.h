
@protocol CKRecipientSelectionControllerDelegate <NSObject>

@required

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })navigationBarInsetsForRecipientSelectionController:(CKRecipientSelectionController *)arg1;
- (void)recipientSelectionController:(CKRecipientSelectionController *)arg1 didFinishAvailaiblityLookupForRecipient:(CNComposeRecipient *)arg2;
- (void)recipientSelectionController:(CKRecipientSelectionController *)arg1 textDidChange:(NSString *)arg2;
- (void)recipientSelectionControllerDidBecomeFirstResponder:(CKRecipientSelectionController *)arg1;
- (void)recipientSelectionControllerDidChangeSize:(CKRecipientSelectionController *)arg1;
- (void)recipientSelectionControllerDidPushABViewController:(CKRecipientSelectionController *)arg1;
- (void)recipientSelectionControllerRequestDismissKeyboard:(CKRecipientSelectionController *)arg1;
- (void)recipientSelectionControllerReturnPressed:(CKRecipientSelectionController *)arg1;
- (void)recipientSelectionControllerSearchListDidShowOrHide:(CKRecipientSelectionController *)arg1;
- (void)recipientSelectionControllerShouldResignFirstResponder:(CKRecipientSelectionController *)arg1;
- (void)recipientSelectionControllerTabPressed:(CKRecipientSelectionController *)arg1;
- (bool)recipientSelectionIsGroup:(CKRecipientSelectionController *)arg1;

@optional

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })additionalSearchResultsEdgeInsetsForRecipientSelectionController:(CKRecipientSelectionController *)arg1;
- (UIView *)headerDecorationViewForRecipientSelectionConroller:(CKRecipientSelectionController *)arg1;
- (void)showConversation:(CKConversation *)arg1 animate:(bool)arg2;
- (long long)userInterfaceStyleOverrideForRecipientSelectionConroller:(CKRecipientSelectionController *)arg1;

@end
