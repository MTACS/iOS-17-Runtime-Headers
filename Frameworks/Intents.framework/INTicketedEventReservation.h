
@interface INTicketedEventReservation : INReservation <NSCopying, NSSecureCoding> {
    INTicketedEvent * _event;
    INSeat * _reservedSeat;
}

@property (nonatomic, readonly, copy) INTicketedEvent *event;
@property (nonatomic, readonly, copy) INSeat *reservedSeat;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_duration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)event;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 URL:(id)arg7 reservedSeat:(id)arg8 event:(id)arg9;
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 reservedSeat:(id)arg7 event:(id)arg8;
- (bool)isEqual:(id)arg1;
- (id)reservedSeat;

// Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals

+ (id)fromSchema:(id)arg1;
+ (id)schemaFromGenericTicketedEventReservation:(id)arg1;
+ (id)schemaFromMovieTicketedEventReservation:(id)arg1;
+ (id)schemaFromTicketedEventReservation:(id)arg1;

- (id)schema;

@end
