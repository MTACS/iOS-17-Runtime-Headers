
@protocol _INPBGetReservationDetailsIntent <NSObject>

@required

+ (Class)reservationItemReferencesType;

- (void)addReservationItemReferences:(_INPBDataString *)arg1;
- (void)clearReservationItemReferences;
- (bool)hasIntentMetadata;
- (bool)hasReservationContainerReference;
- (_INPBIntentMetadata *)intentMetadata;
- (_INPBDataString *)reservationContainerReference;
- (NSArray *)reservationItemReferences;
- (_INPBDataString *)reservationItemReferencesAtIndex:(unsigned long long)arg1;
- (unsigned long long)reservationItemReferencesCount;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setReservationContainerReference:(_INPBDataString *)arg1;
- (void)setReservationItemReferences:(NSArray *)arg1;

@end
