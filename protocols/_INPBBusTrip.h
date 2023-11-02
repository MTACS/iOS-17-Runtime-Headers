
@protocol _INPBBusTrip <NSObject>

@required

- (_INPBLocationValue *)arrivalBusStopLocation;
- (NSString *)arrivalPlatform;
- (NSString *)busName;
- (NSString *)busNumber;
- (_INPBLocationValue *)departureBusStopLocation;
- (NSString *)departurePlatform;
- (bool)hasArrivalBusStopLocation;
- (bool)hasArrivalPlatform;
- (bool)hasBusName;
- (bool)hasBusNumber;
- (bool)hasDepartureBusStopLocation;
- (bool)hasDeparturePlatform;
- (bool)hasProvider;
- (bool)hasTripDuration;
- (NSString *)provider;
- (void)setArrivalBusStopLocation:(_INPBLocationValue *)arg1;
- (void)setArrivalPlatform:(NSString *)arg1;
- (void)setBusName:(NSString *)arg1;
- (void)setBusNumber:(NSString *)arg1;
- (void)setDepartureBusStopLocation:(_INPBLocationValue *)arg1;
- (void)setDeparturePlatform:(NSString *)arg1;
- (void)setProvider:(NSString *)arg1;
- (void)setTripDuration:(_INPBDateTimeRange *)arg1;
- (_INPBDateTimeRange *)tripDuration;

@end
