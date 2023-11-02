
@interface _INPBSaveParkingLocationIntent : PBCodable <NSCopying, NSSecureCoding, _INPBSaveParkingLocationIntent> {
    struct { }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBLocation * _parkingLocation;
    _INPBString * _parkingNote;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasParkingLocation;
@property (nonatomic, readonly) bool hasParkingNote;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBLocation *parkingLocation;
@property (nonatomic, retain) _INPBString *parkingNote;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIntentMetadata;
- (bool)hasParkingLocation;
- (bool)hasParkingNote;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (id)parkingLocation;
- (id)parkingNote;
- (bool)readFrom:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setParkingLocation:(id)arg1;
- (void)setParkingNote:(id)arg1;
- (void)writeTo:(id)arg1;

@end
