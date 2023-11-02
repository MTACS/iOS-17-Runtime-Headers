
@protocol _INPBFlight <NSObject>

@required

- (_INPBAirline *)airline;
- (_INPBAirportGate *)arrivalAirportGate;
- (_INPBDateTimeRange *)boardingTime;
- (_INPBAirportGate *)departureAirportGate;
- (_INPBDateTimeRange *)flightDuration;
- (NSString *)flightNumber;
- (bool)hasAirline;
- (bool)hasArrivalAirportGate;
- (bool)hasBoardingTime;
- (bool)hasDepartureAirportGate;
- (bool)hasFlightDuration;
- (bool)hasFlightNumber;
- (void)setAirline:(_INPBAirline *)arg1;
- (void)setArrivalAirportGate:(_INPBAirportGate *)arg1;
- (void)setBoardingTime:(_INPBDateTimeRange *)arg1;
- (void)setDepartureAirportGate:(_INPBAirportGate *)arg1;
- (void)setFlightDuration:(_INPBDateTimeRange *)arg1;
- (void)setFlightNumber:(NSString *)arg1;

@end
