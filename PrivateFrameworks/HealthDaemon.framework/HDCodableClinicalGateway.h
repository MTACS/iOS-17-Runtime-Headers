
@interface HDCodableClinicalGateway : PBCodable <NSCopying> {
    HDCodableMessageVersion * _messageVersion;
    NSData * _rawContent;
    HDCodableSyncIdentity * _syncIdentity;
}

@property (nonatomic, readonly) bool hasMessageVersion;
@property (nonatomic, readonly) bool hasRawContent;
@property (nonatomic, readonly) bool hasSyncIdentity;
@property (nonatomic, retain) HDCodableMessageVersion *messageVersion;
@property (nonatomic, retain) NSData *rawContent;
@property (nonatomic, retain) HDCodableSyncIdentity *syncIdentity;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMessageVersion;
- (bool)hasRawContent;
- (bool)hasSyncIdentity;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)messageVersion;
- (id)rawContent;
- (bool)readFrom:(id)arg1;
- (void)setMessageVersion:(id)arg1;
- (void)setRawContent:(id)arg1;
- (void)setSyncIdentity:(id)arg1;
- (id)syncIdentity;
- (void)writeTo:(id)arg1;

@end
