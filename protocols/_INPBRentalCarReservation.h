
@protocol _INPBRentalCarReservation <NSObject>

@required

- (_INPBLocationValue *)dropOffLocation;
- (bool)hasDropOffLocation;
- (bool)hasPickupLocation;
- (bool)hasRentalCar;
- (bool)hasRentalDuration;
- (bool)hasReservation;
- (_INPBLocationValue *)pickupLocation;
- (_INPBRentalCar *)rentalCar;
- (_INPBDateTimeRange *)rentalDuration;
- (_INPBReservation *)reservation;
- (void)setDropOffLocation:(_INPBLocationValue *)arg1;
- (void)setPickupLocation:(_INPBLocationValue *)arg1;
- (void)setRentalCar:(_INPBRentalCar *)arg1;
- (void)setRentalDuration:(_INPBDateTimeRange *)arg1;
- (void)setReservation:(_INPBReservation *)arg1;

@end
