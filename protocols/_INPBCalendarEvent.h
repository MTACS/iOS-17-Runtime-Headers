
@protocol _INPBCalendarEvent <NSObject>

@required

+ (Class)participantsType;

- (void)addParticipants:(_INPBEventParticipant *)arg1;
- (NSString *)calendarPunchoutURI;
- (void)clearParticipants;
- (_INPBDateTimeRangeValue *)dateTimeRange;
- (NSString *)eventIdentifier;
- (bool)hasCalendarPunchoutURI;
- (bool)hasDateTimeRange;
- (bool)hasEventIdentifier;
- (bool)hasIsContactBirthday;
- (bool)hasLocation;
- (bool)hasTitle;
- (bool)isContactBirthday;
- (_INPBLocation *)location;
- (NSArray *)participants;
- (_INPBEventParticipant *)participantsAtIndex:(unsigned long long)arg1;
- (unsigned long long)participantsCount;
- (void)setCalendarPunchoutURI:(NSString *)arg1;
- (void)setDateTimeRange:(_INPBDateTimeRangeValue *)arg1;
- (void)setEventIdentifier:(NSString *)arg1;
- (void)setHasIsContactBirthday:(bool)arg1;
- (void)setIsContactBirthday:(bool)arg1;
- (void)setLocation:(_INPBLocation *)arg1;
- (void)setParticipants:(NSArray *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)title;

@end
