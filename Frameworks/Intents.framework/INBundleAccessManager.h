
@interface INBundleAccessManager : NSObject {
    NSMutableSet * _accessibleBundleIDs;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _securityScopedURLs;
    struct { 
        unsigned int _requestCount; 
        unsigned int _securityScopeCacheHitCount; 
        unsigned int _accessibleCacheHitCount; 
        unsigned int _cacheMissCount; 
        unsigned int _imageServiceLoadCount; 
    }  _stats;
}

@property (nonatomic, readonly) NSMutableSet *accessibleBundleIDs;
@property (nonatomic, readonly) NSMutableDictionary *securityScopedURLs;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_grantForBundleIdentifiers:(id)arg1 error:(id*)arg2;
- (id)_stats;
- (id)accessibleBundleIDs;
- (id)grantForBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)grantForBundleIdentifiers:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)securityScopedURLs;

@end
