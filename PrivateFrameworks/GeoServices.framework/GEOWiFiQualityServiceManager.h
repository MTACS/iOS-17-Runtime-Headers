
@interface GEOWiFiQualityServiceManager : NSObject <GEOWiFiQualityServiceProxy> {
    <GEOWiFiQualityServiceProxy> * _proxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedManager;
+ (void)useProxyClass:(Class)arg1;

- (void).cxx_destruct;
- (void)cancelRequestId:(id)arg1;
- (id)init;
- (void)submitWiFiQualityServiceRequest:(id)arg1 requestId:(id)arg2 auditToken:(id)arg3 completionQueue:(id)arg4 completion:(id /* block */)arg5;
- (void)submitWiFiQualityTileLoadForKey:(id)arg1 eTag:(id)arg2 requestId:(id)arg3 auditToken:(id)arg4 completionQueue:(id)arg5 completion:(id /* block */)arg6;

@end
