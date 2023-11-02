
@interface GEOETARequester : NSObject {
    geo_isolater * _isolater;
    NSMapTable * _pendingRequests;
    NSHashTable * _pendingSimpleRequests;
}

+ (id)sharedRequester;

- (void).cxx_destruct;
- (bool)_finishRequest:(id)arg1;
- (bool)_finishSimpleRequest:(id)arg1;
- (void)cancelRequest:(id)arg1;
- (void)cancelSimpleETARequest:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)startRequest:(id)arg1 connectionProperties:(id)arg2 auditToken:(id)arg3 throttleToken:(id)arg4 callbackQueue:(id)arg5 willSendRequest:(id /* block */)arg6 finished:(id /* block */)arg7 networkActivity:(id /* block */)arg8 error:(id /* block */)arg9;
- (void)startSimpleETARequest:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3 callbackQueue:(id)arg4 finished:(id /* block */)arg5 networkActivity:(id /* block */)arg6 error:(id /* block */)arg7;
- (void)startSimpleETARequest:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3 traits:(id)arg4 callbackQueue:(id)arg5 finished:(id /* block */)arg6 networkActivity:(id /* block */)arg7 error:(id /* block */)arg8;

@end
