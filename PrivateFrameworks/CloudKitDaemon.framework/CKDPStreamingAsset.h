
@interface CKDPStreamingAsset : PBCodable <NSCopying> {
    CKDPStreamingAssetIdentifier * _assetId;
    CKDPStreamingAssetRetrieveAssetResponse * _retrieveAssetResponse;
    CKDPStreamingAssetSaveAssetRequest * _saveAssetRequest;
    CKDPStreamingAssetSaveAssetResponse * _saveAssetResponse;
}

@property (nonatomic, retain) CKDPStreamingAssetIdentifier *assetId;
@property (nonatomic, readonly) bool hasAssetId;
@property (nonatomic, readonly) bool hasRetrieveAssetResponse;
@property (nonatomic, readonly) bool hasSaveAssetRequest;
@property (nonatomic, readonly) bool hasSaveAssetResponse;
@property (nonatomic, retain) CKDPStreamingAssetRetrieveAssetResponse *retrieveAssetResponse;
@property (nonatomic, retain) CKDPStreamingAssetSaveAssetRequest *saveAssetRequest;
@property (nonatomic, retain) CKDPStreamingAssetSaveAssetResponse *saveAssetResponse;

- (void).cxx_destruct;
- (id)assetId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAssetId;
- (bool)hasRetrieveAssetResponse;
- (bool)hasSaveAssetRequest;
- (bool)hasSaveAssetResponse;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)retrieveAssetResponse;
- (id)saveAssetRequest;
- (id)saveAssetResponse;
- (void)setAssetId:(id)arg1;
- (void)setRetrieveAssetResponse:(id)arg1;
- (void)setSaveAssetRequest:(id)arg1;
- (void)setSaveAssetResponse:(id)arg1;
- (void)writeTo:(id)arg1;

@end
