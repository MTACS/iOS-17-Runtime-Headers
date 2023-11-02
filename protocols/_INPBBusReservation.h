
@protocol _INPBBusReservation <NSObject>

@required

- (_INPBBusTrip *)busTrip;
- (bool)hasBusTrip;
- (bool)hasReservation;
- (bool)hasReservedSeat;
- (_INPBReservation *)reservation;
- (_INPBSeat *)reservedSeat;
- (void)setBusTrip:(_INPBBusTrip *)arg1;
- (void)setReservation:(_INPBReservation *)arg1;
- (void)setReservedSeat:(_INPBSeat *)arg1;

@end
