
@protocol AVConferencePreviewClientDelegate

@optional

- (void)cameraCinematicFramingAvailabilityDidChange:(bool)arg1;
- (void)cameraDidBecomeAvailableForUniqueID:(NSString *)arg1;
- (void)cameraDidBecomeInterruptedForForUniqueID:(NSString *)arg1 reason:(long long)arg2;
- (void)cameraZoomAvailabilityDidChange:(bool)arg1;
- (void)cameraZoomAvailabilityDidChange:(bool)arg1 currentZoomFactor:(double)arg2 maxZoomFactor:(double)arg3;
- (void)didChangeLocalCameraUID:(NSString *)arg1;
- (void)didChangeLocalScreenAttributes:(VideoAttributes *)arg1;
- (void)didChangeLocalVideoAttributes:(VideoAttributes *)arg1;
- (void)didGetSnapshot:(NSData *)arg1;
- (void)didPausePreview;
- (void)didReceiveCommError;
- (void)didReceiveErrorFromCameraUniqueID:(NSString *)arg1 error:(NSError *)arg2;
- (void)didReceiveFirstPreviewFrameFromCamera:(unsigned int)arg1;
- (void)didReceiveFirstPreviewFrameFromCameraUniqueID:(NSString *)arg1;
- (void)didStartPreview;
- (void)didStopPreview;

@end
