
@interface EFLazyCache : NSObject <NSCacheDelegate> {
    <EFLazyCacheDelegate> * _delegate;
    struct { 
        unsigned int delegateRespondsToLazyCacheWillEvictObject : 1; 
    }  _flags;
    NSRecursiveLock * _lock;
    NSCache * _storage;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EFLazyCacheDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_exchangeOriginalObject:(id)arg1 forKey:(id)arg2 withObject:(id)arg3;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (id)cachedObjectForKey:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithCountLimit:(unsigned long long)arg1;
- (id)objectForKey:(id)arg1 generator:(id /* block */)arg2;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)storedObjectForKey:(id)arg1;
- (long long)waiterCountForKey:(id)arg1;

@end
