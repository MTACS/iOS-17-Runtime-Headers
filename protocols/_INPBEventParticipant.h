
@protocol _INPBEventParticipant <NSObject>

@required

- (int)StringAsStatus:(NSString *)arg1;
- (bool)hasIsEventOrganizer;
- (bool)hasIsUser;
- (bool)hasPerson;
- (bool)hasStatus;
- (bool)isEventOrganizer;
- (bool)isUser;
- (_INPBContact *)person;
- (void)setHasIsEventOrganizer:(bool)arg1;
- (void)setHasIsUser:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setIsEventOrganizer:(bool)arg1;
- (void)setIsUser:(bool)arg1;
- (void)setPerson:(_INPBContact *)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (NSString *)statusAsString:(int)arg1;

@end
