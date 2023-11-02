
@interface SeymourClient.XPCClient : _TtCs12_SwiftObject <SeymourClient.TransportServer> {
    void connection;
    void dispatchService;
    void lock;
    void server;
    void state;
}

- (void)receiveEvent:(long long)arg1 data:(id)arg2;
- (void)receiveRequest:(long long)arg1 data:(id)arg2 completion:(id /* block */)arg3;

@end
