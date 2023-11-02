
@protocol DEDXPCInboundDelegate <NSObject>

@required

- (void)xpcInbound_didAbortSessionWithID:(NSString *)arg1;
- (void)xpcInbound_didDiscoverDevices:(NSArray *)arg1;
- (void)xpcInbound_didStartBugSessionWithInfo:(NSDictionary *)arg1;
- (void)xpcInbound_discoverAllAvailableDevices:(DEDXPCInbound *)arg1;
- (void)xpcInbound_forceRemoveNotificationOfType:(long long)arg1 identifier:(NSString *)arg2 hostIdentifier:(NSString *)arg3;
- (void)xpcInbound_gotDeviceUpdate:(DEDDevice *)arg1;
- (void)xpcInbound_hasActiveSession:(NSString *)arg1 fromInbound:(DEDXPCInbound *)arg2;
- (void)xpcInbound_hasActiveSessionReply:(NSString *)arg1 isActive:(bool)arg2;
- (void)xpcInbound_listClientXPCConnectionsReply:(NSArray *)arg1;
- (void)xpcInbound_ping:(DEDXPCInbound *)arg1;
- (void)xpcInbound_pong;
- (void)xpcInbound_promptPINForDevice:(DEDDevice *)arg1;
- (DEDBugSession *)xpcInbound_sessionForIdentifier:(NSString *)arg1;
- (void)xpcInbound_startBugSessionWithIdentifier:(NSString *)arg1 configuration:(DEDBugSessionConfiguration *)arg2 caller:(DEDDevice *)arg3 target:(DEDDevice *)arg4 fromInbound:(DEDXPCInbound *)arg5;
- (void)xpcInbound_startPairSetupForDevice:(DEDDevice *)arg1 fromInbound:(DEDXPCInbound *)arg2;
- (void)xpcInbound_stopDeviceDiscovery:(DEDXPCInbound *)arg1;
- (void)xpcInbound_successPINForDevice:(DEDDevice *)arg1;
- (void)xpcInbound_tryPIN:(NSString *)arg1 forDevice:(DEDDevice *)arg2 fromInbound:(DEDXPCInbound *)arg3;
- (void)xpc_listClientXPCConnectionsFromInbound:(DEDXPCInbound *)arg1;

@end
