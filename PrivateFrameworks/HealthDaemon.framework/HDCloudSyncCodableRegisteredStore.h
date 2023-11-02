
@interface HDCloudSyncCodableRegisteredStore : PBCodable <NSCopying> {
    NSString * _ownerIdentifier;
    NSString * _storeIdentifier;
    HDCodableSyncIdentity * _syncIdentity;
}

@property (nonatomic, readonly) bool hasOwnerIdentifier;
@property (nonatomic, readonly) bool hasStoreIdentifier;
@property (nonatomic, readonly) bool hasSyncIdentity;
@property (nonatomic, retain) NSString *ownerIdentifier;
@property (nonatomic, retain) NSString *storeIdentifier;
@property (nonatomic, retain) HDCodableSyncIdentity *syncIdentity;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOwnerIdentifier;
- (bool)hasStoreIdentifier;
- (bool)hasSyncIdentity;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)ownerIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setOwnerIdentifier:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (void)setSyncIdentity:(id)arg1;
- (id)storeIdentifier;
- (id)syncIdentity;
- (void)writeTo:(id)arg1;

@end
