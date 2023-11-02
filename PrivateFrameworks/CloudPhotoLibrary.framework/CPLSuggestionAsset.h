
@interface CPLSuggestionAsset : PBCodable <NSCopying> {
    NSData * _actionData;
    CPLSuggestionAssetFlag * _assetFlag;
    NSString * _assetIdentifier;
    NSString * _masterFingerprint;
}

@property (nonatomic, retain) NSData *actionData;
@property (nonatomic, retain) CPLSuggestionAssetFlag *assetFlag;
@property (nonatomic, retain) NSString *assetIdentifier;
@property (nonatomic, readonly) bool hasActionData;
@property (nonatomic, readonly) bool hasAssetFlag;
@property (nonatomic, readonly) bool hasAssetIdentifier;
@property (nonatomic, readonly) bool hasMasterFingerprint;
@property (nonatomic, retain) NSString *masterFingerprint;

- (void).cxx_destruct;
- (id)actionData;
- (id)assetFlag;
- (id)assetIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActionData;
- (bool)hasAssetFlag;
- (bool)hasAssetIdentifier;
- (bool)hasMasterFingerprint;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)masterFingerprint;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActionData:(id)arg1;
- (void)setAssetFlag:(id)arg1;
- (void)setAssetIdentifier:(id)arg1;
- (void)setMasterFingerprint:(id)arg1;
- (void)writeTo:(id)arg1;

@end
