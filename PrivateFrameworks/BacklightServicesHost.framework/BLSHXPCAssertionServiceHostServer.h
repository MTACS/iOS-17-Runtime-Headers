
@interface BLSHXPCAssertionServiceHostServer : NSObject <BSServiceConnectionListenerDelegate> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    <BLSAssertionService> * _localAssertionService;
    BSServiceConnectionListener * _serviceListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)domainSpecification;
+ (id)serverWithLocalAssertionService:(id)arg1;

- (void).cxx_destruct;
- (id)initWithLocalAssertionService:(id)arg1;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;

@end
