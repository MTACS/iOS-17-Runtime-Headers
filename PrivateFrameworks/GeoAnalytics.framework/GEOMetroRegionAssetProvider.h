
@interface GEOMetroRegionAssetProvider : NSObject {
    unsigned int  _catalogLoadRetryMultiplier;
    NSCache * _fileURLCache;
}

+ (void)_downloadAsset:(id)arg1 completion:(id /* block */)arg2;
+ (void)_downloadCatalogIfNeededThen:(id /* block */)arg1;
+ (id)_maQueryForAssetCode:(id)arg1;
+ (void)_unavailableAssetForAssetCode:(id)arg1 completion:(id /* block */)arg2;
+ (void)_updateCatalogWithResult:(id /* block */)arg1;
+ (void)preloadAssetForCountryCode:(id)arg1 preloadQueue:(id)arg2 completion:(id /* block */)arg3;
+ (id)sharedProvider;

- (void).cxx_destruct;
- (id)_acceptListForCountryCode:(id)arg1 name:(id)arg2;
- (id)_bestAvailableAssetForAssetCode:(id)arg1;
- (void)_catalogDownloadFinishedWithResult:(long long)arg1;
- (void)_updateCatalogAfterDelay:(double)arg1;
- (id)homeCountryCodeAcceptList;
- (id)homeMetroAcceptListForCountryCode:(id)arg1;
- (id)init;
- (id)urlForInstalledCountryCode:(id)arg1;

@end
