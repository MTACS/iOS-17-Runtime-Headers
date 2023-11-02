
@protocol NACIDSClientDelegate <NSObject>

@required

- (void)client:(NACIDSClient *)arg1 EULimit:(float)arg2 didChangeForTarget:(NACProxyVolumeControlTarget *)arg3;
- (void)client:(NACIDSClient *)arg1 audioRoutes:(NSArray *)arg2 didChangeForCategory:(NSString *)arg3;
- (void)client:(NACIDSClient *)arg1 availableListeningModes:(NSOrderedSet *)arg2 didChangeForTarget:(NACProxyVolumeControlTarget *)arg3;
- (void)client:(NACIDSClient *)arg1 currentListeningMode:(NSString *)arg2 didChangeForTarget:(NACProxyVolumeControlTarget *)arg3;
- (void)client:(NACIDSClient *)arg1 didFailToSetCurrentListeningModeForTarget:(NACProxyVolumeControlTarget *)arg2 error:(NSError *)arg3;
- (void)client:(NACIDSClient *)arg1 hapticIntensityDidChange:(float)arg2;
- (void)client:(NACIDSClient *)arg1 hapticStateDidChange:(long long)arg2;
- (void)client:(NACIDSClient *)arg1 mutedState:(bool)arg2 didChangeForTarget:(NACProxyVolumeControlTarget *)arg3;
- (void)client:(NACIDSClient *)arg1 prominentHapticStateDidChange:(bool)arg2;
- (void)client:(NACIDSClient *)arg1 routeObservationCancelledForCategory:(NSString *)arg2;
- (void)client:(NACIDSClient *)arg1 systemMutedStateDidChange:(bool)arg2;
- (void)client:(NACIDSClient *)arg1 volumeControlAvailable:(bool)arg2 didChangeForTarget:(NACProxyVolumeControlTarget *)arg3;
- (void)client:(NACIDSClient *)arg1 volumeObservationCancelledForTarget:(NACProxyVolumeControlTarget *)arg2;
- (void)client:(NACIDSClient *)arg1 volumeValue:(float)arg2 didChangeForTarget:(NACProxyVolumeControlTarget *)arg3;
- (void)client:(NACIDSClient *)arg1 volumeWarningEnabled:(bool)arg2 volumeWarningState:(long long)arg3 didChangeForTarget:(NACProxyVolumeControlTarget *)arg4;

@end
