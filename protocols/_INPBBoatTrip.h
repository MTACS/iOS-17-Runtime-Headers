
@protocol _INPBBoatTrip <NSObject>

@required

- (_INPBLocationValue *)arrivalBoatTerminalLocation;
- (NSString *)boatName;
- (NSString *)boatNumber;
- (_INPBLocationValue *)departureBoatTerminalLocation;
- (bool)hasArrivalBoatTerminalLocation;
- (bool)hasBoatName;
- (bool)hasBoatNumber;
- (bool)hasDepartureBoatTerminalLocation;
- (bool)hasProvider;
- (bool)hasTripDuration;
- (NSString *)provider;
- (void)setArrivalBoatTerminalLocation:(_INPBLocationValue *)arg1;
- (void)setBoatName:(NSString *)arg1;
- (void)setBoatNumber:(NSString *)arg1;
- (void)setDepartureBoatTerminalLocation:(_INPBLocationValue *)arg1;
- (void)setProvider:(NSString *)arg1;
- (void)setTripDuration:(_INPBDateTimeRange *)arg1;
- (_INPBDateTimeRange *)tripDuration;

@end
