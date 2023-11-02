
@interface _UIActivityApplicationExtensionsCache : NSObject {
    unsigned long long  _cacheHits;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cacheLock;
    unsigned long long  _cacheMisses;
    NSMutableDictionary * _cachedResults;
    NSObject<OS_dispatch_queue> * _discoveryQueue;
    NSMutableDictionary * _extensionMatchTokens;
    bool  _precached;
    bool  _primed;
    NSObject<OS_dispatch_queue> * _primedExtensionsQueue;
}

@property (nonatomic, retain) NSMutableDictionary *cachedResults;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *discoveryQueue;
@property (nonatomic, retain) NSMutableDictionary *extensionMatchTokens;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *primedExtensionsQueue;

+ (id)sharedExtensionsCache;

- (void).cxx_destruct;
- (void)_cacheMatchingExtensions:(id)arg1 cacheKey:(id)arg2 error:(id)arg3;
- (void)_cacheMatchingExtensionsResult:(id)arg1 cacheKey:(id)arg2;
- (id)_matchingExtensionsCachedResultForKey:(id)arg1;
- (void)_startContinuousExtensionDiscoveryForAttributes:(id)arg1 cacheKey:(id)arg2;
- (void)_startPrecachingContinuousExtensionDiscovery;
- (id)cachedResults;
- (id)discoveryQueue;
- (id)extensionMatchTokens;
- (id)extensionsResultWithMatchingAttributes:(id)arg1;
- (id)init;
- (void)primeExtensionsResultWithMatchingAttributes:(id)arg1;
- (id)primedExtensionsQueue;
- (id)reportExtensionsCacheResult;
- (void)setCachedResults:(id)arg1;
- (void)setDiscoveryQueue:(id)arg1;
- (void)setExtensionMatchTokens:(id)arg1;
- (void)setPrimedExtensionsQueue:(id)arg1;

@end
