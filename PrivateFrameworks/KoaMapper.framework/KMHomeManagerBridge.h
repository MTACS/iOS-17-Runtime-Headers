
@interface KMHomeManagerBridge : NSObject <HMHomeManagerDelegate, KMProviderDatasetBridge> {
    HMHomeManager * _homeManager;
    KVItemMapper * _itemMapper;
    NSObject<OS_dispatch_semaphore> * _setupSema;
    double  _setupTimeout;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHomeManager *homeManager;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *setupSema;
@property (nonatomic, readonly) double setupTimeout;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)enumerateItemsWithError:(id*)arg1 usingBlock:(id /* block */)arg2;
- (id)homeManager;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (id)init;
- (id)initWithHomeManager:(id)arg1 setupTimeout:(double)arg2;
- (long long)itemType;
- (id)originAppId;
- (id)setupSema;
- (double)setupTimeout;

@end
