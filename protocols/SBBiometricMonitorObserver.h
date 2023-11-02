
@protocol SBBiometricMonitorObserver <NSObject>

@optional

- (void)biometricMonitorDataSourceMatchingEnded:(id <SBBiometricMonitorDataSource>)arg1;
- (void)biometricMonitorDataSourceMatchingFailed:(id <SBBiometricMonitorDataSource>)arg1;
- (void)biometricMonitorDataSourceMatchingStarted:(id <SBBiometricMonitorDataSource>)arg1;
- (void)biometricMonitorDataSourceMatchingSucceeded:(id <SBBiometricMonitorDataSource>)arg1;
- (void)biometricMonitorDataSourcePoseUpdated:(id <SBBiometricMonitorDataSource>)arg1;
- (void)biometricMonitorDataSourcePresenceDetectionEnded:(id <SBBiometricMonitorDataSource>)arg1;
- (void)biometricMonitorDataSourcePresenceDetectionFailed:(id <SBBiometricMonitorDataSource>)arg1;
- (void)biometricMonitorDataSourcePresenceDetectionStarted:(id <SBBiometricMonitorDataSource>)arg1;
- (void)biometricMonitorDataSourcePresenceDetectionSucceeded:(id <SBBiometricMonitorDataSource>)arg1;

@end
