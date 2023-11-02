
@protocol _INPBRestaurantReservation <NSObject>

@required

- (bool)hasPartySize;
- (bool)hasReservation;
- (bool)hasReservationDuration;
- (bool)hasRestaurantLocation;
- (_INPBInteger *)partySize;
- (_INPBReservation *)reservation;
- (_INPBDateTimeRange *)reservationDuration;
- (_INPBLocation *)restaurantLocation;
- (void)setPartySize:(_INPBInteger *)arg1;
- (void)setReservation:(_INPBReservation *)arg1;
- (void)setReservationDuration:(_INPBDateTimeRange *)arg1;
- (void)setRestaurantLocation:(_INPBLocation *)arg1;

@end
