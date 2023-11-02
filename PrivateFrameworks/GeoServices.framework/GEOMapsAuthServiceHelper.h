
@interface GEOMapsAuthServiceHelper : NSObject <GEOConfigChangeListenerDelegate, GEOResourceManifestTileGroupObserver> {
    unsigned long long  _currentEnvironmentState;
    geo_isolater * _currentEnvironmentStateIsolater;
    NSString * _currentToken;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _isRenewing;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedAuthHelper;

- (void).cxx_destruct;
- (void)addMapsAuthDidFinishObserver:(id)arg1;
- (void)addMapsAuthDidFinishObserver:(id)arg1 forRequestType:(id)arg2;
- (void)addProxyAuthHeaderOrReAuth:(id)arg1 authProxyURL:(id)arg2;
- (void)autoUpdateClientFeatureFlags;
- (void)checkNetworkError:(id)arg1 sendingGeoDErrorIfApplicable:(long long)arg2;
- (id)dictionaryForAuthTokenState;
- (void)doEnvironmentSwitchCheck:(id)arg1 authProxyURL:(id)arg2 suppressNotification:(bool)arg3;
- (void)handleSecureProxyChallenge:(id)arg1;
- (id)init;
- (void)invalidateTokens;
- (bool)isCurrentEnvironmentSecure;
- (void)removeMapsAuthDidFinishObserver:(id)arg1;
- (void)removeMapsAuthDidFinishObserver:(id)arg1 forRequestType:(id)arg2;
- (void)renewMapsAuthProxyToken:(unsigned long long)arg1 fromToken:(id)arg2 authProxyURL:(id)arg3 suppressNotification:(bool)arg4;
- (void)requestFeatureFlagsWithURL:(id)arg1 suppressNotification:(bool)arg2;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)sendProxyAuthNotification:(long long)arg1;
- (void)setConnectionProxyDictionary:(id)arg1 url:(id)arg2 proxyURL:(id)arg3;
- (void)valueChangedForGEOConfigKey:(struct { unsigned int x1; void *x2; })arg1;

@end
