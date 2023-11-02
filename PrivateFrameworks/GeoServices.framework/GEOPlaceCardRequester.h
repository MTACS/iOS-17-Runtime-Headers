
@interface GEOPlaceCardRequester : NSObject {
    geo_isolater * _isolater;
    NSMutableDictionary * _pendingRequestConnections;
    NSObject<OS_dispatch_queue> * _requestQ;
}

+ (id)sharedRequester;

- (void).cxx_destruct;
- (id)_createServerConnection:(id)arg1;
- (id)_takeConnectionForRequestUUID:(id)arg1;
- (unsigned long long)calculateFreeableSpaceSync;
- (void)calculateFreeableSpaceWithHandler:(id /* block */)arg1;
- (void)cancelRequest:(id)arg1;
- (void)clearCache;
- (void)fetchAllCacheEntriesWithRequesterHandler:(id /* block */)arg1;
- (id)init;
- (id)performPlaceDataRequest:(id)arg1 traits:(id)arg2 cachePolicy:(unsigned long long)arg3 timeout:(double)arg4 auditToken:(id)arg5 throttleToken:(id)arg6 networkActivity:(id /* block */)arg7 requesterHandler:(id /* block */)arg8;
- (id)requestIdentifiers:(id)arg1 resultProviderID:(int)arg2 traits:(id)arg3 options:(unsigned long long)arg4 auditToken:(id)arg5 throttleToken:(id)arg6 networkActivity:(id /* block */)arg7 requesterHandler:(id /* block */)arg8;
- (id)requestPhoneNumbers:(id)arg1 allowCellularDataForLookup:(bool)arg2 traits:(id)arg3 auditToken:(id)arg4 throttleToken:(id)arg5 networkActivity:(id /* block */)arg6 requesterHandler:(id /* block */)arg7;
- (void)shrinkBySize:(unsigned long long)arg1 finished:(id /* block */)arg2;
- (unsigned long long)shrinkBySizeSync:(unsigned long long)arg1;
- (void)trackPlaceData:(id)arg1;

@end
