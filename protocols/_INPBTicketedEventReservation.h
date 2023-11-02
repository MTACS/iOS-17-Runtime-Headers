
@protocol _INPBTicketedEventReservation <NSObject>

@required

- (_INPBTicketedEvent *)event;
- (bool)hasEvent;
- (bool)hasReservation;
- (bool)hasReservedSeat;
- (_INPBReservation *)reservation;
- (_INPBSeat *)reservedSeat;
- (void)setEvent:(_INPBTicketedEvent *)arg1;
- (void)setReservation:(_INPBReservation *)arg1;
- (void)setReservedSeat:(_INPBSeat *)arg1;

@end
