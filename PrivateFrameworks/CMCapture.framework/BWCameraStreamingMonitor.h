
@interface BWCameraStreamingMonitor : NSObject {
    NSMutableSet * _activeStreamUniqueIDs;
    NSObject<OS_dispatch_queue> * _cameraStreamingMonitorQueue;
    NSMutableDictionary * _clientInfoByPID;
    NSMutableDictionary * _managedClientInfoByBundleID;
    STMediaStatusDomainPublisher * _mediaStatusDomainPublisher;
    bool  _msnReportingEnabled;
    PAAccessLogger * _privacyAccountingAccessLogger;
    bool  _systemStatusReportingEnabled;
}

+ (void)initialize;
+ (id)sharedCameraStreamingMonitor;

- (void)dealloc;
- (id)initWithMediaStatusDomainPublisher:(id)arg1 msnReportingEnabled:(bool)arg2 systemStatusReportingEnabled:(bool)arg3 privacyAccountingAccessLogger:(id)arg4;
- (void)setCameraAccess:(bool)arg1 deviceType:(int)arg2 clientAuditToken:(struct { unsigned int x1[8]; })arg3 tccIdentity:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)setStreaming:(bool)arg1 deviceType:(int)arg2 streamUniqueID:(id)arg3 clientAuditToken:(struct { unsigned int x1[8]; })arg4 tccIdentity:(id)arg5 completionHandler:(id /* block */)arg6;

@end
