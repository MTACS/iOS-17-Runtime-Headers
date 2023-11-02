
@interface CKDPRequestOperationHeaderSupplementalZoneInfo : PBCodable <NSCopying> {
    NSData * _syncContinuationToken;
    CKDPRecordZoneIdentifier * _zoneIdentifier;
}

@property (nonatomic, readonly) bool hasSyncContinuationToken;
@property (nonatomic, readonly) bool hasZoneIdentifier;
@property (nonatomic, retain) NSData *syncContinuationToken;
@property (nonatomic, retain) CKDPRecordZoneIdentifier *zoneIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSyncContinuationToken;
- (bool)hasZoneIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setSyncContinuationToken:(id)arg1;
- (void)setZoneIdentifier:(id)arg1;
- (id)syncContinuationToken;
- (void)writeTo:(id)arg1;
- (id)zoneIdentifier;

@end
