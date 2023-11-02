
@interface DEDXPCOutbound : NSObject <DEDClientProtocol, DEDWorkerProtocol> {
    <DEDXPCProtocol> * _remoteObject;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) <DEDXPCProtocol> *remoteObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addSessionData:(id)arg1 withFilename:(id)arg2 forSession:(id)arg3;
- (void)adoptFiles:(id)arg1 forSession:(id)arg2;
- (void)cancelSession:(id)arg1;
- (void)commitSession:(id)arg1;
- (void)compressionProgress:(unsigned long long)arg1 total:(unsigned long long)arg2 sessionID:(id)arg3;
- (void)deviceSupportsDiagnosticExtensions:(id)arg1 session:(id)arg2;
- (void)didAdoptFilesWithError:(id)arg1 forSession:(id)arg2;
- (void)didCancelSession:(id)arg1;
- (void)didCommitSession:(id)arg1;
- (void)didGetState:(long long)arg1 info:(id)arg2 sessionID:(id)arg3;
- (void)didLoadTextDataForExtensions:(id)arg1 localization:(id)arg2 session:(id)arg3;
- (void)finishedDiagnosticWithIdentifier:(id)arg1 result:(id)arg2 session:(id)arg3;
- (void)getSessionStateWithSession:(id)arg1;
- (void)getSessionStatusWithSession:(id)arg1;
- (void)hasCollected:(id)arg1 isCollecting:(id)arg2 inSession:(id)arg3;
- (void)hasCollected:(id)arg1 isCollecting:(id)arg2 withIdentifiers:(id)arg3 inSession:(id)arg4;
- (id)initWithRemoteObject:(id)arg1;
- (void)listAvailableExtensionsForSession:(id)arg1;
- (void)loadTextDataForExtensions:(id)arg1 localization:(id)arg2 sessionID:(id)arg3;
- (void)pingSession:(id)arg1;
- (void)pongSession:(id)arg1;
- (id)remoteObject;
- (void)scheduleNotificationForSession:(id)arg1;
- (void)setRemoteObject:(id)arg1;
- (void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 deferRunUntil:(id)arg3 session:(id)arg4;
- (void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 session:(id)arg3;
- (void)syncSessionStatusWithSession:(id)arg1;
- (void)terminateExtension:(id)arg1 info:(id)arg2 session:(id)arg3;
- (long long)transportType;
- (void)unscheduleNotificationForSession:(id)arg1;
- (void)uploadProgress:(unsigned long long)arg1 total:(unsigned long long)arg2 sessionID:(id)arg3;

@end
