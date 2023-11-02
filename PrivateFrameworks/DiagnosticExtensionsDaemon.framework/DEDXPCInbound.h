
@interface DEDXPCInbound : NSObject <DEDXPCProtocol> {
    <DEDXPCInboundDelegate> * _delegate;
    NSObject<OS_os_log> * _log;
    NSNumber * _senderPid;
}

@property (readonly, copy) NSString *debugDescription;
@property <DEDXPCInboundDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_os_log> *log;
@property (retain) NSNumber *senderPid;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 senderPid:(id)arg2;
- (id)log;
- (id)senderPid;
- (void)setDelegate:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setSenderPid:(id)arg1;
- (void)xpc_addData:(id)arg1 withFilename:(id)arg2 forSession:(id)arg3;
- (void)xpc_adoptFiles:(id)arg1 forSession:(id)arg2;
- (void)xpc_cancelNotifySession:(id)arg1;
- (void)xpc_cancelSession:(id)arg1;
- (void)xpc_commitSession:(id)arg1;
- (void)xpc_compressionProgress:(unsigned long long)arg1 total:(unsigned long long)arg2 session:(id)arg3;
- (void)xpc_deviceSupportsDiagnosticExtensions:(id)arg1 session:(id)arg2;
- (void)xpc_didAdoptFilesWithError:(id)arg1 forSession:(id)arg2;
- (void)xpc_didCancelSession:(id)arg1;
- (void)xpc_didCommitSession:(id)arg1;
- (void)xpc_didDiscoverDevices:(id)arg1;
- (void)xpc_didGetState:(long long)arg1 info:(id)arg2 sessionID:(id)arg3;
- (void)xpc_didLoadTextDataForExtensions:(id)arg1 localization:(id)arg2 sessionID:(id)arg3;
- (void)xpc_didStartBugSessionWithInfo:(id)arg1;
- (void)xpc_discoverAllAvailableDevices;
- (void)xpc_finishedDiagnosticWithIdentifier:(id)arg1 result:(id)arg2 session:(id)arg3;
- (void)xpc_forceRemoveNotificationOfType:(long long)arg1 identifier:(id)arg2 hostIdentifier:(id)arg3;
- (void)xpc_getSessionStateWithSession:(id)arg1;
- (void)xpc_getSessionStatusWithSession:(id)arg1;
- (void)xpc_gotDeviceUpdate:(id)arg1;
- (void)xpc_hasActiveSession:(id)arg1;
- (void)xpc_hasActiveSessionReply:(id)arg1 isActive:(bool)arg2;
- (void)xpc_hasCollected:(id)arg1 isCollecting:(id)arg2 inSession:(id)arg3;
- (void)xpc_hasCollected:(id)arg1 isCollecting:(id)arg2 withIdentifiers:(id)arg3 inSession:(id)arg4;
- (void)xpc_listAvailableExtensionsForSession:(id)arg1;
- (void)xpc_listClientXPCConnections;
- (void)xpc_listClientXPCConnectionsReply:(id)arg1;
- (void)xpc_loadTextDataForExtensions:(id)arg1 localization:(id)arg2 sessionID:(id)arg3;
- (void)xpc_notifySession:(id)arg1;
- (void)xpc_ping;
- (void)xpc_pingSession:(id)arg1;
- (void)xpc_pong;
- (void)xpc_pongSession:(id)arg1;
- (void)xpc_promptPINForDevice:(id)arg1;
- (void)xpc_startBugSessionWithIdentifier:(id)arg1 configuration:(id)arg2 caller:(id)arg3 target:(id)arg4;
- (void)xpc_startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 deferRunUntil:(id)arg3 session:(id)arg4;
- (void)xpc_startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 session:(id)arg3;
- (void)xpc_startPairSetupForDevice:(id)arg1;
- (void)xpc_stopDeviceDiscovery;
- (void)xpc_successPINForDevice:(id)arg1;
- (void)xpc_syncSessionStatusWithSession:(id)arg1;
- (void)xpc_terminateExtension:(id)arg1 info:(id)arg2 session:(id)arg3;
- (void)xpc_tryPIN:(id)arg1 forDevice:(id)arg2;
- (void)xpc_uploadProgress:(unsigned long long)arg1 total:(long long)arg2 session:(id)arg3;

@end
