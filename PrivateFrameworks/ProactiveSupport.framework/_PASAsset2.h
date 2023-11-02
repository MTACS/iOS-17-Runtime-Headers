
@interface _PASAsset2 : NSObject {
    NSString * _assetTypeIdentifier;
    unsigned long long  _compatibilityVersion;
    NSString * _defaultBundlePathBackup;
    int  _installNotificationToken;
    _PASLock * _lock;
    NSObject<OS_os_log> * _logHandle;
    int  _metadataNotificationToken;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSDictionary * _requiredMobileAssetProperties;
    _PASNotificationTracker * _updateNotificationTracker;
}

@property (nonatomic, readonly) NSString *assetType;
@property (nonatomic, readonly) unsigned long long assetVersion;
@property (nonatomic, readonly) unsigned long long bestAssetVersionObserved;
@property (nonatomic, readonly) NSString *bundlePath;
@property (nonatomic, readonly) unsigned long long compatibilityVersion;

- (void).cxx_destruct;
- (id)_assetDescription;
- (id)_defaultBundleFilesystemPathsForAssetDataRelativePaths:(id)arg1 guardedData:(id)arg2 assetVersion:(unsigned long long*)arg3;
- (id)_initWithAssetTypeIdentifier:(id)arg1 defaultBundlePath:(id)arg2 compatibilityVersion:(unsigned long long)arg3 matchingKeysAndValues:(id)arg4 notificationQueue:(id)arg5 logHandle:(id)arg6 enableAssetUpdates:(bool)arg7 purgeObsoleteInstalledAssets:(bool)arg8;
- (void)_issueUpdateNotificationsWithCallback:(id /* block */)arg1;
- (bool)_loadDefaultBundleVersionWithGuardedData:(id)arg1;
- (id)_maFilesystemPathsForAssetDataRelativePaths:(id)arg1 guardedData:(id)arg2 isMissingData:(bool*)arg3 assetVersion:(unsigned long long*)arg4;
- (void)_purgeObsoleteInstalledAssetsFromCandidates:(id)arg1 guardedData:(id)arg2;
- (void)_updateAssetMetadata;
- (void)addOverridePath:(id)arg1 forResourceWithRelativePath:(id)arg2;
- (id)assetType;
- (unsigned long long)assetVersion;
- (unsigned long long)bestAssetVersionObserved;
- (id)bundlePath;
- (void)callAssetUpdateHandlers;
- (void)clearOverrides;
- (unsigned long long)compatibilityVersion;
- (void)dealloc;
- (bool)deregisterUpdateHandlerAsyncWithToken:(id)arg1;
- (bool)deregisterUpdateHandlerWithToken:(id)arg1;
- (void)downloadMetadataWithCompletion:(id /* block */)arg1;
- (id)filesystemPathForAssetDataRelativePath:(id)arg1;
- (id)filesystemPathForAssetDataRelativePath:(id)arg1 assetVersion:(unsigned long long*)arg2;
- (id)filesystemPathsForAssetDataRelativePaths:(id)arg1;
- (id)filesystemPathsForAssetDataRelativePaths:(id)arg1 assetVersion:(unsigned long long*)arg2;
- (id)init;
- (id)initWithAssetTypeDescriptorPath:(id)arg1 defaultBundlePath:(id)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4 logHandle:(id)arg5;
- (id)initWithAssetTypeDescriptorPath:(id)arg1 defaultBundlePath:(id)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4 logHandle:(id)arg5 enableAssetUpdates:(bool)arg6;
- (id)initWithAssetTypeDescriptorPath:(id)arg1 defaultBundlePath:(id)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4 logHandle:(id)arg5 enableAssetUpdates:(bool)arg6 purgeObsoleteInstalledAssets:(bool)arg7;
- (void)invokeWithBundleOverride:(id)arg1 block:(id /* block */)arg2;
- (bool)overrideDefaultBundleWithBundleAtPath:(id)arg1;
- (id)registerUpdateHandler:(id /* block */)arg1;
- (bool)updateAssetMetadataUsingQueryResults:(id)arg1;

@end
