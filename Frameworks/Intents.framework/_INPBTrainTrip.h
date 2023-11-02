
@interface _INPBTrainTrip : PBCodable <NSCopying, NSSecureCoding, _INPBTrainTrip> {
    NSString * _arrivalPlatform;
    _INPBLocationValue * _arrivalStationLocation;
    NSString * _departurePlatform;
    _INPBLocationValue * _departureStationLocation;
    struct { }  _has;
    _INPBDateTime * _onlineCheckInTime;
    NSString * _provider;
    NSString * _trainName;
    NSString * _trainNumber;
    _INPBDateTimeRange * _tripDuration;
}

@property (nonatomic, copy) NSString *arrivalPlatform;
@property (nonatomic, retain) _INPBLocationValue *arrivalStationLocation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *departurePlatform;
@property (nonatomic, retain) _INPBLocationValue *departureStationLocation;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasArrivalPlatform;
@property (nonatomic, readonly) bool hasArrivalStationLocation;
@property (nonatomic, readonly) bool hasDeparturePlatform;
@property (nonatomic, readonly) bool hasDepartureStationLocation;
@property (nonatomic, readonly) bool hasOnlineCheckInTime;
@property (nonatomic, readonly) bool hasProvider;
@property (nonatomic, readonly) bool hasTrainName;
@property (nonatomic, readonly) bool hasTrainNumber;
@property (nonatomic, readonly) bool hasTripDuration;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBDateTime *onlineCheckInTime;
@property (nonatomic, copy) NSString *provider;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *trainName;
@property (nonatomic, copy) NSString *trainNumber;
@property (nonatomic, retain) _INPBDateTimeRange *tripDuration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)arrivalPlatform;
- (id)arrivalStationLocation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)departurePlatform;
- (id)departureStationLocation;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasArrivalPlatform;
- (bool)hasArrivalStationLocation;
- (bool)hasDeparturePlatform;
- (bool)hasDepartureStationLocation;
- (bool)hasOnlineCheckInTime;
- (bool)hasProvider;
- (bool)hasTrainName;
- (bool)hasTrainNumber;
- (bool)hasTripDuration;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)onlineCheckInTime;
- (id)provider;
- (bool)readFrom:(id)arg1;
- (void)setArrivalPlatform:(id)arg1;
- (void)setArrivalStationLocation:(id)arg1;
- (void)setDeparturePlatform:(id)arg1;
- (void)setDepartureStationLocation:(id)arg1;
- (void)setOnlineCheckInTime:(id)arg1;
- (void)setProvider:(id)arg1;
- (void)setTrainName:(id)arg1;
- (void)setTrainNumber:(id)arg1;
- (void)setTripDuration:(id)arg1;
- (id)trainName;
- (id)trainNumber;
- (id)tripDuration;
- (void)writeTo:(id)arg1;

@end
