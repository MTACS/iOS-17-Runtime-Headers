
@interface MobileAssetUpdater : NSObject {
    NSMutableArray * _alternateAssetTypes;
    MAAsset * _asset;
    bool  _assetDownloaded;
    NSURL * _assetLocation;
    NSURL * _assetLocationOverride;
    NSString * _assetType;
    bool  _downloadOnCellularAllowed;
    NSLock * _lock;
    id /* block */  _logger;
    bool  _overrideApplied;
    NSString * _overrideFile;
    bool  _participateInSeed;
    NSString * _purgeOverrideFile;
    MAAssetQuery * _query;
    bool  _requireAssetMetadata;
}

@property (nonatomic, copy) NSMutableArray *alternateAssetTypes;
@property (retain) MAAsset *asset;
@property (readonly) bool assetAvailable;
@property (readonly) bool assetDownloaded;
@property (retain) NSURL *assetLocation;
@property (retain) NSURL *assetLocationOverride;
@property (copy) NSString *assetType;
@property bool downloadOnCellularAllowed;
@property (copy) id /* block */ logger;
@property (readonly) bool overrideApplied;
@property (retain) NSString *overrideFile;
@property (retain) NSString *purgeOverrideFile;
@property (retain) MAAssetQuery *query;
@property bool requireAssetMetadata;

- (id)alternateAssetTypes;
- (id)asset;
- (bool)assetAvailable;
- (bool)assetDownloaded;
- (id)assetLocation;
- (id)assetLocationOverride;
- (id)assetType;
- (id)assetWithMaxVersion:(id)arg1;
- (void)dealloc;
- (void)doneWithAsset;
- (id)downloadAsset:(id /* block */)arg1;
- (void)downloadComplete:(long long)arg1 completion:(id /* block */)arg2;
- (bool)downloadOnCellularAllowed;
- (bool)filterAsset:(id)arg1 osBuild:(id)arg2 osVersion:(id)arg3;
- (id)filterFoundAssets:(id)arg1;
- (id)findAsset:(bool)arg1 completion:(id /* block */)arg2;
- (id)initWithAssetType:(id)arg1;
- (bool)isDeploymentAllowed:(id)arg1;
- (void)log:(int)arg1 format:(id)arg2;
- (id /* block */)logger;
- (bool)overrideApplied;
- (id)overrideFile;
- (id)overrideQueryPredicateFromDict:(id)arg1;
- (void)purgeAsset;
- (id)purgeOverrideFile;
- (id)query;
- (void)queryComplete:(id)arg1 remote:(bool)arg2 status:(long long)arg3 completion:(id /* block */)arg4;
- (id)queryPredicate;
- (bool)requireAssetMetadata;
- (void)setAlternateAssetTypes:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)setAssetLocation:(id)arg1;
- (void)setAssetLocationOverride:(id)arg1;
- (void)setAssetType:(id)arg1;
- (void)setDownloadOnCellularAllowed:(bool)arg1;
- (void)setLogger:(id /* block */)arg1;
- (void)setOverrideFile:(id)arg1;
- (void)setPurgeOverrideFile:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setRequireAssetMetadata:(bool)arg1;
- (id)validateAsset;
- (id)validateAssetAttributes:(id)arg1;

@end
