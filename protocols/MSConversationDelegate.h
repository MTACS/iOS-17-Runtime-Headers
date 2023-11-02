
@protocol MSConversationDelegate <NSObject>

@optional

- (void)_conversation:(MSConversation *)arg1 didSelectMessage:(MSMessage *)arg2;
- (void)_conversation:(MSConversation *)arg1 willSelectMessage:(MSMessage *)arg2;

@end
