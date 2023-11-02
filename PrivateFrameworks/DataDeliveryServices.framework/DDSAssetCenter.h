
@interface DDSAssetCenter : NSObject <DDSAssetObservingDelegate, DDSManagingDelegate, DDSTrialManagerDelegate> {
    <DDSAssetObserving> * _assetObserver;
    id /* block */  _createXPCInterface;
    NSMutableSet * _delegates;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _managerInterfaceByAssetType;
    <DDSAssetProviding> * _provider;
    NSObject<OS_dispatch_queue> * _queue;
    <DDSTrialManager> * _trialManager;
}

@property (nonatomic, readonly) <DDSAssetObserving> *assetObserver;
@property (readonly, copy) id /* block */ createXPCInterface;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSSet *delegates;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSMutableDictionary *managerInterfaceByAssetType;
@property (readonly, copy) NSSet *managerInterfaces;
@property (nonatomic, readonly) <DDSAssetProviding> *provider;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <DDSTrialManager> *trialManager;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addAssertionForAssetsWithQuery:(id)arg1 policy:(id)arg2 assertionID:(id)arg3 clientID:(id)arg4;
- (id)allContentItemsMatchingQuery:(id)arg1 error:(id*)arg2;
- (id)assertionIDsForClientID:(id)arg1;
- (id)assertionIDsForClientID:(id)arg1 assetType:(id)arg2;
- (id)assetObserver;
- (id)assetsForQuery:(id)arg1 error:(id*)arg2;
- (id)contentItemsFromAssets:(id)arg1 matchingFilter:(id)arg2;
- (id /* block */)createXPCInterface;
- (id)delegates;
- (void)fetchAssetUpdateStatusForQuery:(id)arg1 callback:(id /* block */)arg2;
- (void)fetchTrialAssetForQuery:(id)arg1 callback:(id /* block */)arg2;
- (id)init;
- (id)initWithQueue:(id)arg1 provider:(id)arg2 trialManager:(id)arg3 createXPCInterface:(id /* block */)arg4;
- (id)managerInterfaceByAssetType;
- (id)managerInterfaceForAssetType:(id)arg1;
- (id)managerInterfaces;
- (id)provider;
- (id)queue;
- (void)registerDelegate:(id)arg1;
- (void)removeAssertionWithIdentifier:(id)arg1;
- (void)removeAssertionWithIdentifier:(id)arg1 assetType:(id)arg2;
- (void)serverDidUpdateAssetsWithType:(id)arg1;
- (void)setAssetTypesForDelegates:(id)arg1;
- (void)setCompatabilityVersion:(long long)arg1 forAssetType:(id)arg2;
- (void)setUpTrialForQuery:(id)arg1;
- (void)setXPCServiceName:(id)arg1 forAssetType:(id)arg2;
- (void)start;
- (void)trialDidReceiveAsset:(id)arg1 forQuery:(id)arg2;
- (void)trialDidStopForQuery:(id)arg1;
- (id)trialManager;
- (void)triggerDump;
- (void)triggerUpdate;
- (void)unregisterDelegate:(id)arg1;
- (void)updateAssetForQuery:(id)arg1 callback:(id /* block */)arg2;

@end
