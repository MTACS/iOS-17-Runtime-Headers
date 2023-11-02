
@interface SBBiometricMonitorUI : NSObject <SBBiometricMonitorObserver> {
    <SBBiometricMonitorDataSource> * _dataSource;
    SBBiometricMonitorViewController * _debugViewController;
    UIWindow * _debugWindow;
    bool  _deferredMatchUpdatePending;
    bool  _deferredPresenceDetectUpdatePending;
    bool  _enabled;
    SBWindowScene * _windowScene;
}

@property (nonatomic, retain) <SBBiometricMonitorDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) SBWindowScene *windowScene;

- (void).cxx_destruct;
- (void)_cancelDeferredUpdateMatchState;
- (void)_cancelDeferredUpdatePresenceDetectState;
- (void)_deferredUpdateMatchState;
- (void)_deferredUpdatePresenceDetectState;
- (void)_doDeferredMatchStateUpdate;
- (void)_doDeferredPresenceDetectUpdate;
- (bool)_isDeferredMatchStateUpdatePending;
- (bool)_isDeferredPresenceDetectStateUpdatePending;
- (void)_updateMatchState;
- (void)_updatePresenceDetectState;
- (void)biometricMonitorDataSourceMatchingEnded:(id)arg1;
- (void)biometricMonitorDataSourceMatchingFailed:(id)arg1;
- (void)biometricMonitorDataSourceMatchingStarted:(id)arg1;
- (void)biometricMonitorDataSourceMatchingSucceeded:(id)arg1;
- (void)biometricMonitorDataSourcePoseUpdated:(id)arg1;
- (void)biometricMonitorDataSourcePresenceDetectionEnded:(id)arg1;
- (void)biometricMonitorDataSourcePresenceDetectionFailed:(id)arg1;
- (void)biometricMonitorDataSourcePresenceDetectionStarted:(id)arg1;
- (void)biometricMonitorDataSourcePresenceDetectionSucceeded:(id)arg1;
- (id)dataSource;
- (void)disable;
- (void)enable;
- (id)init;
- (void)setDataSource:(id)arg1;
- (void)setWindowScene:(id)arg1;
- (id)windowScene;

@end
