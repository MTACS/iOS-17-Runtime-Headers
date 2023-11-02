
@interface INBoatReservation : INReservation <NSCopying, NSSecureCoding> {
    INBoatTrip * _boatTrip;
    INSeat * _reservedSeat;
}

@property (nonatomic, readonly, copy) INBoatTrip *boatTrip;
@property (nonatomic, readonly, copy) INSeat *reservedSeat;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_duration;
- (id)boatTrip;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 URL:(id)arg7 reservedSeat:(id)arg8 boatTrip:(id)arg9;
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 url:(id)arg7 reservedSeat:(id)arg8 boatTrip:(id)arg9;
- (bool)isEqual:(id)arg1;
- (id)reservedSeat;

// Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals

+ (id)fromSchema:(id)arg1;
+ (id)schemaFromBoatReservation:(id)arg1;

- (id)schema;

@end
