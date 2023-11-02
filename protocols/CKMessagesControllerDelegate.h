
@protocol CKMessagesControllerDelegate

@required

- (void)didShowNewComposeInMessagesController:(CKMessagesController *)arg1;
- (void)messagesController:(CKMessagesController *)arg1 didShowConversation:(CKConversation *)arg2;
- (void)messagesController:(CKMessagesController *)arg1 didUpdateCurrentConversation:(CKConversation *)arg2;

@end
