
@interface _INPBBoatTrip : PBCodable <NSCopying, NSSecureCoding, _INPBBoatTrip> {
    _INPBLocationValue * _arrivalBoatTerminalLocation;
    NSString * _boatName;
    NSString * _boatNumber;
    _INPBLocationValue * _departureBoatTerminalLocation;
    struct { }  _has;
    NSString * _provider;
    _INPBDateTimeRange * _tripDuration;
}

@property (nonatomic, retain) _INPBLocationValue *arrivalBoatTerminalLocation;
@property (nonatomic, copy) NSString *boatName;
@property (nonatomic, copy) NSString *boatNumber;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) _INPBLocationValue *departureBoatTerminalLocation;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasArrivalBoatTerminalLocation;
@property (nonatomic, readonly) bool hasBoatName;
@property (nonatomic, readonly) bool hasBoatNumber;
@property (nonatomic, readonly) bool hasDepartureBoatTerminalLocation;
@property (nonatomic, readonly) bool hasProvider;
@property (nonatomic, readonly) bool hasTripDuration;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *provider;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBDateTimeRange *tripDuration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)arrivalBoatTerminalLocation;
- (id)boatName;
- (id)boatNumber;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)departureBoatTerminalLocation;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasArrivalBoatTerminalLocation;
- (bool)hasBoatName;
- (bool)hasBoatNumber;
- (bool)hasDepartureBoatTerminalLocation;
- (bool)hasProvider;
- (bool)hasTripDuration;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)provider;
- (bool)readFrom:(id)arg1;
- (void)setArrivalBoatTerminalLocation:(id)arg1;
- (void)setBoatName:(id)arg1;
- (void)setBoatNumber:(id)arg1;
- (void)setDepartureBoatTerminalLocation:(id)arg1;
- (void)setProvider:(id)arg1;
- (void)setTripDuration:(id)arg1;
- (id)tripDuration;
- (void)writeTo:(id)arg1;

@end
