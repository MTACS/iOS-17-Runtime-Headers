
@interface ICMusicUserTokenCache : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableDictionary * _cachedUserTokens;
    NSObject<OS_dispatch_queue> * _calloutQueue;
}

+ (id)_decodeDeveloperTokenPart:(id)arg1;
+ (void)_getCacheKeyForDeveloperToken:(id)arg1 requestContext:(id)arg2 completion:(id /* block */)arg3;
+ (id)sharedCache;

- (void).cxx_destruct;
- (void)_handleMusicUserTokensDidChangeDistributedNotification:(id)arg1;
- (id)_init;
- (void)_loadPersistedCacheWithCompletion:(id /* block */)arg1;
- (void)_persistCache;
- (void)_postLocalChangeNotification;
- (void)dealloc;
- (void)getCachedUserTokenForDeveloperToken:(id)arg1 requestContext:(id)arg2 completion:(id /* block */)arg3;
- (void)setCachedUserToken:(id)arg1 forDeveloperToken:(id)arg2 requestContext:(id)arg3 completion:(id /* block */)arg4;

@end
