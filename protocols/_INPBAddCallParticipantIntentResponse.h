
@protocol _INPBAddCallParticipantIntentResponse <NSObject>

@required

+ (Class)invitesType;

- (void)addInvites:(_INPBCallInvite *)arg1;
- (void)clearInvites;
- (NSArray *)invites;
- (_INPBCallInvite *)invitesAtIndex:(unsigned long long)arg1;
- (unsigned long long)invitesCount;
- (void)setInvites:(NSArray *)arg1;

@end
