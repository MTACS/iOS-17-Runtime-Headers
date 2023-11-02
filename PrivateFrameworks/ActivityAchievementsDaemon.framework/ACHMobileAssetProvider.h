
@interface ACHMobileAssetProvider : NSObject {
    double  _downloadDelayOverride;
    _HKMobileAssetDownloadManager * _mobileAssetDownloadManager;
    NSUserDefaults * _nanoUserDefaults;
    id /* block */  _remoteDownloadCompleteCompletion;
}

@property (nonatomic) double downloadDelayOverride;
@property (nonatomic, retain) _HKMobileAssetDownloadManager *mobileAssetDownloadManager;
@property (nonatomic, retain) NSUserDefaults *nanoUserDefaults;
@property (copy) id /* block */ remoteDownloadCompleteCompletion;

- (void).cxx_destruct;
- (bool)_assetIsInstalled:(id)arg1;
- (id)_assetsGroupedByUniqueNameAndType:(id)arg1;
- (id)_compatibilityVersionQueryParameters;
- (void)_downloadAssets:(id)arg1 withCompletion:(id /* block */)arg2;
- (double)_downloadDelay;
- (void)_downloadRemoteAssets:(id)arg1 installedAssets:(id)arg2;
- (void)_downloadRemoteCatalogAndAssets;
- (void)_fetchLocalAssetsWithCompletion:(id /* block */)arg1;
- (void)_getCurrentAsssetAndOlderAssetsFromAssets:(id)arg1 completion:(id /* block */)arg2;
- (void)_processAssets:(id)arg1 completion:(id /* block */)arg2;
- (void)_removeAssets:(id)arg1;
- (void)availableAssetsWithCompletion:(id /* block */)arg1;
- (double)downloadDelayOverride;
- (void)downloadRemoteCatalog;
- (long long)downloadedAssetDiskUsageInBytes;
- (id)init;
- (id)initWithMobileAssetDownloadManager:(id)arg1;
- (id)mobileAssetDownloadManager;
- (id)nanoUserDefaults;
- (long long)purgeAllDownloadedAssets;
- (id /* block */)remoteDownloadCompleteCompletion;
- (void)setDownloadDelayOverride:(double)arg1;
- (void)setMobileAssetDownloadManager:(id)arg1;
- (void)setNanoUserDefaults:(id)arg1;
- (void)setRemoteDownloadCompleteCompletion:(id /* block */)arg1;

@end
