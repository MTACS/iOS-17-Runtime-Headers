
@interface WLKSportsFavoriteManager : NSObject {
    <WLKSportsFavoriteCaching> * __cache;
    NSXPCConnection * _connection;
    int  _favoritesCacheSyncNotificationToken;
    NSObject<OS_dispatch_queue> * _queue;
    int  _sportsFavoriteSyncSettingChangedNotificationToken;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _xpcLock;
}

@property (retain) <WLKSportsFavoriteCaching> *_cache;

+ (id)defaultManager;
+ (bool)isOptOutAvailable;

- (void).cxx_destruct;
- (id)_cache;
- (id)_connection;
- (void)_getFavoritesIgnoringCache:(bool)arg1 overrideLastModifiedDate:(bool)arg2 completion:(id /* block */)arg3;
- (void)_invalidationHandler;
- (void)_perform:(id)arg1 completion:(id /* block */)arg2;
- (void)_performAction:(unsigned long long)arg1 withIDs:(id)arg2 caller:(id)arg3 completion:(id /* block */)arg4;
- (void)_performUserSettingsAction:(unsigned long long)arg1 setFavoritesSyncEnabled:(bool)arg2 caller:(id)arg3 completion:(id /* block */)arg4;
- (void)_performUserSettingsOperation:(id)arg1 completion:(id /* block */)arg2;
- (void)addFavorites:(id)arg1 completion:(id /* block */)arg2;
- (id)caller;
- (void)dealloc;
- (void)deleteLegacyCache;
- (void)favoritesWithCompletion:(id /* block */)arg1;
- (void)getFavoritesIgnoringCache:(bool)arg1 completion:(id /* block */)arg2;
- (void)getFavoritesWithCompletion:(id /* block */)arg1;
- (void)handleAccountDidChange:(id)arg1;
- (void)handleRefreshCacheNotification;
- (void)handleSyncSettingChangedNotification;
- (id)initWithCache:(id)arg1;
- (void)isOnboarded:(id /* block */)arg1;
- (void)removeFavorites:(id)arg1 completion:(id /* block */)arg2;
- (void)setOptInStatus:(bool)arg1 completion:(id /* block */)arg2;
- (void)set_cache:(id)arg1;
- (void)watchlistd_performAction:(unsigned long long)arg1 withIDs:(id)arg2 caller:(id)arg3 overrideLastModifiedDate:(bool)arg4 completion:(id /* block */)arg5;
- (void)watchlistd_performUserSettingsAction:(unsigned long long)arg1 setFavoritesSyncEnabled:(bool)arg2 caller:(id)arg3 overrideLastModifiedDate:(bool)arg4 completion:(id /* block */)arg5;

@end
