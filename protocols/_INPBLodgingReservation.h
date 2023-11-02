
@protocol _INPBLodgingReservation <NSObject>

@required

- (bool)hasLodgingBusinessLocation;
- (bool)hasNumberOfAdults;
- (bool)hasNumberOfChildren;
- (bool)hasReservation;
- (bool)hasReservationDuration;
- (_INPBLocation *)lodgingBusinessLocation;
- (_INPBInteger *)numberOfAdults;
- (_INPBInteger *)numberOfChildren;
- (_INPBReservation *)reservation;
- (_INPBDateTimeRange *)reservationDuration;
- (void)setLodgingBusinessLocation:(_INPBLocation *)arg1;
- (void)setNumberOfAdults:(_INPBInteger *)arg1;
- (void)setNumberOfChildren:(_INPBInteger *)arg1;
- (void)setReservation:(_INPBReservation *)arg1;
- (void)setReservationDuration:(_INPBDateTimeRange *)arg1;

@end
