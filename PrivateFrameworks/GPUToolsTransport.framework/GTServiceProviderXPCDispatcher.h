
@interface GTServiceProviderXPCDispatcher : GTXPCDispatcher <GTServiceProviderXPCDispatcher> {
    NSMutableDictionary * _registeredConnections;
    <GTServiceProvider> * _serviceProvider;
}

- (void).cxx_destruct;
- (void)allServices:(id)arg1 replyConnection:(id)arg2;
- (void)broadcastDisconnect:(id)arg1 replyConnection:(id)arg2;
- (void)deregisterObserver_:(id)arg1 replyConnection:(id)arg2;
- (void)deregisterService_:(id)arg1 replyConnection:(id)arg2;
- (id)initWithService:(id)arg1 properties:(id)arg2;
- (void)registerObserver_:(id)arg1 replyConnection:(id)arg2;
- (void)registerService_forProcess_:(id)arg1 replyConnection:(id)arg2;
- (void)setConnections:(id)arg1;
- (void)waitForService_completionHandler_:(id)arg1 replyConnection:(id)arg2;
- (void)waitForService_error_:(id)arg1 replyConnection:(id)arg2;

@end
