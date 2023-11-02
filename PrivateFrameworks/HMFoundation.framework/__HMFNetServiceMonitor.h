
@interface __HMFNetServiceMonitor : HMFNetMonitor {
    HMFNetService * _service;
}

@property (readonly) HMFNetService *service;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithNetAddress:(id)arg1;
- (id)initWithNetService:(id)arg1;
- (id)logIdentifier;
- (id)netAddress;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (unsigned long long)reachabilityPath;
- (id)service;

@end
