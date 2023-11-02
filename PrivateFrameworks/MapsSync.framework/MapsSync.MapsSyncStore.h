
@interface MapsSync.MapsSyncStore : NSObject {
    void _cacheContainer;
    void _isLoaded;
    void _isLoading;
    void _loadError;
    void _loadHandlers;
    void _loadLock;
    void _primaryContainer;
    void _queue;
}

@property (nonatomic, readonly) bool isLoaded;

+ (id)withAPIv1StoreAndReturnError:(id*)arg1;
+ (void)withAPIv1StoreWithBlock:(id /* block */)arg1;
+ (void)withDefaultStoreWithBlock:(id /* block */)arg1;
+ (void)withStoreFor:(id)arg1 block:(id /* block */)arg2;
+ (id)withStoreFor:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (void)callLoadHandlers;
- (bool)deleteWithObjects:(id)arg1 error:(id*)arg2;
- (id)init;
- (bool)isLoaded;
- (void)load;
- (void)notifyOnLoadWithHandler:(id /* block */)arg1;
- (bool)saveWithObjects:(id)arg1 error:(id*)arg2;
- (void)withManagedObjects:(id)arg1 block:(id /* block */)arg2;

@end
