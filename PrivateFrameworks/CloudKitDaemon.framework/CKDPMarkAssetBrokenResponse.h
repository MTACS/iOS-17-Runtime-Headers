
@interface CKDPMarkAssetBrokenResponse : PBCodable <NSCopying> {
    CKDPRecordIdentifier * _missingAssetStatusRecord;
}

@property (nonatomic, readonly) bool hasMissingAssetStatusRecord;
@property (nonatomic, retain) CKDPRecordIdentifier *missingAssetStatusRecord;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMissingAssetStatusRecord;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)missingAssetStatusRecord;
- (bool)readFrom:(id)arg1;
- (void)setMissingAssetStatusRecord:(id)arg1;
- (void)writeTo:(id)arg1;

@end
