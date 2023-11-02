
@interface UMPersonaCallbackListener : NSObject <NSXPCListenerDelegate, UMXPCClient> {
    NSString * _machServiceName;
    id /* block */  _personaUpdateCallbackHandler;
    NSMutableSet * _xpcConnections;
    NSXPCListener * _xpcListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)bubbleDidPop;
- (void)deviceLoginSessionStateDidUpdate;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)personaListDidUpdateCompletionHandler:(id /* block */)arg1;
- (void)personaUpdateCallbackForMachServiceCompletionHandler:(id /* block */)arg1;
- (void)readyToSwitchToLoginSession:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)readyToSwitchToUser:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)uploadContentWithCompletionHandler:(id /* block */)arg1;
- (void)userSwitchTaskListDidUpdate;
- (void)willSwitchToUser:(id)arg1 completionHandler:(id /* block */)arg2;

@end
