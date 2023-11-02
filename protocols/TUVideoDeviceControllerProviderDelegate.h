
@protocol TUVideoDeviceControllerProviderDelegate <AVConferencePreviewClientDelegate>

@required

- (void)captureDevicesChangedForProvider:(id <TUVideoDeviceControllerProvider>)arg1;
- (void)didPausePreviewForProvider:(id <TUVideoDeviceControllerProvider>)arg1;
- (void)didStartPreviewForProvider:(id <TUVideoDeviceControllerProvider>)arg1;
- (void)didStopPreviewForProvider:(id <TUVideoDeviceControllerProvider>)arg1;
- (void)provider:(id <TUVideoDeviceControllerProvider>)arg1 cameraBlurEnabledDidChange:(bool)arg2;
- (void)provider:(id <TUVideoDeviceControllerProvider>)arg1 cameraCinematicFramingAvailabilityDidChange:(bool)arg2;
- (void)provider:(id <TUVideoDeviceControllerProvider>)arg1 cameraCinematicFramingEnabledDidChange:(bool)arg2;
- (void)provider:(id <TUVideoDeviceControllerProvider>)arg1 cameraDidBecomeAvailableForUniqueID:(NSString *)arg2;
- (void)provider:(id <TUVideoDeviceControllerProvider>)arg1 cameraZoomAvailabilityDidChange:(bool)arg2;
- (void)provider:(id <TUVideoDeviceControllerProvider>)arg1 didChangeLocalCameraUID:(NSString *)arg2;
- (void)provider:(id <TUVideoDeviceControllerProvider>)arg1 didChangeLocalVideoAttributes:(VideoAttributes *)arg2;
- (void)provider:(id <TUVideoDeviceControllerProvider>)arg1 didGetSnapshot:(NSData *)arg2;
- (void)provider:(id <TUVideoDeviceControllerProvider>)arg1 didReceiveErrorFromCameraUniqueID:(NSString *)arg2 error:(NSError *)arg3;
- (void)provider:(id <TUVideoDeviceControllerProvider>)arg1 didReceiveFirstPreviewFrameFromCameraUniqueID:(NSString *)arg2;
- (void)provider:(id <TUVideoDeviceControllerProvider>)arg1 reactionEffectsEnabledDidChange:(bool)arg2;
- (void)provider:(id <TUVideoDeviceControllerProvider>)arg1 studioLightEnabledDidChange:(bool)arg2;
- (void)provider:(id <TUVideoDeviceControllerProvider>)arg1 systemPreferredCameraUIDDidChange:(NSString *)arg2;
- (void)provider:(id <TUVideoDeviceControllerProvider>)arg1 userPreferredCameraUIDDidChange:(NSString *)arg2;

@end
