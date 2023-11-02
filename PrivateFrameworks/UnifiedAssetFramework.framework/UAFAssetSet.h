
@interface UAFAssetSet : NSObject {
    NSDictionary * _assetNameToAutoAsset;
    NSDictionary * _assetNameToTrial;
    NSObject<OS_dispatch_queue> * _assetQueue;
    NSDictionary * _assets;
    NSString * _autoAssetAtomicInstance;
    MAAutoAssetSet * _autoAssetSet;
    NSString * _autoAssetSetID;
    UAFAssetSetConfiguration * _cfg;
    TRIClient * _client;
    bool  _factoryAssetsPresent;
    NSString * _name;
    bool  _rootsPresent;
    NSDictionary * _usages;
    NSUUID * _uuid;
}

@property (readonly, copy) NSString *assetSetId;
@property (readonly, copy) NSString *name;
@property (nonatomic, readonly) NSDictionary *usages;

+ (id)getAutoAssetClientName;
+ (id)getAutoAssetLockReason:(id)arg1;
+ (id)getEntitledTrialAssets:(id)arg1 usages:(id)arg2;
+ (bool)getLockedAutoAssets:(id)arg1 usages:(id)arg2 autoAssetSet:(id*)arg3 atomicInstance:(id*)arg4 assetNameToAutoAsset:(id*)arg5;
+ (id)getMAAssetSetID:(id)arg1;
+ (id)getTrialPurgeabilityLevel:(unsigned long long)arg1;
+ (bool)isAssetValid:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id)_createAssetFromTrialInfo:(id)arg1 assetName:(id)arg2 fallback:(bool)arg3 validPathOnly:(bool)arg4;
- (id)_getAssetQueue;
- (bool)_shouldUseTrial:(id)arg1 orFactory:(id)arg2;
- (id)_targetingLanguageUsageToMetadata:(id)arg1;
- (id)assetSetId;
- (id)createAssetFromAutoAsset:(id)arg1 assetName:(id)arg2;
- (id)createAssetFromMAAsset:(id)arg1 assetName:(id)arg2;
- (id)createAssetFromPreinstalledWithTrialInfo:(id)arg1 assetName:(id)arg2 fromRoot:(bool)arg3 withUsages:(id)arg4;
- (id)createAssetFromTrialInfo:(id)arg1 assetName:(id)arg2;
- (id)createAssets;
- (void)dealloc;
- (id)getAsset:(id)arg1;
- (id)getAsset:(id)arg1 withUsage:(id)arg2;
- (id)getAssets;
- (id)getAutoAssets;
- (id)getMAAutoAssetDownloadErrorsSync;
- (id)getTrialAssets;
- (id)getTrialPreinstalledMAAssetsForRoots:(bool)arg1;
- (id)initWithAssetSet:(id)arg1 usages:(id)arg2;
- (id)initWithAssetSet:(id)arg1 usages:(id)arg2 configurationDirURLs:(id)arg3;
- (id)name;
- (id)namespacesOfAssetNames:(id)arg1 error:(id*)arg2;
- (id)overlayRoots:(id)arg1;
- (void)refresh;
- (bool)setAssetsPromoted:(id)arg1 error:(id*)arg2;
- (bool)setAssetsPromoted:(id)arg1 purgabilityLevel:(unsigned long long)arg2 error:(id*)arg3;
- (bool)setAssetsProvisional:(id)arg1 error:(id*)arg2;
- (bool)setAssetsProvisional:(id)arg1 purgabilityLevel:(unsigned long long)arg2 error:(id*)arg3;
- (id)usages;

@end
