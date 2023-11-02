
@interface AXAssetMetadataStore : NSObject {
    NSUserDefaults * _defaults;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, retain) NSUserDefaults *defaults;

+ (id)store;

- (void).cxx_destruct;
- (id)_init;
- (void)_mutateAssertionsForAssetType:(id)arg1 assertions:(id)arg2 mutationBlock:(id /* block */)arg3;
- (void)_mutateAssetAssertions:(id /* block */)arg1;
- (void)_mutateAssetEvents:(id)arg1 block:(id /* block */)arg2;
- (void)_mutateAssetEventsForAssetType:(id)arg1 events:(id)arg2 mutationBlock:(id /* block */)arg3;
- (void)_mutateInstalledAssets:(id /* block */)arg1;
- (void)_mutateInstalledAssetsForAssetType:(id)arg1 installedAssets:(id)arg2 mutationBlock:(id /* block */)arg3;
- (void)_mutateOverrides:(id /* block */)arg1;
- (void)_mutateOverridesForAssetType:(id)arg1 overrides:(id)arg2 mutationBlock:(id /* block */)arg3;
- (void)_mutateUserInfo:(id /* block */)arg1;
- (void)_mutateUserInfoForAssetType:(id)arg1 userInfo:(id)arg2 mutationBlock:(id /* block */)arg3;
- (void)_performWithLock:(id /* block */)arg1;
- (id)defaults;
- (void)discardAllAssertionsOfType:(id)arg1;
- (void)discardAllAssertionsOfType:(id)arg1 heldByClient:(id)arg2;
- (void)discardAssertion:(id)arg1;
- (id)heldAssertionsForAssetType:(id)arg1;
- (id)overrideMaximumCompatibilityVersionForAssetType:(id)arg1;
- (id)overrideMinimumCompatibilityVersionForAssetType:(id)arg1;
- (void)recordAssetRefreshEventForAssetType:(id)arg1;
- (void)recordAssetsToBeDownloaded:(id)arg1 forAssetType:(id)arg2;
- (void)recordAssetsToBePurged:(id)arg1 forAssetType:(id)arg2;
- (void)recordInstalledAssets:(id)arg1 forAssetType:(id)arg2;
- (void)recordLastAssetAccess:(id)arg1;
- (void)requestAssertion:(id)arg1;
- (void)setDefaults:(id)arg1;
- (void)setOverrideMaximumCompatibilityVersion:(id)arg1 forAssetType:(id)arg2;
- (void)setOverrideMinimumCompatibilityVersion:(id)arg1 forAssetType:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2 forAssetType:(id)arg3;
- (id)valueForKey:(id)arg1 forAssetType:(id)arg2;

@end
