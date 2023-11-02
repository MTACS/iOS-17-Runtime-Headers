
@protocol _INPBAddCallParticipantIntent <NSObject>

@required

+ (Class)participantsType;

- (void)addParticipants:(_INPBContact *)arg1;
- (void)clearParticipants;
- (bool)hasIntentMetadata;
- (_INPBIntentMetadata *)intentMetadata;
- (NSArray *)participants;
- (_INPBContact *)participantsAtIndex:(unsigned long long)arg1;
- (unsigned long long)participantsCount;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setParticipants:(NSArray *)arg1;

@end
