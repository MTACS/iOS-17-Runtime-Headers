
@interface HDSPSystemMonitor : NSObject <HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPSystemReadyDelegate> {
    HDSPApplicationWorkspaceMonitor * _applicationWorkspaceMonitor;
    <HDSPSystemReadyDelegate> * _delegate;
    HDSPDevicePowerMonitor * _devicePowerMonitor;
    HDSPDeviceUnlockMonitor * _deviceUnlockMonitor;
    HDSPEnvironment * _environment;
    <HKSPMutexProvider> * _mutexProvider;
    bool  _systemReady;
    <HDSPSystemReadyProvider> * _systemReadyProvider;
    HDSPWatchOnWristMonitor * _watchOnWristMonitor;
}

@property (nonatomic, readonly) HDSPApplicationWorkspaceMonitor *applicationWorkspaceMonitor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDSPSystemReadyDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDSPDevicePowerMonitor *devicePowerMonitor;
@property (nonatomic, readonly) HDSPDeviceUnlockMonitor *deviceUnlockMonitor;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSystemReady;
@property (nonatomic, readonly) <HKSPMutexProvider> *mutexProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool systemReady;
@property (nonatomic, readonly) <HDSPSystemReadyProvider> *systemReadyProvider;
@property (nonatomic, readonly) HDSPWatchOnWristMonitor *watchOnWristMonitor;

+ (id)_platformSpecificReadyProviderForEnvironment:(id)arg1;

- (void).cxx_destruct;
- (void)_withLock:(id /* block */)arg1;
- (id)applicationWorkspaceMonitor;
- (id)delegate;
- (id)devicePowerMonitor;
- (id)deviceUnlockMonitor;
- (id)diagnosticDescription;
- (id)diagnosticInfo;
- (id)environment;
- (void)environmentDidBecomeReady:(id)arg1;
- (void)environmentWillBecomeReady:(id)arg1;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithEnvironment:(id)arg1 watchOnWristMonitor:(id)arg2 devicePowerMonitor:(id)arg3 deviceUnlockMonitor:(id)arg4;
- (id)initWithEnvironment:(id)arg1 watchOnWristMonitor:(id)arg2 devicePowerMonitor:(id)arg3 deviceUnlockMonitor:(id)arg4 systemReadyProvider:(id)arg5 applicationWorkspaceMonitor:(id)arg6;
- (bool)isSystemReady;
- (id)mutexProvider;
- (void)setDelegate:(id)arg1;
- (void)systemDidBecomeReady;
- (bool)systemReady;
- (id)systemReadyProvider;
- (id)watchOnWristMonitor;

@end
