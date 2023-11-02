
@protocol _INPBReservationWrapper <NSObject>

@required

- (_INPBBoatReservation *)boatReservation;
- (_INPBBusReservation *)busReservation;
- (_INPBFlightReservation *)flightReservation;
- (bool)hasBoatReservation;
- (bool)hasBusReservation;
- (bool)hasFlightReservation;
- (bool)hasLodgingReservation;
- (bool)hasRentalCarReservation;
- (bool)hasRestaurantReservation;
- (bool)hasTicketedEventReservation;
- (bool)hasTrainReservation;
- (_INPBLodgingReservation *)lodgingReservation;
- (_INPBRentalCarReservation *)rentalCarReservation;
- (_INPBRestaurantReservation *)restaurantReservation;
- (void)setBoatReservation:(_INPBBoatReservation *)arg1;
- (void)setBusReservation:(_INPBBusReservation *)arg1;
- (void)setFlightReservation:(_INPBFlightReservation *)arg1;
- (void)setLodgingReservation:(_INPBLodgingReservation *)arg1;
- (void)setRentalCarReservation:(_INPBRentalCarReservation *)arg1;
- (void)setRestaurantReservation:(_INPBRestaurantReservation *)arg1;
- (void)setTicketedEventReservation:(_INPBTicketedEventReservation *)arg1;
- (void)setTrainReservation:(_INPBTrainReservation *)arg1;
- (_INPBTicketedEventReservation *)ticketedEventReservation;
- (_INPBTrainReservation *)trainReservation;

@end
