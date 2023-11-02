
@protocol _INPBTrainTrip <NSObject>

@required

- (NSString *)arrivalPlatform;
- (_INPBLocationValue *)arrivalStationLocation;
- (NSString *)departurePlatform;
- (_INPBLocationValue *)departureStationLocation;
- (bool)hasArrivalPlatform;
- (bool)hasArrivalStationLocation;
- (bool)hasDeparturePlatform;
- (bool)hasDepartureStationLocation;
- (bool)hasOnlineCheckInTime;
- (bool)hasProvider;
- (bool)hasTrainName;
- (bool)hasTrainNumber;
- (bool)hasTripDuration;
- (_INPBDateTime *)onlineCheckInTime;
- (NSString *)provider;
- (void)setArrivalPlatform:(NSString *)arg1;
- (void)setArrivalStationLocation:(_INPBLocationValue *)arg1;
- (void)setDeparturePlatform:(NSString *)arg1;
- (void)setDepartureStationLocation:(_INPBLocationValue *)arg1;
- (void)setOnlineCheckInTime:(_INPBDateTime *)arg1;
- (void)setProvider:(NSString *)arg1;
- (void)setTrainName:(NSString *)arg1;
- (void)setTrainNumber:(NSString *)arg1;
- (void)setTripDuration:(_INPBDateTimeRange *)arg1;
- (NSString *)trainName;
- (NSString *)trainNumber;
- (_INPBDateTimeRange *)tripDuration;

@end
