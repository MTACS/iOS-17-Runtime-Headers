
@interface WCRBloomFilter : NSObject {
    WCRAppleAllowList * _appleAllowList;
    WCRAutoAssetClient * _autoAsset;
    _TtC22WebContentRestrictions15BloomFilterShim * _bloomFilter;
    NSString * _localPath;
    NSObject<OS_dispatch_queue> * _reloadAssetQueue;
    bool  _useCipherML;
}

@property (retain) WCRAppleAllowList *appleAllowList;
@property (nonatomic, retain) WCRAutoAssetClient *autoAsset;
@property (retain) _TtC22WebContentRestrictions15BloomFilterShim *bloomFilter;
@property (nonatomic, retain) NSString *localPath;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *reloadAssetQueue;
@property bool useCipherML;

+ (id)_matchingStringsForDomain:(id)arg1;
+ (id)_matchingStringsForURL:(id)arg1;
+ (id)_nameOfNewestFile:(id)arg1;
+ (bool)_shouldBlock:(id)arg1 withBloomFilter:(id)arg2 useCipherML:(bool)arg3;
+ (void)reportAnalyticsBloomFilterBlocked;
+ (void)reportAnalyticsBloomFilterVersion:(id)arg1 withAppleAllowListVersion:(id)arg2;

- (void).cxx_destruct;
- (void)_loadAssets;
- (void)_loadFallbackAssets;
- (void)_loadMobileAssets;
- (id)appleAllowList;
- (id)autoAsset;
- (id)bloomFilter;
- (id)init;
- (id)initFromFile:(id)arg1;
- (id)localPath;
- (id)reloadAssetQueue;
- (void)setAppleAllowList:(id)arg1;
- (void)setAutoAsset:(id)arg1;
- (void)setBloomFilter:(id)arg1;
- (void)setLocalPath:(id)arg1;
- (void)setReloadAssetQueue:(id)arg1;
- (void)setUseCipherML:(bool)arg1;
- (bool)shouldBlock:(id)arg1;
- (bool)useCipherML;

@end
