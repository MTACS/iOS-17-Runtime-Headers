
@interface INBusReservation : INReservation <NSCopying, NSSecureCoding> {
    INBusTrip * _busTrip;
    INSeat * _reservedSeat;
}

@property (nonatomic, readonly, copy) INBusTrip *busTrip;
@property (nonatomic, readonly, copy) INSeat *reservedSeat;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_duration;
- (id)busTrip;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 URL:(id)arg7 reservedSeat:(id)arg8 busTrip:(id)arg9;
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 url:(id)arg7 reservedSeat:(id)arg8 busTrip:(id)arg9;
- (bool)isEqual:(id)arg1;
- (id)reservedSeat;

// Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals

+ (id)fromSchema:(id)arg1;
+ (id)schemaFromBusReservation:(id)arg1;

- (id)schema;

@end
