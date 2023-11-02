
@interface EncoreXPCService.SnippetService : EncoreXPCService.AsyncService <EncoreXPCService.DistributedEventHandler, NSXPCListenerDelegate> {
    void connection;
    void encore;
    void eventHandler;
    void serviceName;
}

- (void).cxx_destruct;
- (void)echoWithEvent:(id)arg1;
- (void)handleEventWithEvent:(id)arg1;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)publishWithEvent:(id)arg1;
- (void)subscribeWithCompletion:(id /* block */)arg1;

@end
