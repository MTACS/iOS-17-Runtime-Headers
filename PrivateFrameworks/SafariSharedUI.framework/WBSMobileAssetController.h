
@interface WBSMobileAssetController : NSObject <WBSMobileAssetControllerProtocol> {
    NSString * _assetType;
    <WBSMobileAssetControllerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _internalQueue;
    WBSPeriodicActivityScheduler * _scheduler;
    NSString * _updateDateDefaultsKey;
    double  _updateInterval;
}

@property (nonatomic, readonly, copy) NSString *assetType;
@property <WBSMobileAssetControllerDelegate> *delegate;
@property (nonatomic, retain) NSDate *lastUpdateDate;
@property (nonatomic, readonly, copy) NSString *updateDateDefaultsKey;
@property (nonatomic, readonly) double updateInterval;

- (void).cxx_destruct;
- (void)_downloadIfNecessary:(id /* block */)arg1;
- (void)_queryAssets:(id /* block */)arg1;
- (void)_queryMostRecentAsset:(id /* block */)arg1;
- (void)_update;
- (void)_updateCatalog:(id /* block */)arg1;
- (id)assetType;
- (id)delegate;
- (id)initWithMobileAssetType:(id)arg1 updateDateDefaultsKey:(id)arg2 updateInterval:(double)arg3 minimumDelay:(double)arg4;
- (id)initWithMobileAssetType:(id)arg1 updateInterval:(double)arg2 minimumDelay:(double)arg3;
- (id)lastUpdateDate;
- (void)queryURL:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastUpdateDate:(id)arg1;
- (id)updateDateDefaultsKey;
- (double)updateInterval;

@end
