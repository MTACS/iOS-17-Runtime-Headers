
@interface CKDUploadAssetsOperationInfo : CKDatabaseOperationInfo {
    NSDictionary * _assetUUIDToExpectedProperties;
    NSArray * _assetsToUpload;
    NSDictionary * _packageUUIDToExpectedProperties;
    bool  _shouldCloneFileInAssetCache;
    bool  _temporary;
}

@property (nonatomic, retain) NSDictionary *assetUUIDToExpectedProperties;
@property (nonatomic, retain) NSArray *assetsToUpload;
@property (nonatomic, retain) NSDictionary *packageUUIDToExpectedProperties;
@property (nonatomic) bool shouldCloneFileInAssetCache;
@property (nonatomic) bool temporary;

- (void).cxx_destruct;
- (id)assetUUIDToExpectedProperties;
- (id)assetsToUpload;
- (id)packageUUIDToExpectedProperties;
- (void)setAssetUUIDToExpectedProperties:(id)arg1;
- (void)setAssetsToUpload:(id)arg1;
- (void)setPackageUUIDToExpectedProperties:(id)arg1;
- (void)setShouldCloneFileInAssetCache:(bool)arg1;
- (void)setTemporary:(bool)arg1;
- (bool)shouldCloneFileInAssetCache;
- (bool)temporary;

@end
