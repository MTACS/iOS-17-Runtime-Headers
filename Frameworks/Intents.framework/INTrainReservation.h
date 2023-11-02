
@interface INTrainReservation : INReservation <NSCopying, NSSecureCoding> {
    INSeat * _reservedSeat;
    INTrainTrip * _trainTrip;
}

@property (nonatomic, readonly, copy) INSeat *reservedSeat;
@property (nonatomic, readonly, copy) INTrainTrip *trainTrip;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_duration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 URL:(id)arg7 reservedSeat:(id)arg8 trainTrip:(id)arg9;
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 reservedSeat:(id)arg7 trainTrip:(id)arg8;
- (bool)isEqual:(id)arg1;
- (id)reservedSeat;
- (id)trainTrip;

// Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals

+ (id)fromSchema:(id)arg1;
+ (id)schemaFromTrainReservation:(id)arg1;

- (id)schema;

@end
