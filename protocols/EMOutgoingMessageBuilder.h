
@protocol EMOutgoingMessageBuilder

@required

- (long long)action;
- (long long)conversationNotificationLevel;
- (NSData *)messageData;
- (EMMessageObjectID *)originalMessageID;
- (void)setAction:(long long)arg1;
- (void)setConversationNotificationLevel:(long long)arg1;
- (void)setMessageData:(NSData *)arg1;
- (void)setOriginalMessageID:(EMMessageObjectID *)arg1;
- (void)setShouldEncrypt:(bool)arg1;
- (void)setShouldSign:(bool)arg1;
- (bool)shouldEncrypt;
- (bool)shouldSign;

@end
