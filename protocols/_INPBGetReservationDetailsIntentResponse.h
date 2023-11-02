
@protocol _INPBGetReservationDetailsIntentResponse <NSObject>

@required

+ (Class)reservationsType;

- (void)addReservations:(_INPBReservationWrapper *)arg1;
- (void)clearReservations;
- (NSArray *)reservations;
- (_INPBReservationWrapper *)reservationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)reservationsCount;
- (void)setReservations:(NSArray *)arg1;

@end
