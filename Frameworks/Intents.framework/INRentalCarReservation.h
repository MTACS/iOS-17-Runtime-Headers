
@interface INRentalCarReservation : INReservation <NSCopying, NSSecureCoding> {
    CLPlacemark * _dropOffLocation;
    CLPlacemark * _pickupLocation;
    INRentalCar * _rentalCar;
    INDateComponentsRange * _rentalDuration;
}

@property (nonatomic, readonly, copy) CLPlacemark *dropOffLocation;
@property (nonatomic, readonly, copy) CLPlacemark *pickupLocation;
@property (nonatomic, readonly, copy) INRentalCar *rentalCar;
@property (nonatomic, readonly, copy) INDateComponentsRange *rentalDuration;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_duration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dropOffLocation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 URL:(id)arg7 rentalCar:(id)arg8 rentalDuration:(id)arg9 pickupLocation:(id)arg10 dropOffLocation:(id)arg11;
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 rentalCar:(id)arg7 rentalDuration:(id)arg8 pickupLocation:(id)arg9 dropOffLocation:(id)arg10;
- (bool)isEqual:(id)arg1;
- (id)pickupLocation;
- (id)rentalCar;
- (id)rentalDuration;

// Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals

+ (id)fromSchema:(id)arg1;
+ (id)schemaFromRentalCarReservation:(id)arg1;

- (id)schema;

@end
