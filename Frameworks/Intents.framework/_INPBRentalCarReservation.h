
@interface _INPBRentalCarReservation : PBCodable <NSCopying, NSSecureCoding, _INPBRentalCarReservation> {
    _INPBLocationValue * _dropOffLocation;
    struct { }  _has;
    _INPBLocationValue * _pickupLocation;
    _INPBRentalCar * _rentalCar;
    _INPBDateTimeRange * _rentalDuration;
    _INPBReservation * _reservation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBLocationValue *dropOffLocation;
@property (nonatomic, readonly) bool hasDropOffLocation;
@property (nonatomic, readonly) bool hasPickupLocation;
@property (nonatomic, readonly) bool hasRentalCar;
@property (nonatomic, readonly) bool hasRentalDuration;
@property (nonatomic, readonly) bool hasReservation;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBLocationValue *pickupLocation;
@property (nonatomic, retain) _INPBRentalCar *rentalCar;
@property (nonatomic, retain) _INPBDateTimeRange *rentalDuration;
@property (nonatomic, retain) _INPBReservation *reservation;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)dropOffLocation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasDropOffLocation;
- (bool)hasPickupLocation;
- (bool)hasRentalCar;
- (bool)hasRentalDuration;
- (bool)hasReservation;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)pickupLocation;
- (bool)readFrom:(id)arg1;
- (id)rentalCar;
- (id)rentalDuration;
- (id)reservation;
- (void)setDropOffLocation:(id)arg1;
- (void)setPickupLocation:(id)arg1;
- (void)setRentalCar:(id)arg1;
- (void)setRentalDuration:(id)arg1;
- (void)setReservation:(id)arg1;
- (void)writeTo:(id)arg1;

@end
