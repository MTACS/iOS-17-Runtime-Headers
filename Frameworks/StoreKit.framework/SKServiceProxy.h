
@interface SKServiceProxy : NSObject {
    NSXPCConnection * _serviceConnection;
    NSLock * _serviceConnectionLock;
}

+ (id)inAppClientInterface;
+ (id)inAppServiceInterface;
+ (id)serviceProxy;

- (void).cxx_destruct;
- (void)_serviceConnectionInvalidated;
- (id)inAppService;
- (id)inAppServiceWithErrorHandler:(id /* block */)arg1;
- (id)init;
- (id)objectProxyWithErrorHandler:(id /* block */)arg1;
- (id)serviceConnection;

@end
