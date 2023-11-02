
@interface FCEndpointConnection : NSObject <FCCoreConfigurationObserving, FCEndpointConnectionType, NSURLSessionDelegate> {
    NFLazy * _lazySession;
    FCNetworkBehaviorMonitor * _networkBehaviorMonitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NFLazy *lazySession;
@property (nonatomic, readonly) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (readonly) Class superclass;

+ (id)errorForStatus:(long long)arg1 url:(id)arg2;

- (void).cxx_destruct;
- (id)init;
- (id)initWithNetworkBehaviorMonitor:(id)arg1;
- (id)initWithSourceApplicationBundleIdentifier:(id)arg1;
- (id)initWithSourceApplicationBundleIdentifier:(id)arg1 networkBehaviorMonitor:(id)arg2;
- (id)lazySession;
- (id)networkBehaviorMonitor;
- (void)performAuthenticatedHTTPRequestWithURL:(id)arg1 valuesByHTTPHeaderField:(id)arg2 method:(id)arg3 data:(id)arg4 contentType:(id)arg5 priority:(float)arg6 reauthenticateIfNeeded:(bool)arg7 callbackQueue:(id)arg8 completion:(id /* block */)arg9;
- (void)performAuthenticatedHTTPRequestWithURL:(id)arg1 valuesByHTTPHeaderField:(id)arg2 method:(id)arg3 data:(id)arg4 contentType:(id)arg5 priority:(float)arg6 reauthenticateIfNeeded:(bool)arg7 networkEventType:(int)arg8 callbackQueue:(id)arg9 completion:(id /* block */)arg10;
- (void)performHTTPRequestWithURL:(id)arg1 method:(id)arg2 data:(id)arg3 contentType:(id)arg4 priority:(float)arg5 requiresMescalSigning:(bool)arg6 callbackQueue:(id)arg7 completion:(id /* block */)arg8;
- (void)performHTTPRequestWithURL:(id)arg1 method:(id)arg2 data:(id)arg3 contentType:(id)arg4 priority:(float)arg5 requiresMescalSigning:(bool)arg6 networkEventType:(int)arg7 callbackQueue:(id)arg8 completion:(id /* block */)arg9;
- (void)performHTTPRequestWithURL:(id)arg1 valuesByHTTPHeaderField:(id)arg2 method:(id)arg3 data:(id)arg4 contentType:(id)arg5 priority:(float)arg6 requiresMescalSigning:(bool)arg7 callbackQueue:(id)arg8 completion:(id /* block */)arg9;
- (void)performHTTPRequestWithURL:(id)arg1 valuesByHTTPHeaderField:(id)arg2 method:(id)arg3 data:(id)arg4 contentType:(id)arg5 priority:(float)arg6 requiresMescalSigning:(bool)arg7 networkEventType:(int)arg8 callbackQueue:(id)arg9 completion:(id /* block */)arg10;
- (void)performHTTPRequestWithURL:(id)arg1 valuesByHTTPHeaderField:(id)arg2 method:(id)arg3 data:(id)arg4 contentType:(id)arg5 priority:(float)arg6 requiresMescalSigning:(bool)arg7 requiresAuthKitHeaders:(bool)arg8 networkEventType:(int)arg9 callbackQueue:(id)arg10 completion:(id /* block */)arg11;
- (id)session;
- (void)setLazySession:(id)arg1;

@end
