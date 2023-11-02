
@protocol _INPBTicketedEvent <NSObject>

@required

- (int)StringAsCategory:(NSString *)arg1;
- (int)category;
- (NSString *)categoryAsString:(int)arg1;
- (_INPBDateTimeRange *)eventDuration;
- (bool)hasCategory;
- (bool)hasEventDuration;
- (bool)hasLocation;
- (bool)hasName;
- (_INPBLocationValue *)location;
- (NSString *)name;
- (void)setCategory:(int)arg1;
- (void)setEventDuration:(_INPBDateTimeRange *)arg1;
- (void)setHasCategory:(bool)arg1;
- (void)setLocation:(_INPBLocationValue *)arg1;
- (void)setName:(NSString *)arg1;

@end
