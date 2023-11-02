
@protocol MRUAudioModuleControllerObserver <NSObject>

@optional

- (void)audioModuleController:(MRUAudioModuleController *)arg1 conversationAwarenessController:(MRUConversationAwarenessController *)arg2 didChangeConversationAwarenessEnabled:(bool)arg3;
- (void)audioModuleController:(MRUAudioModuleController *)arg1 conversationAwarenessController:(MRUConversationAwarenessController *)arg2 didChangeConversationAwarenessSupported:(bool)arg3;
- (void)audioModuleController:(MRUAudioModuleController *)arg1 listeningModeController:(MRUListeningModeController *)arg2 didChangeAvailablePrimaryListeningMode:(NSArray *)arg3;
- (void)audioModuleController:(MRUAudioModuleController *)arg1 listeningModeController:(MRUListeningModeController *)arg2 didChangeAvailableSecondaryListeningModes:(NSArray *)arg3;
- (void)audioModuleController:(MRUAudioModuleController *)arg1 listeningModeController:(MRUListeningModeController *)arg2 didChangePrimaryListeningMode:(NSString *)arg3;
- (void)audioModuleController:(MRUAudioModuleController *)arg1 listeningModeController:(MRUListeningModeController *)arg2 didChangeSecondaryListeningMode:(NSString *)arg3;
- (void)audioModuleController:(MRUAudioModuleController *)arg1 spatialAudioController:(MRUSpatialAudioController *)arg2 didChangeAvailableSpatialModes:(NSArray *)arg3;
- (void)audioModuleController:(MRUAudioModuleController *)arg1 spatialAudioController:(MRUSpatialAudioController *)arg2 didChangeNowPlayingInfo:(MRUVolumeNowPlayingInfo *)arg3;
- (void)audioModuleController:(MRUAudioModuleController *)arg1 spatialAudioController:(MRUSpatialAudioController *)arg2 didChangeSelectedSpatialMode:(MRUSpatialAudioMode *)arg3;
- (void)audioModuleController:(MRUAudioModuleController *)arg1 systemOutputDeviceRouteControllerDidUpdateOutputDeviceProperties:(MRUSystemOutputDeviceRouteController *)arg2;
- (void)audioModuleController:(MRUAudioModuleController *)arg1 systemOutputDeviceRouteControllerDidUpdateOutputDevices:(MRUSystemOutputDeviceRouteController *)arg2;
- (void)audioModuleController:(MRUAudioModuleController *)arg1 volumeController:(MRUSystemVolumeController *)arg2 didChangeVolumeControlCapabilities:(unsigned int)arg3 effectiveVolumeValue:(float)arg4 forType:(long long)arg5;

@end
