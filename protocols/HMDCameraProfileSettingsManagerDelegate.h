
@protocol HMDCameraProfileSettingsManagerDelegate <NSObject>

@required

- (void)cameraProfileSettingsManager:(void *)arg1 canDisableRecordingWithCompletion:(void *)arg2; // needs 2 arg types, found 8: HMDCameraProfileSettingsManager *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)cameraProfileSettingsManager:(void *)arg1 canEnableRecordingWithCompletion:(void *)arg2; // needs 2 arg types, found 8: HMDCameraProfileSettingsManager *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
