
@protocol _INPBFindEventsIntent <NSObject>

@required

+ (Class)participantsType;

- (int)StringAsRequestedEventAttribute:(NSString *)arg1;
- (void)addParticipants:(_INPBContact *)arg1;
- (void)clearParticipants;
- (_INPBDateTimeRangeValue *)dateTimeRange;
- (bool)hasDateTimeRange;
- (bool)hasIntentMetadata;
- (bool)hasLocation;
- (bool)hasRequestedEventAttribute;
- (bool)hasSearchQuery;
- (_INPBIntentMetadata *)intentMetadata;
- (_INPBLocation *)location;
- (NSArray *)participants;
- (_INPBContact *)participantsAtIndex:(unsigned long long)arg1;
- (unsigned long long)participantsCount;
- (int)requestedEventAttribute;
- (NSString *)requestedEventAttributeAsString:(int)arg1;
- (NSString *)searchQuery;
- (void)setDateTimeRange:(_INPBDateTimeRangeValue *)arg1;
- (void)setHasRequestedEventAttribute:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setLocation:(_INPBLocation *)arg1;
- (void)setParticipants:(NSArray *)arg1;
- (void)setRequestedEventAttribute:(int)arg1;
- (void)setSearchQuery:(NSString *)arg1;

@end
