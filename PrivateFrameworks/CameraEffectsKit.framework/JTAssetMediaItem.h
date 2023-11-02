
@interface JTAssetMediaItem : JTLocalAssetMediaItem {
    NSString * _adjustedFingerprint;
    PHAsset * _asset;
    NSString * _assetIdentifier;
    NSURL * _assetLocalURL;
    NSString * _masterFingerprint;
}

@property (nonatomic, copy) NSString *adjustedFingerprint;
@property (nonatomic, retain) PHAsset *asset;
@property (nonatomic, copy) NSString *assetIdentifier;
@property (nonatomic, retain) NSURL *assetLocalURL;
@property (nonatomic, copy) NSString *masterFingerprint;

- (void).cxx_destruct;
- (id)adjustedFingerprint;
- (id)asset;
- (id)assetIdentifier;
- (id)assetLocalURL;
- (void)checkIfAssetIsMissing;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)fetchAssetForce:(bool)arg1;
- (unsigned long long)hash;
- (id)info;
- (id)init;
- (id)initWithAssetIdentifier:(id)arg1;
- (id)initWithInfo:(id)arg1 delegate:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)masterFingerprint;
- (void)reloadAsset;
- (void)setAdjustedFingerprint:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)setAssetIdentifier:(id)arg1;
- (void)setAssetLocalURL:(id)arg1;
- (void)setMasterFingerprint:(id)arg1;

@end
