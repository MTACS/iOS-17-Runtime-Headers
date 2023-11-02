
@interface GEODirectionsRequester : NSObject {
    <_GEODirectionsRequesterServerProxy> * _serverProxy;
}

+ (id)sharedRequester;
+ (void)useProxy:(Class)arg1;
+ (void)useRemoteProxy;

- (void).cxx_destruct;
- (void)cancelRequest:(id)arg1;
- (void)finalizeRequest:(id)arg1;
- (id)init;
- (void)startRequest:(id)arg1 callbackQueue:(id)arg2 finished:(id /* block */)arg3 networkActivity:(id /* block */)arg4 error:(id /* block */)arg5;
- (void)startRequest:(id)arg1 finished:(id /* block */)arg2 networkActivity:(id /* block */)arg3 error:(id /* block */)arg4;
- (void)startRequest:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 callbackQueue:(id)arg4 finished:(id /* block */)arg5 networkActivity:(id /* block */)arg6 error:(id /* block */)arg7;
- (void)startRequest:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 skipFinalize:(bool)arg4 useBackgroundURL:(bool)arg5 requestPriority:(id)arg6 callbackQueue:(id)arg7 finished:(id /* block */)arg8 networkActivity:(id /* block */)arg9 error:(id /* block */)arg10;
- (void)startRequest:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 skipFinalize:(bool)arg4 useBackgroundURL:(bool)arg5 requestPriority:(id)arg6 finished:(id /* block */)arg7 networkActivity:(id /* block */)arg8 error:(id /* block */)arg9;
- (void)startRequest:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 useBackgroundURL:(bool)arg4 callbackQueue:(id)arg5 finished:(id /* block */)arg6 networkActivity:(id /* block */)arg7 error:(id /* block */)arg8;

@end
