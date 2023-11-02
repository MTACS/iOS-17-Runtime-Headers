
@protocol IMChatSessionCloseProcessingParameter <IMPipelineParameter>

@required

- (NSString *)GUID;
- (IMDAccount *)account;
- (NSString *)conversationID;
- (NSString *)senderHandle;
- (NSString *)senderName;
- (void)setChat:(IMDChat *)arg1;
- (void)setMessageItems:(NSArray *)arg1;
- (NSNumber *)timestamp;
- (NSNumber *)version;

@end
