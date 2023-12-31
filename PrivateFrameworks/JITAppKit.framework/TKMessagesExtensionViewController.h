
@interface TKMessagesExtensionViewController : MSMessagesAppViewController

- (void)didCancelSendingMessage:(id)arg1 conversation:(id)arg2;
- (void)didReceiveMessage:(id)arg1 conversation:(id)arg2;
- (void)didResignActiveWithConversation:(id)arg1;
- (void)didStartSendingMessage:(id)arg1 conversation:(id)arg2;
- (void)didTransitionToPresentationStyle:(unsigned long long)arg1;
- (void)willBecomeActiveWithConversation:(id)arg1;
- (void)willTransitionToPresentationStyle:(unsigned long long)arg1;

@end
