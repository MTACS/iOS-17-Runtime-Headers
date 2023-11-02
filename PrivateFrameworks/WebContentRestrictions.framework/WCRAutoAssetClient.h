
@interface WCRAutoAssetClient : NSObject {
    id /* block */  _assetDidChangeHandler;
    MAAutoAssetSelector * _currentAssetSelector;
    NSObject<OS_dispatch_queue> * _notifyQueue;
}

@property (nonatomic, copy) id /* block */ assetDidChangeHandler;
@property (nonatomic, retain) MAAutoAssetSelector *currentAssetSelector;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *notifyQueue;

- (void).cxx_destruct;
- (bool)_createInterestInAssetType:(id)arg1 withAssetSpecifier:(id)arg2 withError:(id*)arg3;
- (void)_endLocalAssetLocks;
- (void)_handleAssetChangedNotification;
- (id)_lockLocalAsset;
- (void)_registerForNotificationsForAssetType:(id)arg1 andAssetSpecifier:(id)arg2;
- (void)_removeInterestInAssetType:(id)arg1 withAssetSpecifier:(id)arg2 withError:(id*)arg3;
- (id /* block */)assetDidChangeHandler;
- (id)currentAssetSelector;
- (id)initWithError:(id*)arg1;
- (id)notifyQueue;
- (void)registerForAssetChangedNotificationsWithBlock:(id /* block */)arg1;
- (void)setAssetDidChangeHandler:(id /* block */)arg1;
- (void)setCurrentAssetSelector:(id)arg1;
- (void)setNotifyQueue:(id)arg1;
- (id)startUsingLocalAsset;
- (void)stopUsingLocalAsset;

@end
