
@interface EncoreService : EncoreXPCService.AsyncService <EncoreXPCService.Encore, NSXPCListenerDelegate> {
    void endpoint;
    void eventHandler;
    void listener;
    void queue;
}

+ (id)service;

- (void).cxx_destruct;
- (void)broadcastWithEvent:(id)arg1;
- (void)echoWithEvent:(id)arg1;
- (void)handleEventWithEvent:(id)arg1;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)publishWithEvent:(id)arg1;
- (void)registerWithClient:(id)arg1 name:(id)arg2 with:(id /* block */)arg3;
- (void)subscribeWithCompletion:(id /* block */)arg1;

@end
