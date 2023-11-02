
@interface HDCodableSyncEntityVersionRange : PBCodable <NSCopying> {
    HDCodableEntityIdentifier * _entityIdentifier;
    HDCodableSyncVersionRange * _versionRange;
}

@property (nonatomic, retain) HDCodableEntityIdentifier *entityIdentifier;
@property (nonatomic, readonly) bool hasEntityIdentifier;
@property (nonatomic, readonly) bool hasVersionRange;
@property (nonatomic, retain) HDCodableSyncVersionRange *versionRange;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entityIdentifier;
- (bool)hasEntityIdentifier;
- (bool)hasVersionRange;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEntityIdentifier:(id)arg1;
- (void)setVersionRange:(id)arg1;
- (id)versionRange;
- (void)writeTo:(id)arg1;

@end
