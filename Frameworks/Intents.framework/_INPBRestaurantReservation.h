
@interface _INPBRestaurantReservation : PBCodable <NSCopying, NSSecureCoding, _INPBRestaurantReservation> {
    struct { }  _has;
    _INPBInteger * _partySize;
    _INPBReservation * _reservation;
    _INPBDateTimeRange * _reservationDuration;
    _INPBLocation * _restaurantLocation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasPartySize;
@property (nonatomic, readonly) bool hasReservation;
@property (nonatomic, readonly) bool hasReservationDuration;
@property (nonatomic, readonly) bool hasRestaurantLocation;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBInteger *partySize;
@property (nonatomic, retain) _INPBReservation *reservation;
@property (nonatomic, retain) _INPBDateTimeRange *reservationDuration;
@property (nonatomic, retain) _INPBLocation *restaurantLocation;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasPartySize;
- (bool)hasReservation;
- (bool)hasReservationDuration;
- (bool)hasRestaurantLocation;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)partySize;
- (bool)readFrom:(id)arg1;
- (id)reservation;
- (id)reservationDuration;
- (id)restaurantLocation;
- (void)setPartySize:(id)arg1;
- (void)setReservation:(id)arg1;
- (void)setReservationDuration:(id)arg1;
- (void)setRestaurantLocation:(id)arg1;
- (void)writeTo:(id)arg1;

@end
