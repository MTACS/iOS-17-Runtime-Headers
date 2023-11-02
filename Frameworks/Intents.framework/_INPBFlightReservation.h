
@interface _INPBFlightReservation : PBCodable <NSCopying, NSSecureCoding, _INPBFlightReservation> {
    _INPBFlight * _flight;
    struct { }  _has;
    _INPBReservation * _reservation;
    _INPBSeat * _reservedSeat;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBFlight *flight;
@property (nonatomic, readonly) bool hasFlight;
@property (nonatomic, readonly) bool hasReservation;
@property (nonatomic, readonly) bool hasReservedSeat;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBReservation *reservation;
@property (nonatomic, retain) _INPBSeat *reservedSeat;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)flight;
- (bool)hasFlight;
- (bool)hasReservation;
- (bool)hasReservedSeat;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)reservation;
- (id)reservedSeat;
- (void)setFlight:(id)arg1;
- (void)setReservation:(id)arg1;
- (void)setReservedSeat:(id)arg1;
- (void)writeTo:(id)arg1;

@end
