
@interface _INPBBusTrip : PBCodable <NSCopying, NSSecureCoding, _INPBBusTrip> {
    _INPBLocationValue * _arrivalBusStopLocation;
    NSString * _arrivalPlatform;
    NSString * _busName;
    NSString * _busNumber;
    _INPBLocationValue * _departureBusStopLocation;
    NSString * _departurePlatform;
    struct { }  _has;
    NSString * _provider;
    _INPBDateTimeRange * _tripDuration;
}

@property (nonatomic, retain) _INPBLocationValue *arrivalBusStopLocation;
@property (nonatomic, copy) NSString *arrivalPlatform;
@property (nonatomic, copy) NSString *busName;
@property (nonatomic, copy) NSString *busNumber;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) _INPBLocationValue *departureBusStopLocation;
@property (nonatomic, copy) NSString *departurePlatform;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasArrivalBusStopLocation;
@property (nonatomic, readonly) bool hasArrivalPlatform;
@property (nonatomic, readonly) bool hasBusName;
@property (nonatomic, readonly) bool hasBusNumber;
@property (nonatomic, readonly) bool hasDepartureBusStopLocation;
@property (nonatomic, readonly) bool hasDeparturePlatform;
@property (nonatomic, readonly) bool hasProvider;
@property (nonatomic, readonly) bool hasTripDuration;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *provider;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBDateTimeRange *tripDuration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)arrivalBusStopLocation;
- (id)arrivalPlatform;
- (id)busName;
- (id)busNumber;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)departureBusStopLocation;
- (id)departurePlatform;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasArrivalBusStopLocation;
- (bool)hasArrivalPlatform;
- (bool)hasBusName;
- (bool)hasBusNumber;
- (bool)hasDepartureBusStopLocation;
- (bool)hasDeparturePlatform;
- (bool)hasProvider;
- (bool)hasTripDuration;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)provider;
- (bool)readFrom:(id)arg1;
- (void)setArrivalBusStopLocation:(id)arg1;
- (void)setArrivalPlatform:(id)arg1;
- (void)setBusName:(id)arg1;
- (void)setBusNumber:(id)arg1;
- (void)setDepartureBusStopLocation:(id)arg1;
- (void)setDeparturePlatform:(id)arg1;
- (void)setProvider:(id)arg1;
- (void)setTripDuration:(id)arg1;
- (id)tripDuration;
- (void)writeTo:(id)arg1;

@end
