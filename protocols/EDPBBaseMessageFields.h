
@protocol EDPBBaseMessageFields

@required

- (long long)accountId;
- (long long)conversationId;
- (long long)mailboxId;
- (int)mailboxType;
- (long long)messageId;
- (void)setAccountId:(long long)arg1;
- (void)setConversationId:(long long)arg1;
- (void)setMailboxId:(long long)arg1;
- (void)setMailboxType:(int)arg1;
- (void)setMessageId:(long long)arg1;

@end
