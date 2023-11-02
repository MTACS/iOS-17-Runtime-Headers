
@interface CKDPMergeableValueIdentifier : PBCodable <NSCopying> {
    CKDPIdentifier * _value;
    CKDPRecordZoneIdentifier * _zoneIdentifier;
}

@property (nonatomic, readonly) bool hasValue;
@property (nonatomic, readonly) bool hasZoneIdentifier;
@property (nonatomic, retain) CKDPIdentifier *value;
@property (nonatomic, retain) CKDPRecordZoneIdentifier *zoneIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasValue;
- (bool)hasZoneIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setZoneIdentifier:(id)arg1;
- (id)value;
- (void)writeTo:(id)arg1;
- (id)zoneIdentifier;

@end