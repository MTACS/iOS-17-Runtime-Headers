
@protocol _INPBCallGroupConversation <NSObject>

@required

+ (Class)otherParticipantsType;

- (void)addOtherParticipants:(_INPBContactValue *)arg1;
- (_INPBCallGroup *)callGroup;
- (_INPBContactValue *)caller;
- (void)clearOtherParticipants;
- (NSString *)conversationId;
- (bool)hasCallGroup;
- (bool)hasCaller;
- (bool)hasConversationId;
- (NSArray *)otherParticipants;
- (_INPBContactValue *)otherParticipantsAtIndex:(unsigned long long)arg1;
- (unsigned long long)otherParticipantsCount;
- (void)setCallGroup:(_INPBCallGroup *)arg1;
- (void)setCaller:(_INPBContactValue *)arg1;
- (void)setConversationId:(NSString *)arg1;
- (void)setOtherParticipants:(NSArray *)arg1;

@end
