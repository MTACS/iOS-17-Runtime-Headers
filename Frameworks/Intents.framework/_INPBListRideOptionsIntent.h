
@interface _INPBListRideOptionsIntent : PBCodable <NSCopying, NSSecureCoding, _INPBListRideOptionsIntent> {
    _INPBLocation * _dropOffLocation;
    struct { }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBLocation * _pickupLocation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBLocation *dropOffLocation;
@property (nonatomic, readonly) bool hasDropOffLocation;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasPickupLocation;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBLocation *pickupLocation;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)dropOffLocation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasDropOffLocation;
- (bool)hasIntentMetadata;
- (bool)hasPickupLocation;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (id)pickupLocation;
- (bool)readFrom:(id)arg1;
- (void)setDropOffLocation:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setPickupLocation:(id)arg1;
- (void)writeTo:(id)arg1;

@end
