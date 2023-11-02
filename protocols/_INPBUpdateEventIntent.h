
@protocol _INPBUpdateEventIntent <NSObject>

@required

+ (Class)addParticipantsType;
+ (Class)removeParticipantsType;

- (void)addAddParticipants:(_INPBContact *)arg1;
- (NSArray *)addParticipants;
- (_INPBContact *)addParticipantsAtIndex:(unsigned long long)arg1;
- (unsigned long long)addParticipantsCount;
- (void)addRemoveParticipants:(_INPBContact *)arg1;
- (void)clearAddParticipants;
- (void)clearRemoveParticipants;
- (bool)hasIntentMetadata;
- (bool)hasRemoveLocation;
- (bool)hasSetDateTimeRange;
- (bool)hasSetLocation;
- (bool)hasSetTitle;
- (bool)hasTargetEventIdentifier;
- (bool)hasUpdateAllOccurrences;
- (_INPBIntentMetadata *)intentMetadata;
- (bool)removeLocation;
- (NSArray *)removeParticipants;
- (_INPBContact *)removeParticipantsAtIndex:(unsigned long long)arg1;
- (unsigned long long)removeParticipantsCount;
- (void)setAddParticipants:(NSArray *)arg1;
- (_INPBDateTimeRangeValue *)setDateTimeRange;
- (void)setHasRemoveLocation:(bool)arg1;
- (void)setHasUpdateAllOccurrences:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (_INPBLocation *)setLocation;
- (void)setRemoveLocation:(bool)arg1;
- (void)setRemoveParticipants:(NSArray *)arg1;
- (void)setSetDateTimeRange:(_INPBDateTimeRangeValue *)arg1;
- (void)setSetLocation:(_INPBLocation *)arg1;
- (void)setSetTitle:(NSString *)arg1;
- (void)setTargetEventIdentifier:(NSString *)arg1;
- (NSString *)setTitle;
- (void)setUpdateAllOccurrences:(bool)arg1;
- (NSString *)targetEventIdentifier;
- (bool)updateAllOccurrences;

@end
