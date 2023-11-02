
@interface SiriRequestDispatcher.EmptyBridgeConnectionListener : AFBridgeConnectionListener

- (id)init;
- (id)initWithBridgeName:(id)arg1 machService:(id)arg2 withServiceInterface:(id)arg3 withDelegateInterface:(id)arg4;
- (void)notifyClientWithBlock:(id /* block */)arg1;
- (void)resumeConnectionWithBridgeProxy:(id)arg1;

@end
