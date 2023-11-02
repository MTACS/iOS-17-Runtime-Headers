
@protocol NACVolumeControllerDelegate <NSObject>

@optional

- (void)volumeController:(id <NACVolumeController>)arg1 didFailToSetCurrentListeningModeWithError:(NSError *)arg2;
- (void)volumeControllerDidUpdateAvailableListeningModes:(id <NACVolumeController>)arg1;
- (void)volumeControllerDidUpdateCurrentListeningMode:(id <NACVolumeController>)arg1;
- (void)volumeControllerDidUpdateEUVolumeLimit:(id <NACVolumeController>)arg1;
- (void)volumeControllerDidUpdateHapticIntensity:(id <NACVolumeController>)arg1;
- (void)volumeControllerDidUpdateHapticState:(id <NACVolumeController>)arg1;
- (void)volumeControllerDidUpdateMutedState:(id <NACVolumeController>)arg1;
- (void)volumeControllerDidUpdateProminentHapticState:(id <NACVolumeController>)arg1;
- (void)volumeControllerDidUpdateSystemMutedState:(id <NACVolumeController>)arg1;
- (void)volumeControllerDidUpdateVolumeControlAvailibility:(id <NACVolumeController>)arg1;
- (void)volumeControllerDidUpdateVolumeValue:(id <NACVolumeController>)arg1;
- (void)volumeControllerDidUpdateVolumeWarningEnabled:(id <NACVolumeController>)arg1;
- (void)volumeControllerDidUpdateVolumeWarningState:(id <NACVolumeController>)arg1;

@end
