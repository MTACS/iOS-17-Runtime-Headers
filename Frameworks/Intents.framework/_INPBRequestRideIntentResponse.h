
@interface _INPBRequestRideIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBRequestRideIntentResponse> {
    struct { }  _has;
    _INPBRideStatus * _rideStatus;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasRideStatus;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBRideStatus *rideStatus;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasRideStatus;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)rideStatus;
- (void)setRideStatus:(id)arg1;
- (void)writeTo:(id)arg1;

@end
