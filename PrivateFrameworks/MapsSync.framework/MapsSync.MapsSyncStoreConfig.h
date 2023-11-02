
@interface MapsSync.MapsSyncStoreConfig : NSObject {
    void _cacheContainer;
    void _primaryContainer;
    void _store;
    void _storeLock;
}

@property (nonatomic, retain) _TtC8MapsSync13MapsSyncStore *store;

+ (id)createInMemoryStore;
+ (id)defaultStoreConfig;
+ (id)getDefault;

- (void).cxx_destruct;
- (id)init;
- (void)setStore:(id)arg1;
- (id)store;

@end
