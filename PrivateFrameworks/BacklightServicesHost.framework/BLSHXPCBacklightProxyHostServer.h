
@interface BLSHXPCBacklightProxyHostServer : NSObject <BSServiceConnectionListenerDelegate> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    <BLSBacklightProxy> * _localBacklightProxy;
    BSServiceConnectionListener * _serviceListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)domainSpecification;
+ (id)serverWithLocalBacklightProxy:(id)arg1;

- (void).cxx_destruct;
- (id)initWithLocalBacklightProxy:(id)arg1;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;

@end
