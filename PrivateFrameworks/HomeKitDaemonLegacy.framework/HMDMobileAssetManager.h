
@interface HMDMobileAssetManager : NSObject {
    <HMDMobileAssetManagerDelegate> * _delegate;
    bool  _indexDownloaded;
    NSBackgroundActivityScheduler * _scheduler;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) <HMDMobileAssetManagerDelegate> *delegate;
@property bool indexDownloaded;
@property (nonatomic, readonly) NSBackgroundActivityScheduler *scheduler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_downloadCatalogAndUpdateMetadataIfAble;
- (void)_downloadNewAsset:(id)arg1 availableVersion:(unsigned long long)arg2 newVersion:(unsigned long long)arg3;
- (void)_handleMetadataAssetUpdated;
- (void)_installAvailableAsset:(id)arg1 version:(unsigned long long)arg2;
- (void)_updateMetadata;
- (id)delegate;
- (void)handleMetadataAssetUpdated;
- (bool)indexDownloaded;
- (id)init;
- (void)purgeAllInstalledAssets;
- (id)scheduler;
- (void)setDelegate:(id)arg1;
- (void)setIndexDownloaded:(bool)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end
