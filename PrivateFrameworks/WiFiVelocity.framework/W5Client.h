
@interface W5Client : NSObject {
    NSXPCConnection * _conn;
    id /* block */  _eventCallback;
    double  _lastRecoveryTimestamp;
    NSMutableDictionary * _mutableEventCallbackMap;
    NSMutableArray * _mutableEventIDs;
    NSMutableArray * _mutableUUIDs;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, copy) id /* block */ eventCallback;

+ (id)sharedClient;

- (void)__cancelAllRequestsAndReply:(id /* block */)arg1;
- (void)__cancelRequestWithUUID:(id)arg1 reply:(id /* block */)arg2;
- (id)__collectBusyFallbackLogsWithReason:(id)arg1 compress:(bool)arg2;
- (id)__collectJetsamFallbackLogsWithReason:(id)arg1 compress:(bool)arg2;
- (void)__log:(id)arg1 timestamp:(bool)arg2 reply:(id /* block */)arg3;
- (void)__logsCollectedWithTemporaryURL:(id)arg1 outputURL:(id)arg2 keepParent:(bool)arg3 compress:(bool)arg4 reply:(id /* block */)arg5;
- (id)__mostRecentInDirectories:(id)arg1 include:(id)arg2 exclude:(id)arg3 maxAge:(double)arg4;
- (void)__purgeFilesInDirectory:(id)arg1 matching:(id)arg2 maxAge:(unsigned long long)arg3 maxCount:(unsigned long long)arg4;
- (void)__queryLocalPeerAndReply:(id /* block */)arg1;
- (void)__startMonitoringEvents:(id)arg1 reply:(id /* block */)arg2;
- (void)__stopMonitoringEvents:(id)arg1 reply:(id /* block */)arg2;
- (bool)__tarballWithSource:(id)arg1 destination:(id)arg2 error:(id*)arg3;
- (void)cancelAllRequests;
- (void)cancelRequestWithUUID:(id)arg1;
- (id)collectLogs:(id)arg1 configuration:(id)arg2 update:(id /* block */)arg3 receipts:(out id*)arg4 error:(out id*)arg5;
- (id)collectLogs:(id)arg1 configuration:(id)arg2 update:(id /* block */)arg3 reply:(id /* block */)arg4;
- (void)dealloc;
- (id)discoverDevicesWithConfiguration:(id)arg1 error:(out id*)arg2;
- (id)discoverDevicesWithConfiguration:(id)arg1 reply:(id /* block */)arg2;
- (id /* block */)eventCallback;
- (id)init;
- (id)localPeer;
- (void)log:(id)arg1 timestamp:(bool)arg2;
- (id)peers;
- (id)queryDebugConfigurationForPeer:(id)arg1 error:(out id*)arg2;
- (void)queryDebugConfigurationForPeer:(id)arg1 reply:(id /* block */)arg2;
- (id)queryStatusForPeer:(id)arg1 error:(out id*)arg2;
- (void)queryStatusForPeer:(id)arg1 reply:(id /* block */)arg2;
- (void)receivedEvent:(id)arg1;
- (id)runDiagnostics:(id)arg1 configuration:(id)arg2 update:(id /* block */)arg3 error:(out id*)arg4;
- (id)runDiagnostics:(id)arg1 configuration:(id)arg2 update:(id /* block */)arg3 reply:(id /* block */)arg4;
- (id)runWiFiPerformanceLoggingWithConfiguration:(id)arg1 error:(out id*)arg2;
- (id)runWiFiPerformanceLoggingWithConfiguration:(id)arg1 reply:(id /* block */)arg2;
- (id)runWiFiSnifferOnChannel:(id)arg1 duration:(double)arg2 peer:(id)arg3 error:(out id*)arg4;
- (id)runWiFiSnifferOnChannel:(id)arg1 duration:(double)arg2 peer:(id)arg3 reply:(id /* block */)arg4;
- (bool)setDebugConfiguration:(id)arg1 peer:(id)arg2 error:(out id*)arg3;
- (void)setDebugConfiguration:(id)arg1 peer:(id)arg2 reply:(id /* block */)arg3;
- (void)setEventCallback:(id /* block */)arg1;
- (void)startBrowsing;
- (void)startMonitoringEvents:(id)arg1;
- (void)stopBrowsing;
- (void)stopMonitoringEvents:(id)arg1;

@end
