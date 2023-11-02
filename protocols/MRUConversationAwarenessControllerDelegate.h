
@protocol MRUConversationAwarenessControllerDelegate <NSObject>

@required

- (void)conversationAwarenessController:(MRUConversationAwarenessController *)arg1 didChangeConversationAwarenessEnabled:(bool)arg2;
- (void)conversationAwarenessController:(MRUConversationAwarenessController *)arg1 didChangeConversationAwarenessSupported:(bool)arg2;

@end
