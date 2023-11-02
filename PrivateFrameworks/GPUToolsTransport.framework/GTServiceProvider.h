
@interface GTServiceProvider : NSObject <GTServiceProvider, GTServiceProviderObserver> {
    NSObject<OS_os_log> * _log;
    unsigned long long  _nextServiceID;
    GTObservableService * _observers;
    NSMutableDictionary * _services;
    NSMutableDictionary * _waiting;
}

- (void).cxx_destruct;
- (void)_registerService:(id)arg1 forProcess:(id)arg2 forPort:(unsigned long long)arg3;
- (id)allServices;
- (void)deregisterObserver:(unsigned long long)arg1;
- (void)deregisterObserversForConnection:(id)arg1 path:(id)arg2;
- (void)deregisterService:(unsigned long long)arg1;
- (void)disconnectServicePorts:(id)arg1;
- (id)init;
- (void)notifyServiceListChanged:(id)arg1;
- (void)registerDefaultServiceProvider:(id)arg1 forProcess:(id)arg2;
- (unsigned long long)registerObserver:(id)arg1;
- (void)registerService:(id)arg1 forProcess:(id)arg2;
- (void)waitForService:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)waitForService:(id)arg1 error:(id*)arg2;

@end
