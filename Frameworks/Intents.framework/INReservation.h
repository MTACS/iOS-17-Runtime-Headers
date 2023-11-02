
@interface INReservation : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _URL;
    INDateComponentsRange * __duration;
    NSArray * _actions;
    NSDate * _bookingTime;
    INSpeakableString * _itemReference;
    NSString * _reservationHolderName;
    NSString * _reservationNumber;
    long long  _reservationStatus;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly, copy) INDateComponentsRange *_duration;
@property (nonatomic, readonly, copy) NSArray *actions;
@property (nonatomic, readonly, copy) NSDate *bookingTime;
@property (nonatomic, readonly, copy) INSpeakableString *itemReference;
@property (nonatomic, readonly, copy) NSString *reservationHolderName;
@property (nonatomic, readonly, copy) NSString *reservationNumber;
@property (nonatomic, readonly) long long reservationStatus;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)_dictionaryRepresentation;
- (id)_duration;
- (id)actions;
- (id)bookingTime;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6;
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 URL:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)itemReference;
- (id)reservationHolderName;
- (id)reservationNumber;
- (long long)reservationStatus;
- (id)url;

// Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals

+ (id)bookingTimeFromReservationSchema:(id)arg1;
+ (id)reservationHolderNameFromReservationSchema:(id)arg1;
+ (id)reservationNumberFromReservationSchema:(id)arg1;
+ (long long)reservationStatusFromReservationSchema:(id)arg1;
+ (id)reservationStatusToSchema:(long long)arg1;
+ (id)schemaFromReservation:(id)arg1;
+ (id)urlFromReservationSchema:(id)arg1;

@end
