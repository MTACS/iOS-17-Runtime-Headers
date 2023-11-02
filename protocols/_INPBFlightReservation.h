
@protocol _INPBFlightReservation <NSObject>

@required

- (_INPBFlight *)flight;
- (bool)hasFlight;
- (bool)hasReservation;
- (bool)hasReservedSeat;
- (_INPBReservation *)reservation;
- (_INPBSeat *)reservedSeat;
- (void)setFlight:(_INPBFlight *)arg1;
- (void)setReservation:(_INPBReservation *)arg1;
- (void)setReservedSeat:(_INPBSeat *)arg1;

@end
