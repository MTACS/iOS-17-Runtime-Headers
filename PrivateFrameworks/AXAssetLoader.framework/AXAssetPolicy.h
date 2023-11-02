
@interface AXAssetPolicy : NSObject {
    NSNumber * _compatibilityVersion;
    bool  _daemonShouldDownloadInBackgroundIfNeeded;
    double  _downloadResourceTimeout;
    double  _downloadRetryInterval;
    NSString * _launchActivityIdentifier;
    NSNumber * _maxSupportedFormatVersion;
    NSNumber * _minSupportedFormatVersion;
    double  _refreshRetryInterval;
    double  _updateCatalogTimeout;
    double  _updateInterval;
}

@property (nonatomic, readonly) NSString *assetType;
@property (nonatomic, readonly) NSString *assetTypeSuffix;
@property (nonatomic, retain) NSNumber *compatibilityVersion;
@property (nonatomic) bool daemonShouldDownloadInBackgroundIfNeeded;
@property (nonatomic) double downloadResourceTimeout;
@property (nonatomic) double downloadRetryInterval;
@property (nonatomic, retain) NSString *launchActivityIdentifier;
@property (nonatomic, retain) NSNumber *maxSupportedFormatVersion;
@property (nonatomic, retain) NSNumber *minSupportedFormatVersion;
@property (nonatomic) double refreshRetryInterval;
@property (nonatomic, readonly) bool shouldCopyLocally;
@property (nonatomic, readonly) bool shouldUseProductionServerForInternalBuilds;
@property (nonatomic) double updateCatalogTimeout;
@property (nonatomic) double updateInterval;

+ (id)policy;

- (void).cxx_destruct;
- (bool)_isAssetSupportedBasedOnCompatibilityVersion:(id)arg1;
- (bool)_isAssetSupportedBasedOnMinMaxFormatVersion:(id)arg1;
- (id)assetType;
- (id)assetTypeSuffix;
- (id)assetsToDownloadFromRefreshedAssets:(id)arg1;
- (id)assetsToPurgeFromInstalledAssets:(id)arg1;
- (id)assetsToPurgeFromInstalledAssets:(id)arg1 withRefreshedAssets:(id)arg2;
- (id)compatibilityVersion;
- (bool)daemonShouldDownloadInBackgroundIfNeeded;
- (id)description;
- (id)downloadOptionsForOperation:(unsigned long long)arg1 userInitiated:(bool)arg2;
- (double)downloadResourceTimeout;
- (double)downloadRetryInterval;
- (unsigned long long)hash;
- (id)init;
- (bool)isAssetContentVersion:(id)arg1 greatherThanInstalledAssets:(id)arg2;
- (bool)isAssetSupported:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)launchActivityIdentifier;
- (id)maxSupportedFormatVersion;
- (id)minSupportedFormatVersion;
- (id)newAssetQuery;
- (double)refreshRetryInterval;
- (void)setCompatibilityVersion:(id)arg1;
- (void)setDaemonShouldDownloadInBackgroundIfNeeded:(bool)arg1;
- (void)setDownloadResourceTimeout:(double)arg1;
- (void)setDownloadRetryInterval:(double)arg1;
- (void)setLaunchActivityIdentifier:(id)arg1;
- (void)setMaxSupportedFormatVersion:(id)arg1;
- (void)setMinSupportedFormatVersion:(id)arg1;
- (void)setRefreshRetryInterval:(double)arg1;
- (void)setUpdateCatalogTimeout:(double)arg1;
- (void)setUpdateInterval:(double)arg1;
- (bool)shouldCopyLocally;
- (bool)shouldDownloadAsset:(id)arg1 withInstalledAssets:(id)arg2;
- (bool)shouldUseProductionServerForInternalBuilds;
- (double)updateCatalogTimeout;
- (double)updateInterval;

@end
