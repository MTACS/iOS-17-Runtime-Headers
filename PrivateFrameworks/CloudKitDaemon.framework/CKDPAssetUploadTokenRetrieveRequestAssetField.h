
@interface CKDPAssetUploadTokenRetrieveRequestAssetField : PBCodable <NSCopying> {
    NSMutableArray * _assets;
    CKDPRecordFieldIdentifier * _field;
}

@property (nonatomic, retain) NSMutableArray *assets;
@property (nonatomic, retain) CKDPRecordFieldIdentifier *field;
@property (nonatomic, readonly) bool hasField;

+ (Class)assetsType;

- (void).cxx_destruct;
- (void)addAssets:(id)arg1;
- (id)assets;
- (id)assetsAtIndex:(unsigned long long)arg1;
- (unsigned long long)assetsCount;
- (void)clearAssets;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)field;
- (bool)hasField;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssets:(id)arg1;
- (void)setField:(id)arg1;
- (void)writeTo:(id)arg1;

@end
