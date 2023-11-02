
@protocol _INPBCallInvite <NSObject>

@required

+ (Class)participantsType;

- (int)StringAsInviteType:(NSString *)arg1;
- (void)addParticipants:(_INPBContact *)arg1;
- (_INPBURLValue *)callURL;
- (void)clearParticipants;
- (bool)hasCallURL;
- (bool)hasInviteType;
- (int)inviteType;
- (NSString *)inviteTypeAsString:(int)arg1;
- (NSArray *)participants;
- (_INPBContact *)participantsAtIndex:(unsigned long long)arg1;
- (unsigned long long)participantsCount;
- (void)setCallURL:(_INPBURLValue *)arg1;
- (void)setHasInviteType:(bool)arg1;
- (void)setInviteType:(int)arg1;
- (void)setParticipants:(NSArray *)arg1;

@end
