
@interface SeymourClient.XPCServer : NSObject <NSXPCListenerDelegate, SeymourClient.TransportServer> {
    void clients;
    void dispatchService;
    void listener;
    void lock;
    void requiredEntitlements;
}

- (void).cxx_destruct;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)receiveEvent:(long long)arg1 data:(id)arg2;
- (void)receiveRequest:(long long)arg1 data:(id)arg2 completion:(id /* block */)arg3;

@end
