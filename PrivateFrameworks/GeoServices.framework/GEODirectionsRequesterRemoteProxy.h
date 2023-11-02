
@interface GEODirectionsRequesterRemoteProxy : NSObject <_GEODirectionsRequesterServerProxy> {
    geo_isolater * _isolater;
    NSMapTable * _pendingRequestConnections;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_takeConnectionForRequest:(id)arg1;
- (void)cancelRequest:(id)arg1;
- (id)init;
- (void)startRequest:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 useBackgroundURL:(bool)arg4 requestPriority:(id)arg5 callbackQueue:(id)arg6 finished:(id /* block */)arg7 networkActivity:(id /* block */)arg8 error:(id /* block */)arg9;

@end
