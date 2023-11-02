
@interface CHMobileAssetBridge : NSObject

- (void)autoAssetAvailableForUseForAssetType:(id)arg1 assetSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (void)autoAssetEndAllLocksForAssetType:(id)arg1 assetSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (void)autoAssetEndLockContentForAssetType:(id)arg1 assetSpecifier:(id)arg2 endLockReason:(id)arg3 completion:(id /* block */)arg4;
- (void)autoAssetInterestInContentForAssetType:(id)arg1 assetSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (void)autoAssetLockContentForAssetType:(id)arg1 assetSpecifier:(id)arg2 lockReason:(id)arg3 completion:(id /* block */)arg4;

@end
