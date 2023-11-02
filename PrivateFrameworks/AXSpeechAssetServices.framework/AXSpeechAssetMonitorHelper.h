
@interface AXSpeechAssetMonitorHelper : NSObject {
    AXAssetsService * _assetService;
    double  _lastVoiceAssetUpdateTime;
    NSObject<OS_dispatch_queue> * _longOperationQueue;
    NSObject<OS_dispatch_queue> * _migrationQueue;
    struct __SCNetworkReachability { } * _reachability;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *longOperationQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *migrationQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_assetUpdaterClient;
- (void)_monitorForNetworkChanges;
- (void)_monitorSpeechAssetChanges;
- (bool)_platformSupportsMobileAssetVoices;
- (void)_registerForReachabilityNotifications;
- (void)_unregisterForReachabilityNotifications;
- (void)_updateSpeechSourceIdentifiersIfNeeded;
- (void)clearCurrentVoicesAndRefreshTTSVoiceListOnNextBoot;
- (void)handeDeviceFirstUnlock;
- (id)init;
- (id)longOperationQueue;
- (id)migrationQueue;
- (void)setLongOperationQueue:(id)arg1;
- (void)setMigrationQueue:(id)arg1;
- (id)speechAssetUpdaterClient;
- (void)startMigrationOnDeviceUnlock;

@end
