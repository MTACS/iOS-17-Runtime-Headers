
@protocol _INPBReservation <NSObject>

@required

+ (Class)actionsType;

- (int)StringAsReservationStatus:(NSString *)arg1;
- (NSArray *)actions;
- (_INPBReservationAction *)actionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)actionsCount;
- (void)addActions:(_INPBReservationAction *)arg1;
- (_INPBTimestamp *)bookingTime;
- (void)clearActions;
- (bool)hasBookingTime;
- (bool)hasItemReference;
- (bool)hasReservationHolderName;
- (bool)hasReservationNumber;
- (bool)hasReservationStatus;
- (bool)hasUrl;
- (_INPBDataString *)itemReference;
- (NSString *)reservationHolderName;
- (NSString *)reservationNumber;
- (int)reservationStatus;
- (NSString *)reservationStatusAsString:(int)arg1;
- (void)setActions:(NSArray *)arg1;
- (void)setBookingTime:(_INPBTimestamp *)arg1;
- (void)setHasReservationStatus:(bool)arg1;
- (void)setItemReference:(_INPBDataString *)arg1;
- (void)setReservationHolderName:(NSString *)arg1;
- (void)setReservationNumber:(NSString *)arg1;
- (void)setReservationStatus:(int)arg1;
- (void)setUrl:(_INPBURLValue *)arg1;
- (_INPBURLValue *)url;

@end
