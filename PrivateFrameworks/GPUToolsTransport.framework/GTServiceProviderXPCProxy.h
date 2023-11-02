
@interface GTServiceProviderXPCProxy : NSObject <GTServiceProvider> {
    GTServiceConnection * _connection;
    NSString * _deviceUDID;
    NSSet * _ignoreMethods;
    NSObject<OS_os_log> * _log;
    NSMutableDictionary * _observerIdToPort;
}

- (void).cxx_destruct;
- (id)allServices;
- (void)deregisterObserver:(unsigned long long)arg1;
- (void)deregisterService:(unsigned long long)arg1;
- (id)initWithConnection:(id)arg1 remoteProperties:(id)arg2;
- (unsigned long long)registerObserver:(id)arg1;
- (void)registerService:(id)arg1 forProcess:(id)arg2;
- (bool)respondsToSelector:(SEL)arg1;
- (void)waitForService:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)waitForService:(id)arg1 error:(id*)arg2;

@end
