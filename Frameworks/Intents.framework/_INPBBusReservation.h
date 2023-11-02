
@interface _INPBBusReservation : PBCodable <NSCopying, NSSecureCoding, _INPBBusReservation> {
    _INPBBusTrip * _busTrip;
    struct { }  _has;
    _INPBReservation * _reservation;
    _INPBSeat * _reservedSeat;
}

@property (nonatomic, retain) _INPBBusTrip *busTrip;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasBusTrip;
@property (nonatomic, readonly) bool hasReservation;
@property (nonatomic, readonly) bool hasReservedSeat;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBReservation *reservation;
@property (nonatomic, retain) _INPBSeat *reservedSeat;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)busTrip;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasBusTrip;
- (bool)hasReservation;
- (bool)hasReservedSeat;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)reservation;
- (id)reservedSeat;
- (void)setBusTrip:(id)arg1;
- (void)setReservation:(id)arg1;
- (void)setReservedSeat:(id)arg1;
- (void)writeTo:(id)arg1;

@end
