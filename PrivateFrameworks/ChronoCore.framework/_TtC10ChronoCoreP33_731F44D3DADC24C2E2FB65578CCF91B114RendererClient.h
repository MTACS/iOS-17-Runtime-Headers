
@interface _TtC10ChronoCoreP33_731F44D3DADC24C2E2FB65578CCF91B114RendererClient : NSObject <WRWidgetRendererServiceXPCServer> {
    void _lock;
    void _lock_sessions;
    void _logIdentifier;
    void _processHandle;
    void _queue;
    void _queue_connection;
    void _queue_observeProcessStateAssertion;
    void _queue_runningAssertion;
    void _queue_runningAssertionExpirationTimer;
    void _server;
    void _services;
    void _subscriptions;
}

- (void).cxx_destruct;
- (void)handleInteraction:(id)arg1 action:(id)arg2 handler:(id /* block */)arg3;
- (id)init;
- (void)reloadWidget:(id)arg1 reason:(id)arg2;
- (void)reloadWidgetIfFailed:(id)arg1 reason:(id)arg2;
- (void)setEnvironmentModifiers:(id)arg1 forSession:(id)arg2;
- (void)setVisiblySettled:(id)arg1 forSession:(id)arg2;
- (void)setWidgetTaskPriority:(id)arg1 forSession:(id)arg2;
- (void)subscribe:(id)arg1 completion:(id /* block */)arg2;
- (void)unsubscribe:(id)arg1;

@end
