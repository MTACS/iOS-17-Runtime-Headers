
@interface MPConcreteMediaEntityPropertiesCache : NSObject {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    <MPMediaLibraryDataProvider> * _dataProvider;
    Class  _dataProviderEntityClass;
    long long  _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _properties;
    NSMutableDictionary * _valuePersistenceBlocks;
}

@property (nonatomic, readonly) <MPMediaLibraryDataProvider> *dataProvider;
@property (nonatomic, readonly) Class dataProviderEntityClass;
@property (nonatomic, readonly) long long identifier;

- (void).cxx_destruct;
- (void)_cacheValues:(id)arg1 persistValueInBackgroundBlock:(id /* block */)arg2;
- (void)cachePropertyValues:(id)arg1 forProperties:(id)arg2 persistValueInBackgroundBlock:(id /* block */)arg3;
- (void)cacheValue:(id)arg1 forProperty:(id)arg2 persistValueInBackgroundBlock:(id /* block */)arg3;
- (id)dataProvider;
- (Class)dataProviderEntityClass;
- (void)dealloc;
- (void)delete;
- (long long)identifier;
- (id)initWithLibraryDataProvider:(id)arg1 dataProviderEntityClass:(Class)arg2 identifier:(long long)arg3;
- (void)invalidate;
- (id)valueForProperty:(id)arg1 isCached:(bool*)arg2;

@end
