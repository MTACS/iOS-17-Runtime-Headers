
@interface PLClientSandboxExtensionCache : NSObject {
    unsigned long long  _cacheLimit;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableOrderedSet * _sandboxExtensionURLs;
}

@property (nonatomic, readonly) unsigned long long cacheLimit;
@property (nonatomic, retain) NSMutableOrderedSet *sandboxExtensionURLs;

- (void).cxx_destruct;
- (unsigned long long)cacheLimit;
- (bool)containsURL:(id)arg1;
- (id)initWithCacheLimit:(unsigned long long)arg1;
- (void)insertSandboxedURL:(id)arg1;
- (id)sandboxExtensionURLs;
- (void)setSandboxExtensionURLs:(id)arg1;

@end
