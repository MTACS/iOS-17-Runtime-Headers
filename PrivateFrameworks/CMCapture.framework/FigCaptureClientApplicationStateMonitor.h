
@interface FigCaptureClientApplicationStateMonitor : NSObject <FigCaptureDeviceLockStateObserver, FigCaptureDisplayLayoutObserver> {
    int  _aggregateLayoutState;
    int  _applicationState;
    AVAudioSession * _audioSession;
    id  _audioSessionApplicationStateDidChangeNotificationToken;
    id  _audioSessionMediaServicesWereResetNotificationToken;
    unsigned int  _bksApplicationState;
    bool  _bksApplicationStateInitialized;
    FigCaptureClientApplicationStateMonitorClient * _client;
    struct opaqueCMSession { } * _cmSession;
    bool  _deviceIsLocked;
    bool  _deviceLockStateInitialized;
    FigCaptureDeviceLockStateMonitor * _deviceLockStateMonitor;
    FigCaptureDisplayLayoutMonitor * _displayLayoutMonitor;
    FigCaptureDisplayLayoutMonitor * _externalDisplayLayoutMonitor;
    int  _externalDisplayLayoutState;
    bool  _invalid;
    bool  _isBKSApplicationStateMonitoringRequiredForClient;
    bool  _isDeviceLockStateMonitoringRequiredForClient;
    bool  _isExternalDisplayLayoutMonitoringRequiredForClient;
    bool  _isExternalDisplayLayoutStateInitialized;
    bool  _isLayoutMonitoringRequiredForClient;
    int  _layoutState;
    bool  _layoutStateInitialized;
    struct OpaqueFigSimpleMutex { } * _stateChangeLock;
}

@property (readonly) NSString *applicationID;
@property (readonly) int applicationState;
@property (readonly) int clientType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;
+ (void)startContinuityCaptureTerminationMonitorWithHandler:(id /* block */)arg1;
+ (void)startPrewarmingMonitorWithHandler:(id /* block */)arg1;
+ (void)stopPrewarmingMonitor;

- (id)applicationID;
- (int)applicationState;
- (int)clientType;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)deviceLockStateMonitor:(id)arg1 didUpdateDeviceLockState:(bool)arg2;
- (id)initWithClientAuditToken:(struct { unsigned int x1[8]; })arg1 forThirdPartyTorch:(bool)arg2 applicationAndLayoutStateHandler:(id /* block */)arg3;
- (void)invalidate;
- (void)layoutMonitor:(id)arg1 didUpdateLayout:(id)arg2;
- (void)updateApplicationState;

@end
