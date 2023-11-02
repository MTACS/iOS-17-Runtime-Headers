
@interface PBBridgeAssetsManager : NSObject {
    id /* block */  _allAssetsDownloadCompletion;
    id /* block */  _assetDownloadCompletion;
    NSObject<OS_dispatch_queue> * _concurrentQueue;
    NSDictionary * _deviceAttributes;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, copy) id /* block */ allAssetsDownloadCompletion;
@property (nonatomic, copy) id /* block */ assetDownloadCompletion;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (nonatomic, retain) NSDictionary *deviceAttributes;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;

- (void).cxx_destruct;
- (id)_assetQueries:(id)arg1 atlas:(id)arg2;
- (id)_assetQueryForBridgeLaunchSplash;
- (id)_assetQueryForDeviceAttributes:(unsigned long long)arg1 deviceAttributes:(id)arg2;
- (id)_assetQueryForFamilySetupImage;
- (id)_assetQueryForZeroDayForcedUpdate;
- (void)_beginAssetDownloads:(id)arg1;
- (void)_beginPullingAssetsForDeviceAttributes:(id)arg1 completion:(id /* block */)arg2;
- (void)_downloadAtlasAsset:(id)arg1;
- (void)_linkDownloadedAsset:(id)arg1;
- (void)_queryForImageAssets:(id)arg1;
- (void)_runAssetQuery:(id)arg1 completion:(id /* block */)arg2;
- (void)_runNextQuery:(id)arg1;
- (void)_runQueries:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_startAssetDownload:(id)arg1;
- (void)_startAtlasDownloadAndQueryOnSuccess:(id)arg1;
- (id /* block */)allAssetsDownloadCompletion;
- (id /* block */)assetDownloadCompletion;
- (void)beginPullingAssetsForAdvertisingName:(id)arg1 completion:(id /* block */)arg2;
- (void)beginPullingAssetsForDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)beginPullingAssetsForDeviceMaterial:(unsigned long long)arg1 size:(unsigned long long)arg2 branding:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (id)concurrentQueue;
- (id)deviceAttributes;
- (unsigned long long)hardwareGenerationForProductType:(id)arg1;
- (id)init;
- (void)purgeAllAssetsLocalOnly:(bool)arg1;
- (id)serialQueue;
- (void)setAllAssetsDownloadCompletion:(id /* block */)arg1;
- (void)setAssetDownloadCompletion:(id /* block */)arg1;
- (void)setConcurrentQueue:(id)arg1;
- (void)setDeviceAttributes:(id)arg1;
- (void)setSerialQueue:(id)arg1;

@end
