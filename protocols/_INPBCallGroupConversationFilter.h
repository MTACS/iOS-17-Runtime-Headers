
@protocol _INPBCallGroupConversationFilter <NSObject>

@required

+ (Class)participantsType;

- (void)addParticipants:(_INPBContact *)arg1;
- (_INPBCallGroup *)callGroup;
- (_INPBContact *)caller;
- (void)clearParticipants;
- (bool)hasCallGroup;
- (bool)hasCaller;
- (bool)hasMatchCallerAndParticipantsExactly;
- (bool)matchCallerAndParticipantsExactly;
- (NSArray *)participants;
- (_INPBContact *)participantsAtIndex:(unsigned long long)arg1;
- (unsigned long long)participantsCount;
- (void)setCallGroup:(_INPBCallGroup *)arg1;
- (void)setCaller:(_INPBContact *)arg1;
- (void)setHasMatchCallerAndParticipantsExactly:(bool)arg1;
- (void)setMatchCallerAndParticipantsExactly:(bool)arg1;
- (void)setParticipants:(NSArray *)arg1;

@end
