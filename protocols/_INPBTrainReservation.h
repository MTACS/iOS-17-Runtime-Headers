
@protocol _INPBTrainReservation <NSObject>

@required

- (bool)hasReservation;
- (bool)hasReservedSeat;
- (bool)hasTrainTrip;
- (_INPBReservation *)reservation;
- (_INPBSeat *)reservedSeat;
- (void)setReservation:(_INPBReservation *)arg1;
- (void)setReservedSeat:(_INPBSeat *)arg1;
- (void)setTrainTrip:(_INPBTrainTrip *)arg1;
- (_INPBTrainTrip *)trainTrip;

@end
