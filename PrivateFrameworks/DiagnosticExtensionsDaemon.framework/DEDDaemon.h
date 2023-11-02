
@interface DEDDaemon : NSObject <DEDWorkerProtocol> {
    DEDDiagnosticCollector * __diagnosticCollector;
    NSOperationQueue * _backgroundOpQueue;
    NSArray * _cachedExtensionsForThisDevice;
    DEDConfiguration * _config;
    DEDController * _controller;
    bool  _embeddedInApp;
    NSOperationQueue * _userInitiatedOpQueue;
}

@property (retain) DEDDiagnosticCollector *_diagnosticCollector;
@property (retain) NSOperationQueue *backgroundOpQueue;
@property (retain) NSArray *cachedExtensionsForThisDevice;
@property (retain) DEDConfiguration *config;
@property (retain) DEDController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool embeddedInApp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (retain) NSOperationQueue *userInitiatedOpQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_controller;
- (id)_diagnosticCollector;
- (id)_extensionsForSession:(id)arg1;
- (void)_logOperations;
- (void)_startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 session:(id)arg3 runSetup:(bool)arg4;
- (void)_streamOperationStatus;
- (void)_syncSessionStatusWithSession:(id)arg1 withIdentifiers:(bool)arg2;
- (void)_syncSessionStatusWithSessionID:(id)arg1 withIdentifiers:(bool)arg2;
- (void)addSessionData:(id)arg1 withFilename:(id)arg2 forSession:(id)arg3;
- (void)adoptFiles:(id)arg1 forSession:(id)arg2;
- (id)attachmentHandler;
- (id)backgroundOpQueue;
- (id)cachedExtensionsForThisDevice;
- (void)cancelSession:(id)arg1;
- (void)commitSession:(id)arg1;
- (id)config;
- (void)configureForEmbedded:(bool)arg1;
- (id)controller;
- (id)diagnosticCollector;
- (bool)embeddedInApp;
- (void)finallyStartDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 session:(id)arg3;
- (void)getSessionStateWithSession:(id)arg1;
- (void)getSessionStatusWithSession:(id)arg1;
- (id)init;
- (void)listAvailableExtensionsForSession:(id)arg1;
- (void)loadTextDataForExtensions:(id)arg1 localization:(id)arg2 sessionID:(id)arg3;
- (bool)observesOperations;
- (void)pingSession:(id)arg1;
- (void)scheduleNotificationForSession:(id)arg1;
- (void)setBackgroundOpQueue:(id)arg1;
- (void)setCachedExtensionsForThisDevice:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)setController:(id)arg1;
- (void)setEmbeddedInApp:(bool)arg1;
- (void)setUserInitiatedOpQueue:(id)arg1;
- (void)set_diagnosticCollector:(id)arg1;
- (void)setupDeferredDiagnosticsWithExtensionInfo:(id)arg1;
- (void)start;
- (void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 deferRunUntil:(id)arg3 session:(id)arg4;
- (void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 session:(id)arg3;
- (void)syncSessionStatusWithSession:(id)arg1;
- (void)teardownDeferredDiagnosticsWithIdentifier:(id)arg1 parameters:(id)arg2 session:(id)arg3;
- (void)terminateExtension:(id)arg1 info:(id)arg2 session:(id)arg3;
- (long long)transportType;
- (void)unscheduleNotificationForSession:(id)arg1;
- (id)userInitiatedOpQueue;
- (void)warmUpCaches;

@end
