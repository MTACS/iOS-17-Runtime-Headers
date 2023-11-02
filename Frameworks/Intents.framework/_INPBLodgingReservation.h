
@interface _INPBLodgingReservation : PBCodable <NSCopying, NSSecureCoding, _INPBLodgingReservation> {
    struct { }  _has;
    _INPBLocation * _lodgingBusinessLocation;
    _INPBInteger * _numberOfAdults;
    _INPBInteger * _numberOfChildren;
    _INPBReservation * _reservation;
    _INPBDateTimeRange * _reservationDuration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasLodgingBusinessLocation;
@property (nonatomic, readonly) bool hasNumberOfAdults;
@property (nonatomic, readonly) bool hasNumberOfChildren;
@property (nonatomic, readonly) bool hasReservation;
@property (nonatomic, readonly) bool hasReservationDuration;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBLocation *lodgingBusinessLocation;
@property (nonatomic, retain) _INPBInteger *numberOfAdults;
@property (nonatomic, retain) _INPBInteger *numberOfChildren;
@property (nonatomic, retain) _INPBReservation *reservation;
@property (nonatomic, retain) _INPBDateTimeRange *reservationDuration;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasLodgingBusinessLocation;
- (bool)hasNumberOfAdults;
- (bool)hasNumberOfChildren;
- (bool)hasReservation;
- (bool)hasReservationDuration;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lodgingBusinessLocation;
- (id)numberOfAdults;
- (id)numberOfChildren;
- (bool)readFrom:(id)arg1;
- (id)reservation;
- (id)reservationDuration;
- (void)setLodgingBusinessLocation:(id)arg1;
- (void)setNumberOfAdults:(id)arg1;
- (void)setNumberOfChildren:(id)arg1;
- (void)setReservation:(id)arg1;
- (void)setReservationDuration:(id)arg1;
- (void)writeTo:(id)arg1;

@end
