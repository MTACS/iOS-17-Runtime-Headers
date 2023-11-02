
@interface INLodgingReservation : INReservation <NSCopying, NSSecureCoding> {
    CLPlacemark * _lodgingBusinessLocation;
    NSNumber * _numberOfAdults;
    NSNumber * _numberOfChildren;
    INDateComponentsRange * _reservationDuration;
}

@property (nonatomic, readonly, copy) CLPlacemark *lodgingBusinessLocation;
@property (nonatomic, readonly, copy) NSNumber *numberOfAdults;
@property (nonatomic, readonly, copy) NSNumber *numberOfChildren;
@property (nonatomic, readonly, copy) INDateComponentsRange *reservationDuration;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_duration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 URL:(id)arg7 lodgingBusinessLocation:(id)arg8 reservationDuration:(id)arg9 numberOfAdults:(id)arg10 numberOfChildren:(id)arg11;
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 lodgingBusinessLocation:(id)arg7 reservationDuration:(id)arg8 numberOfAdults:(id)arg9 numberOfChildren:(id)arg10;
- (bool)isEqual:(id)arg1;
- (id)lodgingBusinessLocation;
- (id)numberOfAdults;
- (id)numberOfChildren;
- (id)reservationDuration;

// Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals

+ (id)fromSchema:(id)arg1;
+ (id)reservationDurationFromReservationSchema:(id)arg1;
+ (id)schemaFromLodgingReservation:(id)arg1;

- (id)schema;

@end
