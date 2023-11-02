
@protocol HFCameraObserver <HMCameraSnapshotControlDelegate, HMCameraStreamControlDelegate, HMCameraUserSettingsDelegate, HMCameraClipManagerObserver>

@optional

- (void)cameraStream:(HMCameraStream *)arg1 didUpdateAudioStreamSettingWithError:(NSError *)arg2;
- (void)cameraStreamControlDidUpdateManagerState:(HMCameraStreamControl *)arg1;
- (void)cameraStreamControlDidUpdateStreamState:(HMCameraStreamControl *)arg1;

@end
