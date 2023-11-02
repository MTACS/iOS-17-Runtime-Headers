
@protocol NNMKBasicMessage

@required

- (NSString *)conversationId;
- (NSString *)mailboxId;
- (NSString *)messageId;
- (void)setConversationId:(NSString *)arg1;
- (void)setMailboxId:(NSString *)arg1;
- (void)setMessageId:(NSString *)arg1;

@end
