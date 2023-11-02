
@protocol CKCoreChatControllerDelegate <NSObject>

@required

- (void)chatController:(CKCoreChatController *)arg1 didReportSpamForConversation:(CKConversation *)arg2;
- (void)chatController:(CKCoreChatController *)arg1 didSendCompositionInConversation:(CKConversation *)arg2;
- (void)chatController:(CKCoreChatController *)arg1 requestDeleteJunkConversation:(CKConversation *)arg2;
- (void)chatController:(CKCoreChatController *)arg1 requestRecoverJunkConversation:(CKConversation *)arg2;
- (void)chatController:(CKCoreChatController *)arg1 willSendComposition:(CKComposition *)arg2 inConversation:(CKConversation *)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })initialSystemMinimumLayoutMarginsForChatController:(CKCoreChatController *)arg1;

@end
