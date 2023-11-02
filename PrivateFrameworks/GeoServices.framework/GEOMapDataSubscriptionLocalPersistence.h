
@interface GEOMapDataSubscriptionLocalPersistence : NSObject <GEOMapDataSubscriptionPersistence> {
    GEOTileDB * _db;
    geo_isolater * _isolation;
    GEOOfflineDataConfiguration * _offlineDataConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addSubscriptionWithIdentifier:(id)arg1 auditToken:(id)arg2 dataTypes:(unsigned long long)arg3 policy:(long long)arg4 region:(id)arg5 displayName:(id)arg6 expirationDate:(id)arg7 callbackQueue:(id)arg8 completionHandler:(id /* block */)arg9;
- (void)calculateTotalSizeOfOfflineSubscriptionsWithCallbackQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchExpiredSubscriptionsWithIdentifiers:(id)arg1 callbackQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchSubscriptionsForSyncToWatchWithCallbackQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchSubscriptionsWithIdentifiers:(id)arg1 callbackQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (id)initWithTileDB:(id)arg1 offlineDataConfiguration:(id)arg2;
- (void)removeSubscriptionWithIdentifier:(id)arg1 callbackQueue:(id)arg2 completionHandler:(id /* block */)arg3;

@end
