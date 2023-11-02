
@protocol CKComposeRecipientSelectionControllerDelegate <NSObject, CKRecipientSelectionControllerDelegate>

@required

- (void)recipientSelectionController:(CKComposeRecipientSelectionController *)arg1 didSelectConversation:(CKConversation *)arg2 isiMessagable:(bool)arg3;
- (void)recipientSelectionControllerDidLoadFromField;

@end
