
@interface _LTDAssetService : NSObject <_LTDAssetServiceProtocol>

+ (id)_assetsIdentifiersForPairNames:(id)arg1 error:(id*)arg2;
+ (id)_assetsSortedByVersion:(id)arg1;
+ (long long)_catalogRefreshInterval;
+ (void)_installConfigAsset:(id)arg1 completion:(id /* block */)arg2;
+ (bool)_isCatalogRefreshWaitExpired;
+ (id)_libraryDirectory;
+ (id)_pairNamesForLocales:(id)arg1;
+ (void)_refreshHotfixWithCompletion:(id /* block */)arg1;
+ (id)_ttsAssetsForLocales:(id)arg1;
+ (id)assetDirectoryURL;
+ (unsigned long long)assetTypeForAssetIdentifier:(id)arg1;
+ (void)assetsForLocales:(id)arg1 completion:(id /* block */)arg2;
+ (id)assetsForLocales:(id)arg1 error:(id*)arg2;
+ (void)bootstrapWithCompletion:(id /* block */)arg1;
+ (void)catalogAssetsWithCompletion:(id /* block */)arg1;
+ (id)catalogAssetsWithError:(id*)arg1;
+ (id)configAssetIfAvailableWithError:(id*)arg1;
+ (void)configAssetWithCompletion:(id /* block */)arg1;
+ (id)defaultCatalogTypeWithError:(id*)arg1;
+ (void)downloadAsset:(id)arg1 options:(unsigned long long)arg2 progress:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (void)downloadAssets:(id)arg1 options:(unsigned long long)arg2 progress:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (void)downloadCatalogForAssetType:(id)arg1 completion:(id /* block */)arg2;
+ (id)filterAssets:(id)arg1 forLocales:(id)arg2 error:(id*)arg3;
+ (id)filterConfigAssetFromAssets:(id)arg1;
+ (void)initialize;
+ (void)installedAssetsWithCompletion:(id /* block */)arg1;
+ (id)installedAssetsWithError:(id*)arg1;
+ (id)matchingASRAssetForLocale:(id)arg1 error:(id*)arg2;
+ (id)matchingASRAssetInAssets:(id)arg1 forLocale:(id)arg2;
+ (bool)needsCatalogRefresh;
+ (void)purgeAsset:(id)arg1 completion:(id /* block */)arg2;
+ (void)queryAssetType:(id)arg1 filter:(unsigned long long)arg2 completion:(id /* block */)arg3;
+ (id)queryAssetType:(id)arg1 filter:(unsigned long long)arg2 error:(id*)arg3;
+ (void)refreshCatalogIfNeededWithCompletion:(id /* block */)arg1;
+ (Class)serviceProvider;
+ (Class)serviceProviderForAsset:(id)arg1;
+ (Class)serviceProviderForAssetIdentifier:(id)arg1;
+ (Class)serviceProviderForAssetType:(id)arg1;
+ (void)setNeedsCatalogRefresh:(bool)arg1;
+ (void)setServiceProvider:(Class)arg1;

@end
