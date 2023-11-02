
@interface MapsSync.MapsSyncDataSession : NSObject {
    void _backgroundReadContext;
    void _containerQueue;
    void _contextFetchLock;
    void _dataContainer;
    void _hasLoadedStores;
    void _historyAnalyzer;
    void _loadHandlers;
    void _loadLock;
    void _localOnly;
    void _lock;
    void _pendingBackgroundReadContextFetches;
    void _pendingReadContextFetches;
    void _pendingWriteContextFetches;
    void _persistentContainer;
    void _readContext;
    void _storeLoadInterval;
    void _writeContext;
}

@property (nonatomic, retain) NSPersistentContainer *persistentContainer;
@property (nonatomic, readonly) NSString *typeString;

+ (id)defaultLocalOnlySession;
+ (id)defaultSession;
+ (void)disableNotifications;
+ (void)enableNotifications;
+ (bool)isInMemoryOnly;
+ (void)reset;
+ (void)resetWithCompletion:(id /* block */)arg1;
+ (void)resumeNotifications;
+ (void)setUseInMemoryOnly:(bool)arg1;
+ (bool)shouldMoveStoreAsideWithError:(id)arg1;
+ (bool)shouldRetryStoreLoadAfterErrorWithError:(id)arg1;
+ (void)suppressNotifications;
+ (bool)useInMemoryOnly;
+ (void)whenReadyWithCompletion:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)checkStoreLoadedWithCompletion:(id /* block */)arg1;
- (void)contextDidSaveWithNotification:(id)arg1;
- (void)deleteAll;
- (void)getBackgroundReadContextWithCompletion:(id /* block */)arg1;
- (void)getReadContextWithCompletion:(id /* block */)arg1;
- (void)getWriteContextWithCompletion:(id /* block */)arg1;
- (bool)hasLoadedStore;
- (id)init;
- (id)initWithPersisted:(bool)arg1 deviceLocal:(bool)arg2;
- (void)loadCoreDataStoresFor:(id)arg1 completion:(id /* block */)arg2;
- (void)loadStoresWithCompletion:(id /* block */)arg1;
- (id)persistentContainer;
- (void)remoteChangeWithNotification:(id)arg1;
- (void)resetInMemoryStore;
- (void)resetInMemoryStoreWithCompletion:(id /* block */)arg1;
- (void)setPersistentContainer:(id)arg1;
- (id)typeString;
- (id)unsafeGetBackgroundReadContextAndReturnError:(id*)arg1;
- (id)unsafeGetReadContextAndReturnError:(id*)arg1;
- (id)unsafeGetWriteContextAndReturnError:(id*)arg1;
- (void)whenReadyWithCompletion:(id /* block */)arg1;

@end
