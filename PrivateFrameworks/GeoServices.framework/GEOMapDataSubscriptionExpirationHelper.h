
@interface GEOMapDataSubscriptionExpirationHelper : NSObject <GEOConfigChangeListenerDelegate, GEOOfflineDataConfigurationObserver, GEOTileDBObserver> {
    GEOTileDB * _db;
    GEOXPCActivity * _expirationActivity;
    int  _fullyDownloadedSubscriptionsChangedToken;
    NSObject<OS_dispatch_queue> * _queue;
    GEOXPCActivity * _upcomingExpirationActivity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedHelper;

- (void).cxx_destruct;
- (void)_subscriptionsDidChange:(id)arg1;
- (void)configureWithDB:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)offlineDataConfiguration:(id)arg1 didChangeActiveVersions:(id)arg2;
- (void)runXPCActivity:(id)arg1;
- (void)tileDB:(id)arg1 didExpireSubscriptions:(id)arg2 forReason:(long long)arg3;
- (void)valueChangedForGEOConfigKey:(struct { unsigned int x1; void *x2; })arg1;

@end
