
@interface _INPBTrainReservation : PBCodable <NSCopying, NSSecureCoding, _INPBTrainReservation> {
    struct { }  _has;
    _INPBReservation * _reservation;
    _INPBSeat * _reservedSeat;
    _INPBTrainTrip * _trainTrip;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasReservation;
@property (nonatomic, readonly) bool hasReservedSeat;
@property (nonatomic, readonly) bool hasTrainTrip;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBReservation *reservation;
@property (nonatomic, retain) _INPBSeat *reservedSeat;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBTrainTrip *trainTrip;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasReservation;
- (bool)hasReservedSeat;
- (bool)hasTrainTrip;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)reservation;
- (id)reservedSeat;
- (void)setReservation:(id)arg1;
- (void)setReservedSeat:(id)arg1;
- (void)setTrainTrip:(id)arg1;
- (id)trainTrip;
- (void)writeTo:(id)arg1;

@end
