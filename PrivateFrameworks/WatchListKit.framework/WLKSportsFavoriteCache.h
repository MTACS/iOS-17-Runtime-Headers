
@interface WLKSportsFavoriteCache : NSObject <WLKSportsFavoriteCaching> {
    NSObject<OS_dispatch_queue> * _queue;
    NSUserDefaults * _userDefaults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addFavorites:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteLegacyCacheWithCompletion:(id /* block */)arg1;
- (id)dictionaryRepresentation;
- (void)getFavoritesWithCompletion:(id /* block */)arg1;
- (bool)hasCache;
- (void)hasFavoritesSyncEnabledKey:(id /* block */)arg1;
- (id)initWithUserDefaults:(id)arg1;
- (void)invalidate;
- (void)isOptedIn:(id /* block */)arg1;
- (void)removeFavorites:(id)arg1 completion:(id /* block */)arg2;
- (void)setCache:(id)arg1 overrideLastModifiedDate:(bool)arg2 completion:(id /* block */)arg3;
- (void)setOptInStatus:(bool)arg1 overrideLastModifiedDate:(bool)arg2 completion:(id /* block */)arg3;

@end
