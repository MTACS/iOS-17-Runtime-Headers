
@interface _INPBFlight : PBCodable <NSCopying, NSSecureCoding, _INPBFlight> {
    _INPBAirline * _airline;
    _INPBAirportGate * _arrivalAirportGate;
    _INPBDateTimeRange * _boardingTime;
    _INPBAirportGate * _departureAirportGate;
    _INPBDateTimeRange * _flightDuration;
    NSString * _flightNumber;
    struct { }  _has;
}

@property (nonatomic, retain) _INPBAirline *airline;
@property (nonatomic, retain) _INPBAirportGate *arrivalAirportGate;
@property (nonatomic, retain) _INPBDateTimeRange *boardingTime;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) _INPBAirportGate *departureAirportGate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBDateTimeRange *flightDuration;
@property (nonatomic, copy) NSString *flightNumber;
@property (nonatomic, readonly) bool hasAirline;
@property (nonatomic, readonly) bool hasArrivalAirportGate;
@property (nonatomic, readonly) bool hasBoardingTime;
@property (nonatomic, readonly) bool hasDepartureAirportGate;
@property (nonatomic, readonly) bool hasFlightDuration;
@property (nonatomic, readonly) bool hasFlightNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)airline;
- (id)arrivalAirportGate;
- (id)boardingTime;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)departureAirportGate;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)flightDuration;
- (id)flightNumber;
- (bool)hasAirline;
- (bool)hasArrivalAirportGate;
- (bool)hasBoardingTime;
- (bool)hasDepartureAirportGate;
- (bool)hasFlightDuration;
- (bool)hasFlightNumber;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAirline:(id)arg1;
- (void)setArrivalAirportGate:(id)arg1;
- (void)setBoardingTime:(id)arg1;
- (void)setDepartureAirportGate:(id)arg1;
- (void)setFlightDuration:(id)arg1;
- (void)setFlightNumber:(id)arg1;
- (void)writeTo:(id)arg1;

@end
