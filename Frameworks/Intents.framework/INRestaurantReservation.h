
@interface INRestaurantReservation : INReservation <NSCopying, NSSecureCoding> {
    NSNumber * _partySize;
    INDateComponentsRange * _reservationDuration;
    CLPlacemark * _restaurantLocation;
}

@property (nonatomic, readonly, copy) NSNumber *partySize;
@property (nonatomic, readonly, copy) INDateComponentsRange *reservationDuration;
@property (nonatomic, readonly, copy) CLPlacemark *restaurantLocation;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_duration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 URL:(id)arg7 reservationDuration:(id)arg8 partySize:(id)arg9 restaurantLocation:(id)arg10;
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 reservationDuration:(id)arg7 partySize:(id)arg8 restaurantLocation:(id)arg9;
- (bool)isEqual:(id)arg1;
- (id)partySize;
- (id)reservationDuration;
- (id)restaurantLocation;

// Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals

+ (id)fromSchema:(id)arg1;
+ (id)partySizeFromReservationSchema:(id)arg1;
+ (id)schemaFromRestaurantReservation:(id)arg1;

- (id)schema;

@end
