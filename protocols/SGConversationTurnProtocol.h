
@protocol SGConversationTurnProtocol

@required

- (bool)isEqualToConversationTurn:(id <SGConversationTurnProtocol>)arg1;
- (NSString *)senderID;
- (NSString *)text;
- (NSDate *)timestamp;

@end
