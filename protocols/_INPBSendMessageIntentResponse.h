
@protocol _INPBSendMessageIntentResponse <NSObject>

@required

+ (Class)sentMessagesType;

- (void)addSentMessages:(_INPBMessage *)arg1;
- (void)clearSentMessages;
- (bool)hasSentMessage;
- (_INPBMessage *)sentMessage;
- (NSArray *)sentMessages;
- (_INPBMessage *)sentMessagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)sentMessagesCount;
- (void)setSentMessage:(_INPBMessage *)arg1;
- (void)setSentMessages:(NSArray *)arg1;

@end
