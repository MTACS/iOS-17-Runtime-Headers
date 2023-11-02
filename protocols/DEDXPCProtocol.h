
@protocol DEDXPCProtocol <NSObject>

@required

- (void)xpc_didDiscoverDevices:(NSArray *)arg1;
- (void)xpc_didStartBugSessionWithInfo:(NSDictionary *)arg1;
- (void)xpc_discoverAllAvailableDevices;
- (void)xpc_forceRemoveNotificationOfType:(long long)arg1 identifier:(NSString *)arg2 hostIdentifier:(NSString *)arg3;
- (void)xpc_gotDeviceUpdate:(DEDDevice *)arg1;
- (void)xpc_hasActiveSession:(NSString *)arg1;
- (void)xpc_hasActiveSessionReply:(NSString *)arg1 isActive:(bool)arg2;
- (void)xpc_listClientXPCConnections;
- (void)xpc_listClientXPCConnectionsReply:(NSArray *)arg1;
- (void)xpc_ping;
- (void)xpc_pong;
- (void)xpc_promptPINForDevice:(DEDDevice *)arg1;
- (void)xpc_startBugSessionWithIdentifier:(NSString *)arg1 configuration:(DEDBugSessionConfiguration *)arg2 caller:(DEDDevice *)arg3 target:(DEDDevice *)arg4;
- (void)xpc_startPairSetupForDevice:(DEDDevice *)arg1;
- (void)xpc_stopDeviceDiscovery;
- (void)xpc_successPINForDevice:(DEDDevice *)arg1;
- (void)xpc_tryPIN:(NSString *)arg1 forDevice:(DEDDevice *)arg2;

@optional

- (void)xpc_addData:(NSData *)arg1 withFilename:(NSString *)arg2 forSession:(NSString *)arg3;
- (void)xpc_adoptFiles:(NSArray *)arg1 forSession:(NSString *)arg2;
- (void)xpc_cancelNotifySession:(NSString *)arg1;
- (void)xpc_cancelSession:(NSString *)arg1;
- (void)xpc_commitSession:(NSString *)arg1;
- (void)xpc_compressionProgress:(unsigned long long)arg1 total:(unsigned long long)arg2 session:(NSString *)arg3;
- (void)xpc_deviceSupportsDiagnosticExtensions:(NSArray *)arg1 session:(NSString *)arg2;
- (void)xpc_didAdoptFilesWithError:(NSError *)arg1 forSession:(NSString *)arg2;
- (void)xpc_didCancelSession:(NSString *)arg1;
- (void)xpc_didCommitSession:(NSString *)arg1;
- (void)xpc_didGetState:(long long)arg1 info:(NSDictionary *)arg2 sessionID:(NSString *)arg3;
- (void)xpc_didLoadTextDataForExtensions:(NSSet *)arg1 localization:(NSString *)arg2 sessionID:(NSString *)arg3;
- (void)xpc_finishedDiagnosticWithIdentifier:(NSString *)arg1 result:(NSDictionary *)arg2 session:(NSString *)arg3;
- (void)xpc_getSessionStateWithSession:(NSString *)arg1;
- (void)xpc_getSessionStatusWithSession:(NSString *)arg1;
- (void)xpc_hasCollected:(NSArray *)arg1 isCollecting:(NSArray *)arg2 inSession:(NSString *)arg3;
- (void)xpc_hasCollected:(NSArray *)arg1 isCollecting:(NSArray *)arg2 withIdentifiers:(NSArray *)arg3 inSession:(NSString *)arg4;
- (void)xpc_listAvailableExtensionsForSession:(NSString *)arg1;
- (void)xpc_loadTextDataForExtensions:(NSSet *)arg1 localization:(NSString *)arg2 sessionID:(NSString *)arg3;
- (void)xpc_notifySession:(NSString *)arg1;
- (void)xpc_pingSession:(NSString *)arg1;
- (void)xpc_pongSession:(NSString *)arg1;
- (void)xpc_startDiagnosticWithIdentifier:(NSString *)arg1 parameters:(NSDictionary *)arg2 deferRunUntil:(NSDate *)arg3 session:(NSString *)arg4;
- (void)xpc_startDiagnosticWithIdentifier:(NSString *)arg1 parameters:(NSDictionary *)arg2 session:(NSString *)arg3;
- (void)xpc_syncSessionStatusWithSession:(NSString *)arg1;
- (void)xpc_terminateExtension:(NSString *)arg1 info:(NSDictionary *)arg2 session:(NSString *)arg3;
- (void)xpc_uploadProgress:(unsigned long long)arg1 total:(long long)arg2 session:(NSString *)arg3;

@end
