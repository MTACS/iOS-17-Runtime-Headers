
@interface HDCodableObjectAssociation : PBCodable <NSCopying> {
    NSData * _associationUuid;
    NSData * _objectUuids;
    HDCodableSyncIdentity * _syncIdentity;
}

@property (nonatomic, retain) NSData *associationUuid;
@property (nonatomic, readonly) bool hasAssociationUuid;
@property (nonatomic, readonly) bool hasObjectUuids;
@property (nonatomic, readonly) bool hasSyncIdentity;
@property (nonatomic, retain) NSData *objectUuids;
@property (nonatomic, retain) HDCodableSyncIdentity *syncIdentity;

- (void).cxx_destruct;
- (id)associationUuid;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decodedAssociationUUID;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAssociationUuid;
- (bool)hasObjectUuids;
- (bool)hasSyncIdentity;
- (unsigned long long)hash;
- (id)initWithAssociationUUID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)objectUuids;
- (bool)readFrom:(id)arg1;
- (void)setAssociationUuid:(id)arg1;
- (void)setObjectUuids:(id)arg1;
- (void)setSyncIdentity:(id)arg1;
- (id)syncIdentity;
- (void)writeTo:(id)arg1;

@end
