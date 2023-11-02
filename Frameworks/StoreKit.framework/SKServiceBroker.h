
@interface SKServiceBroker : NSObject {
    NSXPCConnection * _serviceConnection;
    NSLock * _serviceConnectionLock;
}

+ (id)_serviceConnectionWithName:(id)arg1;
+ (id)_storeKitClientInterface;
+ (id)_storeKitServiceInterface;
+ (id)defaultBroker;

- (void).cxx_destruct;
- (id)_serviceConnection;
- (void)_serviceConnectionInvalidated;
- (id)inAppBindingServiceWithErrorHandler:(id /* block */)arg1;
- (id)init;
- (id)manageSubscriptionsServiceWithErrorHandler:(id /* block */)arg1;
- (id)policyServiceWithErrorHandler:(id /* block */)arg1;
- (id)productServiceWithErrorHandler:(id /* block */)arg1;
- (id)storeKitServiceWithErrorHandler:(id /* block */)arg1;
- (id)storeKitSynchronousServiceWithErrorHandler:(id /* block */)arg1;

@end
