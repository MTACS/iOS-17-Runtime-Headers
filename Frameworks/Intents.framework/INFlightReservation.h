
@interface INFlightReservation : INReservation <NSCopying, NSSecureCoding> {
    INFlight * _flight;
    INSeat * _reservedSeat;
}

@property (nonatomic, readonly, copy) INFlight *flight;
@property (nonatomic, readonly, copy) INSeat *reservedSeat;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_duration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)flight;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 URL:(id)arg7 reservedSeat:(id)arg8 flight:(id)arg9;
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 reservedSeat:(id)arg7 flight:(id)arg8;
- (bool)isEqual:(id)arg1;
- (id)reservedSeat;

// Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals

+ (id)airlineFromFlightSchema:(id)arg1;
+ (id)airportFromAirportSchema:(id)arg1;
+ (id)arrivalAirporGateFromFlightSchema:(id)arg1;
+ (id)departureAirportGateFromFlightSchema:(id)arg1;
+ (id)flightFromReservationSchema:(id)arg1;
+ (id)flightNumberFromFlightSchema:(id)arg1;
+ (id)fromSchema:(id)arg1;
+ (id)schemaFromAirline:(id)arg1;
+ (id)schemaFromAirport:(id)arg1;
+ (id)schemaFromFlight:(id)arg1;
+ (id)schemaFromFlightReservation:(id)arg1;

- (id)schema;

@end
