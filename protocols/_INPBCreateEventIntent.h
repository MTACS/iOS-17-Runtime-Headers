
@protocol _INPBCreateEventIntent <NSObject>

@required

+ (Class)participantsType;

- (void)addParticipants:(_INPBContact *)arg1;
- (void)clearParticipants;
- (_INPBDateTimeRangeValue *)dateTimeRange;
- (bool)hasDateTimeRange;
- (bool)hasIntentMetadata;
- (bool)hasLocation;
- (bool)hasTitle;
- (_INPBIntentMetadata *)intentMetadata;
- (_INPBLocation *)location;
- (NSArray *)participants;
- (_INPBContact *)participantsAtIndex:(unsigned long long)arg1;
- (unsigned long long)participantsCount;
- (void)setDateTimeRange:(_INPBDateTimeRangeValue *)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setLocation:(_INPBLocation *)arg1;
- (void)setParticipants:(NSArray *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)title;

@end
