
@interface GTURLAccessProviderXPCDispatcher : GTXPCDispatcher <GTURLAccessProviderXPCDispatcher> {
    <GTURLAccessProvider> * _service;
}

- (void).cxx_destruct;
- (void)copyIdentifier_toDevice_completionHandler_:(id)arg1 replyConnection:(id)arg2;
- (id)initWithService:(id)arg1 properties:(id)arg2;
- (void)makeURL_:(id)arg1 replyConnection:(id)arg2;
- (void)securityScopedURLFromSandboxID_completionHandler_:(id)arg1 replyConnection:(id)arg2;
- (void)transferIdentifier_toDevice_completionHandler_:(id)arg1 replyConnection:(id)arg2;
- (void)urlForPath_:(id)arg1 replyConnection:(id)arg2;

@end
