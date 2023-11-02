
@interface IDSServerBagInProcessContentProvider : NSObject <IDSServerBagContentProvider> {
    IDSServerBagCacheLoader * _cacheLoader;
    IDSServerBagConfig * _config;
    id /* block */  _contentsUpdatedBlock;
    IDSServerBagRawContents * _loadedRawContents;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    IDSServerBagNetworkLoader * _networkLoader;
    NSMutableDictionary * _overrideValues;
    NSObject<OS_dispatch_queue> * _queue;
    IDSServerBagValidator * _validator;
}

@property (nonatomic, retain) IDSServerBagCacheLoader *cacheLoader;
@property (nonatomic, retain) IDSServerBagConfig *config;
@property (nonatomic, copy) id /* block */ contentsUpdatedBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isLoading;
@property (nonatomic, readonly) bool isServerAvailable;
@property (nonatomic, retain) IDSServerBagRawContents *loadedRawContents;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, retain) IDSServerBagNetworkLoader *networkLoader;
@property (nonatomic, retain) NSMutableDictionary *overrideValues;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) IDSServerBagValidator *validator;

- (void).cxx_destruct;
- (id)cacheLoader;
- (id)clearOverrideValues;
- (id)config;
- (id /* block */)contentsUpdatedBlock;
- (id)currentLoadedContentsWithError:(id*)arg1;
- (id)description;
- (id)initWithConfig:(id)arg1 queue:(id)arg2;
- (id)initWithConfig:(id)arg1 queue:(id)arg2 validator:(id)arg3 networkLoader:(id)arg4 cacheLoader:(id)arg5;
- (bool)isLoading;
- (bool)isServerAvailable;
- (id)loadOverrideValuesIfPresent;
- (id)loadedRawContents;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)networkLoader;
- (id)overrideValues;
- (id)queue;
- (void)setCacheLoader:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)setContentsUpdatedBlock:(id /* block */)arg1;
- (void)setLoadedRawContents:(id)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setNetworkLoader:(id)arg1;
- (void)setOverrideValues:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setValidator:(id)arg1;
- (id)updateContentsIfPossibleShouldForce:(bool)arg1;
- (id)validator;
- (id)writeOverrideValues:(id)arg1;

@end
