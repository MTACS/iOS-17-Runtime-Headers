
@interface GEOTransitUpdateRequester : NSObject {
    geo_isolater * _isolater;
    NSHashTable * _pendingRequests;
}

+ (id)sharedRequester;

- (void).cxx_destruct;
- (bool)_finishRequest:(id)arg1;
- (void)cancelTransitRouteUpdateRequest:(id)arg1;
- (id)init;
- (void)startTransitRouteUpdateRequest:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3 queue:(id)arg4 networkActivity:(id /* block */)arg5 completion:(id /* block */)arg6;

@end
