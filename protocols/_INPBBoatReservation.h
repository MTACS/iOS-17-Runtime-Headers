
@protocol _INPBBoatReservation <NSObject>

@required

- (_INPBBoatTrip *)boatTrip;
- (bool)hasBoatTrip;
- (bool)hasReservation;
- (bool)hasReservedSeat;
- (_INPBReservation *)reservation;
- (_INPBSeat *)reservedSeat;
- (void)setBoatTrip:(_INPBBoatTrip *)arg1;
- (void)setReservation:(_INPBReservation *)arg1;
- (void)setReservedSeat:(_INPBSeat *)arg1;

@end
