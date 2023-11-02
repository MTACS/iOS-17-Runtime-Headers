
@interface ISIconCache : NSObject {
    NSURL * _cacheURL;
    unsigned long long  _sandboxToken;
    ISStore * _store;
    ISStoreIndex * _storeIndex;
}

@property (readonly) NSString *cachePath;
@property (readonly) NSURL *cacheURL;
@property (readonly) unsigned long long sandboxToken;
@property (readonly) ISStore *store;
@property (readonly) ISStoreIndex *storeIndex;

+ (id)defaultIconCache;

- (void).cxx_destruct;
- (id)cachePath;
- (id)cacheURL;
- (void)clear;
- (void)dealloc;
- (id)description;
- (bool)findStoreUnitForIcon:(id)arg1 descriptor:(id)arg2 UUID:(id*)arg3 validationToken:(id*)arg4;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithURL:(id)arg1 storeIndex:(id)arg2 sandboxExtensionToken:(unsigned long long)arg3;
- (unsigned long long)sandboxToken;
- (id)store;
- (id)storeIndex;
- (id)storeUnitForUUID:(id)arg1;

@end
