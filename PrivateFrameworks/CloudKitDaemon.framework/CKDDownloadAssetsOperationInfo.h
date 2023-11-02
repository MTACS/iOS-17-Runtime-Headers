
@interface CKDDownloadAssetsOperationInfo : CKDatabaseOperationInfo {
    NSArray * _assetURLInfosToFillOut;
    NSArray * _assetsToDownload;
    NSArray * _assetsToDownloadInMemory;
    NSArray * _packageIndexSets;
    bool  _shouldCloneFileInAssetCache;
    bool  _shouldFetchAssetContentInMemory;
}

@property (nonatomic, retain) NSArray *assetURLInfosToFillOut;
@property (nonatomic, retain) NSArray *assetsToDownload;
@property (nonatomic, retain) NSArray *assetsToDownloadInMemory;
@property (nonatomic, retain) NSArray *packageIndexSets;
@property (nonatomic) bool shouldCloneFileInAssetCache;
@property (nonatomic) bool shouldFetchAssetContentInMemory;

- (void).cxx_destruct;
- (id)assetURLInfosToFillOut;
- (id)assetsToDownload;
- (id)assetsToDownloadInMemory;
- (id)packageIndexSets;
- (void)setAssetURLInfosToFillOut:(id)arg1;
- (void)setAssetsToDownload:(id)arg1;
- (void)setAssetsToDownloadInMemory:(id)arg1;
- (void)setPackageIndexSets:(id)arg1;
- (void)setShouldCloneFileInAssetCache:(bool)arg1;
- (void)setShouldFetchAssetContentInMemory:(bool)arg1;
- (bool)shouldCloneFileInAssetCache;
- (bool)shouldFetchAssetContentInMemory;

@end
